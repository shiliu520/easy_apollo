// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/header.proto

#include "modules/common/proto/header.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_modules_2fcommon_2fproto_2ferror_5fcode_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_StatusPb_modules_2fcommon_2fproto_2ferror_5fcode_2eproto;
namespace apollo {
namespace common {
class HeaderDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Header> _instance;
} _Header_default_instance_;
}  // namespace common
}  // namespace apollo
static void InitDefaultsscc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::common::_Header_default_instance_;
    new (ptr) ::apollo::common::Header();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto}, {
      &scc_info_StatusPb_modules_2fcommon_2fproto_2ferror_5fcode_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fcommon_2fproto_2fheader_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fcommon_2fproto_2fheader_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fcommon_2fproto_2fheader_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fcommon_2fproto_2fheader_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, timestamp_sec_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, module_name_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, sequence_num_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, lidar_timestamp_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, camera_timestamp_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, radar_timestamp_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, version_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, status_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::Header, frame_id_),
  3,
  0,
  7,
  4,
  5,
  6,
  8,
  2,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 14, sizeof(::apollo::common::Header)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::common::_Header_default_instance_),
};

const char descriptor_table_protodef_modules_2fcommon_2fproto_2fheader_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!modules/common/proto/header.proto\022\rapo"
  "llo.common\032%modules/common/proto/error_c"
  "ode.proto\"\345\001\n\006Header\022\025\n\rtimestamp_sec\030\001 "
  "\001(\001\022\023\n\013module_name\030\002 \001(\t\022\024\n\014sequence_num"
  "\030\003 \001(\r\022\027\n\017lidar_timestamp\030\004 \001(\004\022\030\n\020camer"
  "a_timestamp\030\005 \001(\004\022\027\n\017radar_timestamp\030\006 \001"
  "(\004\022\022\n\007version\030\007 \001(\r:\0011\022\'\n\006status\030\010 \001(\0132\027"
  ".apollo.common.StatusPb\022\020\n\010frame_id\030\t \001("
  "\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_deps[1] = {
  &::descriptor_table_modules_2fcommon_2fproto_2ferror_5fcode_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_sccs[1] = {
  &scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto = {
  false, false, descriptor_table_protodef_modules_2fcommon_2fproto_2fheader_2eproto, "modules/common/proto/header.proto", 321,
  &descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_once, descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_sccs, descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_modules_2fcommon_2fproto_2fheader_2eproto::offsets,
  file_level_metadata_modules_2fcommon_2fproto_2fheader_2eproto, 1, file_level_enum_descriptors_modules_2fcommon_2fproto_2fheader_2eproto, file_level_service_descriptors_modules_2fcommon_2fproto_2fheader_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fcommon_2fproto_2fheader_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto)), true);
namespace apollo {
namespace common {

// ===================================================================

class Header::_Internal {
 public:
  using HasBits = decltype(std::declval<Header>()._has_bits_);
  static void set_has_timestamp_sec(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_module_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_sequence_num(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_lidar_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_camera_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_radar_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_version(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static const ::apollo::common::StatusPb& status(const Header* msg);
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_frame_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::apollo::common::StatusPb&
Header::_Internal::status(const Header* msg) {
  return *msg->status_;
}
void Header::clear_status() {
  if (status_ != nullptr) status_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
Header::Header(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.common.Header)
}
Header::Header(const Header& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  module_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_module_name()) {
    module_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_module_name(), 
      GetArena());
  }
  frame_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_frame_id()) {
    frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_frame_id(), 
      GetArena());
  }
  if (from._internal_has_status()) {
    status_ = new ::apollo::common::StatusPb(*from.status_);
  } else {
    status_ = nullptr;
  }
  ::memcpy(&timestamp_sec_, &from.timestamp_sec_,
    static_cast<size_t>(reinterpret_cast<char*>(&version_) -
    reinterpret_cast<char*>(&timestamp_sec_)) + sizeof(version_));
  // @@protoc_insertion_point(copy_constructor:apollo.common.Header)
}

void Header::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto.base);
  module_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  frame_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&status_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&sequence_num_) -
      reinterpret_cast<char*>(&status_)) + sizeof(sequence_num_));
  version_ = 1u;
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:apollo.common.Header)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Header::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  module_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  frame_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete status_;
}

