// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_import_public_lite.proto

#include "google/protobuf/unittest_import_public_lite.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace protobuf_unittest_import {
class PublicImportMessageLiteDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PublicImportMessageLite> _instance;
} _PublicImportMessageLite_default_instance_;
}  // namespace protobuf_unittest_import
static void InitDefaultsscc_info_PublicImportMessageLite_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protobuf_unittest_import::_PublicImportMessageLite_default_instance_;
    new (ptr) ::protobuf_unittest_import::PublicImportMessageLite();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest_import::PublicImportMessageLite::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PublicImportMessageLite_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_PublicImportMessageLite_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto}, {}};

namespace protobuf_unittest_import {

// ===================================================================

void PublicImportMessageLite::InitAsDefaultInstance() {
}
class PublicImportMessageLite::_Internal {
 public:
  using HasBits = decltype(std::declval<PublicImportMessageLite>()._has_bits_);
  static void set_has_e(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

PublicImportMessageLite::PublicImportMessageLite()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_unittest_import.PublicImportMessageLite)
}
PublicImportMessageLite::PublicImportMessageLite(const PublicImportMessageLite& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  e_ = from.e_;
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest_import.PublicImportMessageLite)
}

void PublicImportMessageLite::SharedCtor() {
  e_ = 0;
}

PublicImportMessageLite::~PublicImportMessageLite() {
  // @@protoc_insertion_point(destructor:protobuf_unittest_import.PublicImportMessageLite)
  SharedDtor();
}

void PublicImportMessageLite::SharedDtor() {
}

void PublicImportMessageLite::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PublicImportMessageLite& PublicImportMessageLite::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PublicImportMessageLite_google_2fprotobuf_2funittest_5fimport_5fpublic_5flite_2eproto.base);
  return *internal_default_instance();
}


void PublicImportMessageLite::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest_import.PublicImportMessageLite)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  e_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* PublicImportMessageLite::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 e = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_e(&has_bits);
          e_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool PublicImportMessageLite::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  ::PROTOBUF_NAMESPACE_ID::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:protobuf_unittest_import.PublicImportMessageLite)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 e = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          _Internal::set_has_e(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &e_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf_unittest_import.PublicImportMessageLite)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_unittest_import.PublicImportMessageLite)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void PublicImportMessageLite::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_unittest_import.PublicImportMessageLite)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 e = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(1, this->e(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:protobuf_unittest_import.PublicImportMessageLite)
}

size_t PublicImportMessageLite::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest_import.PublicImportMessageLite)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 e = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->e());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PublicImportMessageLite::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const PublicImportMessageLite*>(
      &from));
}

void PublicImportMessageLite::MergeFrom(const PublicImportMessageLite& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest_import.PublicImportMessageLite)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_e()) {
    set_e(from.e());
  }
}

void PublicImportMessageLite::CopyFrom(const PublicImportMessageLite& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest_import.PublicImportMessageLite)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PublicImportMessageLite::IsInitialized() const {
  return true;
}

void PublicImportMessageLite::InternalSwap(PublicImportMessageLite* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(e_, other->e_);
}

std::string PublicImportMessageLite::GetTypeName() const {
  return "protobuf_unittest_import.PublicImportMessageLite";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest_import
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protobuf_unittest_import::PublicImportMessageLite* Arena::CreateMaybeMessage< ::protobuf_unittest_import::PublicImportMessageLite >(Arena* arena) {
  return Arena::CreateInternal< ::protobuf_unittest_import::PublicImportMessageLite >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
