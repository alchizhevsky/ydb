// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any.proto

#include <google/protobuf/any.pb.h>

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
PROTOBUF_NAMESPACE_OPEN
constexpr Any::Any(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : type_url_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , value_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , _any_metadata_(&type_url_, &value_){}
struct AnyDefaultTypeInternal {
  constexpr AnyDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AnyDefaultTypeInternal() {}
  union {
    Any _instance;
  };
}; 
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AnyDefaultTypeInternal _Any_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2fany_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2fany_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2fany_2eproto = nullptr;
 
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2fany_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_ 
  PROTOBUF_FIELD_OFFSET(PROTOBUF_NAMESPACE_ID::Any, _internal_metadata_),
  ~0u,  // no _extensions_ 
  ~0u,  // no _oneof_case_ 
  ~0u,  // no _weak_field_map_ 
  PROTOBUF_FIELD_OFFSET(PROTOBUF_NAMESPACE_ID::Any, type_url_),
  PROTOBUF_FIELD_OFFSET(PROTOBUF_NAMESPACE_ID::Any, value_),
}; 
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(PROTOBUF_NAMESPACE_ID::Any)},
}; 

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&PROTOBUF_NAMESPACE_ID::_Any_default_instance_),
}; 
 
const char descriptor_table_protodef_google_2fprotobuf_2fany_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031google/protobuf/any.proto\022\017google.prot"
  "obuf\"&\n\003Any\022\020\n\010type_url\030\001 \001(\t\022\r\n\005value\030\002"
  " \001(\014Bv\n\023com.google.protobufB\010AnyProtoP\001Z"
  ",google.golang.org/protobuf/types/known/"
  "anypb\242\002\003GPB\252\002\036Google.Protobuf.WellKnownT"
  "ypesb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2fany_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fany_2eproto = {
  false, false, 212, descriptor_table_protodef_google_2fprotobuf_2fany_2eproto, "google/protobuf/any.proto", 
  &descriptor_table_google_2fprotobuf_2fany_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2fany_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2fany_2eproto, file_level_enum_descriptors_google_2fprotobuf_2fany_2eproto, file_level_service_descriptors_google_2fprotobuf_2fany_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_google_2fprotobuf_2fany_2eproto_getter() {
  return &descriptor_table_google_2fprotobuf_2fany_2eproto;
} 
 
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2fprotobuf_2fany_2eproto(&descriptor_table_google_2fprotobuf_2fany_2eproto);
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

bool Any::GetAnyFieldDescriptors(
    const ::PROTOBUF_NAMESPACE_ID::Message& message,
    const ::PROTOBUF_NAMESPACE_ID::FieldDescriptor** type_url_field,
    const ::PROTOBUF_NAMESPACE_ID::FieldDescriptor** value_field) {
  return ::PROTOBUF_NAMESPACE_ID::internal::GetAnyFieldDescriptors(
      message, type_url_field, value_field);
}
bool Any::ParseAnyTypeUrl(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam type_url,
    TProtoStringType* full_type_name) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseAnyTypeUrl(type_url,
                                             full_type_name);
}

class Any::_Internal {
 public:
};

Any::Any(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  _any_metadata_(&type_url_, &value_) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Any)
}
Any::Any(const Any& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _any_metadata_(&type_url_, &value_) { 
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  type_url_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_type_url().empty()) {
    type_url_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_type_url(), 
      GetArenaForAllocation());
  } 
  value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_value().empty()) {
    value_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_value(), 
      GetArenaForAllocation());
  } 
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Any)
}

void Any::SharedCtor() {
type_url_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Any::~Any() {
  // @@protoc_insertion_point(destructor:google.protobuf.Any)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Any::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  type_url_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Any::ArenaDtor(void* object) {
  Any* _this = reinterpret_cast< Any* >(object);
  (void)_this;
}
void Any::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Any::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Any::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Any)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused 
  (void) cached_has_bits; 
 
  type_url_.ClearToEmpty();
  value_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Any::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string type_url = 1; 
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_type_url();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "google.protobuf.Any.type_url"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes value = 2; 
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_value();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Any::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Any)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits; 
 
  // string type_url = 1; 
  if (!this->_internal_type_url().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type_url().data(), static_cast<int>(this->_internal_type_url().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Any.type_url");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type_url(), target);
  }

  // bytes value = 2; 
  if (!this->_internal_value().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  } 
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Any)
  return target;
}

size_t Any::ByteSizeLong() const { 
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Any)
  size_t total_size = 0; 

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string type_url = 1; 
  if (!this->_internal_type_url().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type_url());
  }

  // bytes value = 2; 
  if (!this->_internal_value().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_value());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Any::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Any::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Any::GetClassData() const { return &_class_data_; }

void Any::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Any *>(to)->MergeFrom(
      static_cast<const Any &>(from));
}


void Any::MergeFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Any)
  GOOGLE_DCHECK_NE(&from, this); 
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits; 
 
  if (!from._internal_type_url().empty()) {
    _internal_set_type_url(from._internal_type_url());
  }
  if (!from._internal_value().empty()) {
    _internal_set_value(from._internal_value());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Any::CopyFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from); 
}

bool Any::IsInitialized() const {
  return true;
}

void Any::InternalSwap(Any* other) {
  using std::swap; 
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &type_url_, GetArenaForAllocation(),
      &other->type_url_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &value_, GetArenaForAllocation(),
      &other->value_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Any::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2fany_2eproto_getter, &descriptor_table_google_2fprotobuf_2fany_2eproto_once,
      file_level_metadata_google_2fprotobuf_2fany_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE PROTOBUF_NAMESPACE_ID::Any* Arena::CreateMaybeMessage< PROTOBUF_NAMESPACE_ID::Any >(Arena* arena) {
  return Arena::CreateMessageInternal< PROTOBUF_NAMESPACE_ID::Any >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
