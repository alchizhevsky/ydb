#pragma once 
 
#ifdef __GNUC__ 
#pragma GCC diagnostic push 
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#endif 
 
//===- IPDBEnumChildren.h - base interface for child enumerator -*- C++ -*-===// 
// 
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions. 
// See https://llvm.org/LICENSE.txt for license information. 
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception 
// 
//===----------------------------------------------------------------------===// 
 
#ifndef LLVM_DEBUGINFO_PDB_IPDBENUMCHILDREN_H 
#define LLVM_DEBUGINFO_PDB_IPDBENUMCHILDREN_H 
 
#include <cassert> 
#include <cstdint> 
#include <memory> 
 
namespace llvm { 
namespace pdb { 
 
template <typename ChildType> class IPDBEnumChildren { 
public: 
  using ChildTypePtr = std::unique_ptr<ChildType>; 
  using MyType = IPDBEnumChildren<ChildType>; 
 
  virtual ~IPDBEnumChildren() = default; 
 
  virtual uint32_t getChildCount() const = 0; 
  virtual ChildTypePtr getChildAtIndex(uint32_t Index) const = 0; 
  virtual ChildTypePtr getNext() = 0; 
  virtual void reset() = 0; 
}; 
 
template <typename ChildType> 
class NullEnumerator : public IPDBEnumChildren<ChildType> { 
  virtual uint32_t getChildCount() const override { return 0; } 
  virtual std::unique_ptr<ChildType> 
  getChildAtIndex(uint32_t Index) const override { 
    return nullptr; 
  } 
  virtual std::unique_ptr<ChildType> getNext() override { 
    return nullptr; 
  } 
  virtual void reset() override {} 
}; 
 
} // end namespace pdb 
} // end namespace llvm 
 
#endif // LLVM_DEBUGINFO_PDB_IPDBENUMCHILDREN_H 
 
#ifdef __GNUC__ 
#pragma GCC diagnostic pop 
#endif 