void Header::ArenaDtor(void* object) {
  Header* _this = reinterpret_cast< Header* >(object);
  (void)_this;
}
void Header::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Header::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Header& Header::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto.base);
  return *internal_default_instance();
}


void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      module_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      frame_id_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(status_ != nullptr);
      status_->Clear();
    }
  }
  if (cached_has_bits & 0x000000f8u) {
    ::memset(&timestamp_sec_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&sequence_num_) -
        reinterpret_cast<char*>(&timestamp_sec_)) + sizeof(sequence_num_));
  }
  version_ = 1u;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Header::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional double timestamp_sec = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_timestamp_sec(&has_bits);
          timestamp_sec_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional string module_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_module_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.common.Header.module_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 sequence_num = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_sequence_num(&has_bits);
          sequence_num_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 lidar_timestamp = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_lidar_timestamp(&has_bits);
          lidar_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 camera_timestamp = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_camera_timestamp(&has_bits);
          camera_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 radar_timestamp = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_radar_timestamp(&has_bits);
          radar_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 version = 7 [default = 1];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_version(&has_bits);
          version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.common.StatusPb status = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_status(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string frame_id = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_frame_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.common.Header.frame_id");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Header::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.Header)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double timestamp_sec = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_timestamp_sec(), target);
  }

  // optional string module_name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_module_name().data(), static_cast<int>(this->_internal_module_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.common.Header.module_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_module_name(), target);
  }

  // optional uint32 sequence_num = 3;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_sequence_num(), target);
  }

  // optional uint64 lidar_timestamp = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->_internal_lidar_timestamp(), target);
  }

  // optional uint64 camera_timestamp = 5;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(5, this->_internal_camera_timestamp(), target);
  }

  // optional uint64 radar_timestamp = 6;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(6, this->_internal_radar_timestamp(), target);
  }

  // optional uint32 version = 7 [default = 1];
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(7, this->_internal_version(), target);
  }

  // optional .apollo.common.StatusPb status = 8;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::status(this), target, stream);
  }

  // optional string frame_id = 9;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_frame_id().data(), static_cast<int>(this->_internal_frame_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.common.Header.frame_id");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_frame_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.Header)
  return target;
}

size_t Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.Header)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string module_name = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_module_name());
    }

    // optional string frame_id = 9;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_frame_id());
    }

    // optional .apollo.common.StatusPb status = 8;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *status_);
    }

    // optional double timestamp_sec = 1;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional uint64 lidar_timestamp = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_lidar_timestamp());
    }

    // optional uint64 camera_timestamp = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_camera_timestamp());
    }

    // optional uint64 radar_timestamp = 6;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_radar_timestamp());
    }

    // optional uint32 sequence_num = 3;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_sequence_num());
    }

  }
  // optional uint32 version = 7 [default = 1];
  if (cached_has_bits & 0x00000100u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_version());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Header::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.Header)
  GOOGLE_DCHECK_NE(&from, this);
  const Header* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Header>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.Header)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.Header)
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.Header)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_module_name(from._internal_module_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_frame_id(from._internal_frame_id());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_status()->::apollo::common::StatusPb::MergeFrom(from._internal_status());
    }
    if (cached_has_bits & 0x00000008u) {
      timestamp_sec_ = from.timestamp_sec_;
    }
    if (cached_has_bits & 0x00000010u) {
      lidar_timestamp_ = from.lidar_timestamp_;
    }
    if (cached_has_bits & 0x00000020u) {
      camera_timestamp_ = from.camera_timestamp_;
    }
    if (cached_has_bits & 0x00000040u) {
      radar_timestamp_ = from.radar_timestamp_;
    }
    if (cached_has_bits & 0x00000080u) {
      sequence_num_ = from.sequence_num_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    _internal_set_version(from._internal_version());
  }
}

void Header::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  return true;
}

void Header::InternalSwap(Header* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  module_name_.Swap(&other->module_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  frame_id_.Swap(&other->frame_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Header, sequence_num_)
      + sizeof(Header::sequence_num_)
      - PROTOBUF_FIELD_OFFSET(Header, status_)>(
          reinterpret_cast<char*>(&status_),
          reinterpret_cast<char*>(&other->status_));
  swap(version_, other->version_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Header::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace common
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::common::Header* Arena::CreateMaybeMessage< ::apollo::common::Header >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::common::Header >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
