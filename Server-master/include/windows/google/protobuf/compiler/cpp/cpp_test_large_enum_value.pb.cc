// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/compiler/cpp/cpp_test_large_enum_value.proto

#include "google/protobuf/compiler/cpp/cpp_test_large_enum_value.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace protobuf_unittest {
class TestLargeEnumValueDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TestLargeEnumValue> _instance;
} _TestLargeEnumValue_default_instance_;
}  // namespace protobuf_unittest
static void InitDefaultsscc_info_TestLargeEnumValue_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protobuf_unittest::_TestLargeEnumValue_default_instance_;
    new (ptr) ::protobuf_unittest::TestLargeEnumValue();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest::TestLargeEnumValue::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TestLargeEnumValue_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_TestLargeEnumValue_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::TestLargeEnumValue, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::TestLargeEnumValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 5, sizeof(::protobuf_unittest::TestLargeEnumValue)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protobuf_unittest::_TestLargeEnumValue_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n<google/protobuf/compiler/cpp/cpp_test_"
  "large_enum_value.proto\022\021protobuf_unittes"
  "t\"J\n\022TestLargeEnumValue\"4\n\022EnumWithLarge"
  "Value\022\013\n\007VALUE_1\020\001\022\021\n\tVALUE_MAX\020\377\377\377\377\007"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto_sccs[1] = {
  &scc_info_TestLargeEnumValue_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto_once;
static bool descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto = {
  &descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto_initialized, descriptor_table_protodef_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto, "google/protobuf/compiler/cpp/cpp_test_large_enum_value.proto", 157,
  &descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto_once, descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto_sccs, descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto, 1, file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto, file_level_service_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto), true);
namespace protobuf_unittest {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TestLargeEnumValue_EnumWithLargeValue_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto[0];
}
bool TestLargeEnumValue_EnumWithLargeValue_IsValid(int value) {
  switch (value) {
    case 1:
    case 2147483647:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue::VALUE_1;
constexpr TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue::VALUE_MAX;
constexpr TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue::EnumWithLargeValue_MIN;
constexpr TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue::EnumWithLargeValue_MAX;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void TestLargeEnumValue::InitAsDefaultInstance() {
}
class TestLargeEnumValue::_Internal {
 public:
  using HasBits = decltype(std::declval<TestLargeEnumValue>()._has_bits_);
};

TestLargeEnumValue::TestLargeEnumValue()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest.TestLargeEnumValue)
}
TestLargeEnumValue::TestLargeEnumValue(const TestLargeEnumValue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.TestLargeEnumValue)
}

void TestLargeEnumValue::SharedCtor() {
}

TestLargeEnumValue::~TestLargeEnumValue() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.TestLargeEnumValue)
  SharedDtor();
}

void TestLargeEnumValue::SharedDtor() {
}

void TestLargeEnumValue::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TestLargeEnumValue& TestLargeEnumValue::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TestLargeEnumValue_google_2fprotobuf_2fcompiler_2fcpp_2fcpp_5ftest_5flarge_5fenum_5fvalue_2eproto.base);
  return *internal_default_instance();
}


void TestLargeEnumValue::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.TestLargeEnumValue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* TestLargeEnumValue::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      default: {
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool TestLargeEnumValue::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_unittest.TestLargeEnumValue)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest.TestLargeEnumValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest.TestLargeEnumValue)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void TestLargeEnumValue::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest.TestLargeEnumValue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_unittest.TestLargeEnumValue)
}

::PROTOBUF_NAMESPACE_ID::uint8* TestLargeEnumValue::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.TestLargeEnumValue)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.TestLargeEnumValue)
  return target;
}

size_t TestLargeEnumValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.TestLargeEnumValue)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestLargeEnumValue::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.TestLargeEnumValue)
  GOOGLE_DCHECK_NE(&from, this);
  const TestLargeEnumValue* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TestLargeEnumValue>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.TestLargeEnumValue)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.TestLargeEnumValue)
    MergeFrom(*source);
  }
}

void TestLargeEnumValue::MergeFrom(const TestLargeEnumValue& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.TestLargeEnumValue)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void TestLargeEnumValue::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.TestLargeEnumValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestLargeEnumValue::CopyFrom(const TestLargeEnumValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.TestLargeEnumValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestLargeEnumValue::IsInitialized() const {
  return true;
}

void TestLargeEnumValue::InternalSwap(TestLargeEnumValue* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata TestLargeEnumValue::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protobuf_unittest::TestLargeEnumValue* Arena::CreateMaybeMessage< ::protobuf_unittest::TestLargeEnumValue >(Arena* arena) {
  return Arena::CreateInternal< ::protobuf_unittest::TestLargeEnumValue >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
