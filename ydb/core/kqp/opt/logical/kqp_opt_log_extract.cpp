#include "kqp_opt_log_rules.h"

#include <ydb/core/kqp/common/kqp_yql.h>
#include <ydb/core/kqp/opt/kqp_opt_impl.h>
#include <ydb/core/kqp/provider/yql_kikimr_provider_impl.h>

#include <ydb/library/yql/core/yql_opt_utils.h>
#include <ydb/library/yql/dq/opt/dq_opt_log.h>
#include <ydb/library/yql/providers/common/provider/yql_table_lookup.h>

namespace NKikimr::NKqp::NOpt {

using namespace NYql;
using namespace NYql::NCommon;
using namespace NYql::NDq;
using namespace NYql::NNodes;

namespace {

TMaybeNode<TCoAtomList> GetUsedColumns(TExprBase read, TCoAtomList columns, const TParentsMap& parentsMap,
    bool allowMultiUsage, TExprContext& ctx)
{
    TSet<TString> usedColumnsSet;

    auto consumers = GetConsumers(read, parentsMap);
    if (!allowMultiUsage && consumers.size() > 1) {
        return {};
    }

    for (const auto& consumer : consumers) {
        auto maybeExtractMembers = TMaybeNode<TCoExtractMembers>(consumer);
        if (!maybeExtractMembers) {
            return {};
        }

        auto columns = maybeExtractMembers.Cast().Members();
        for (const auto& column : columns) {
            usedColumnsSet.emplace(column);
        }
    }

    YQL_ENSURE(usedColumnsSet.size() <= columns.Size());

    if (usedColumnsSet.size() == columns.Size()) {
        return {};
    }

    TVector<TExprNode::TPtr> usedColumns;
    usedColumns.reserve(usedColumnsSet.size());
    for (const auto& column : usedColumnsSet) {
        usedColumns.emplace_back(ctx.NewAtom(columns.Pos(), column));
    }

    return Build<TCoAtomList>(ctx, columns.Pos())
        .Add(usedColumns)
        .Done();
}

} // namespace

TExprBase KqpApplyExtractMembersToReadTable(TExprBase node, TExprContext& ctx, const TParentsMap& parentsMap,
    bool allowMultiUsage)
{
    if (!node.Maybe<TKqlReadTableBase>()) {
        return node;
    }

    auto read = node.Cast<TKqlReadTableBase>();

    auto usedColumns = GetUsedColumns(read, read.Columns(), parentsMap, allowMultiUsage, ctx);
    if (!usedColumns) {
        return node;
    }

    if (auto maybeIndexRead = read.Maybe<TKqlReadTableIndex>()) {
        auto indexRead = maybeIndexRead.Cast();

        return Build<TKqlReadTableIndex>(ctx, read.Pos())
            .Table(indexRead.Table())
            .Range(indexRead.Range())
            .Columns(usedColumns.Cast())
            .Index(indexRead.Index())
            .Settings(indexRead.Settings())
            .Done();
    }

    return Build<TKqlReadTableBase>(ctx, read.Pos())
        .CallableName(read.CallableName())
        .Table(read.Table())
        .Range(read.Range())
        .Columns(usedColumns.Cast())
        .Settings(read.Settings())
        .Done();
}

TExprBase KqpApplyExtractMembersToReadTableRanges(TExprBase node, TExprContext& ctx, const TParentsMap& parentsMap,
    bool allowMultiUsage)
{
    if (!node.Maybe<TKqlReadTableRangesBase>()) {
        return node;
    }

    // TKqpReadOlapTableRangesBase is derived from TKqlReadTableRangesBase, but should be handled separately
    if (node.Maybe<TKqpReadOlapTableRangesBase>()) {
        return node;
    }

    auto read = node.Cast<TKqlReadTableRangesBase>();

    auto usedColumns = GetUsedColumns(read, read.Columns(), parentsMap, allowMultiUsage, ctx);
    if (!usedColumns) {
        return node;
    }

    return Build<TKqlReadTableRangesBase>(ctx, read.Pos())
        .CallableName(read.CallableName())
        .Table(read.Table())
        .Ranges(read.Ranges())
        .Columns(usedColumns.Cast())
        .Settings(read.Settings())
        .ExplainPrompt(read.ExplainPrompt())
        .Done();
}

TExprBase KqpApplyExtractMembersToReadOlapTable(TExprBase node, TExprContext& ctx, const TParentsMap& parentsMap,
    bool allowMultiUsage)
{
    if (!node.Maybe<TKqpReadOlapTableRangesBase>()) {
        return node;
    }

    auto read = node.Cast<TKqpReadOlapTableRangesBase>();

    // When process is set it may use columns in read.Columns() but those columns may not be present
    // in the results. Thus do not apply extract members if process is not empty lambda
    // TODO: Support process lambda in this rule.
    if (read.Process().Body().Raw() != read.Process().Args().Arg(0).Raw()) {
        return node;
    }

    auto usedColumns = GetUsedColumns(read, read.Columns(), parentsMap, allowMultiUsage, ctx);
    if (!usedColumns) {
        return node;
    }

    return Build<TKqpReadOlapTableRangesBase>(ctx, read.Pos())
        .CallableName(read.CallableName())
        .Table(read.Table())
        .Ranges(read.Ranges())
        .Columns(usedColumns.Cast())
        .Settings(read.Settings())
        .ExplainPrompt(read.ExplainPrompt())
        .Process(read.Process())
        .Done();
}

TExprBase KqpApplyExtractMembersToLookupTable(TExprBase node, TExprContext& ctx, const TParentsMap& parentsMap,
    bool allowMultiUsage)
{
    if (!node.Maybe<TKqlLookupTableBase>()) {
        return node;
    }

    auto lookup = node.Cast<TKqlLookupTableBase>();

    auto usedColumns = GetUsedColumns(lookup, lookup.Columns(), parentsMap, allowMultiUsage, ctx);
    if (!usedColumns) {
        return node;
    }

    if (auto maybeIndexLookup = lookup.Maybe<TKqlLookupIndexBase>()) {
        auto indexLookup = maybeIndexLookup.Cast();

        return Build<TKqlLookupIndexBase>(ctx, lookup.Pos())
            .CallableName(indexLookup.CallableName())
            .Table(indexLookup.Table())
            .LookupKeys(indexLookup.LookupKeys())
            .Columns(usedColumns.Cast())
            .Index(indexLookup.Index())
            .Done();
    }

    return Build<TKqlLookupTableBase>(ctx, lookup.Pos())
        .CallableName(lookup.CallableName())
        .Table(lookup.Table())
        .LookupKeys(lookup.LookupKeys())
        .Columns(usedColumns.Cast())
        .Done();
}

} // namespace NKikimr::NKqp::NOpt

