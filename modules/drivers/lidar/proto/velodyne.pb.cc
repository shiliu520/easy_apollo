// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/drivers/lidar/proto/velodyne.proto

#include "modules/drivers/lidar/proto/velodyne.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_modules_2fcommon_2fproto_2fheader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VelodynePacket_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto;
namespace apollo {
namespace drivers {
namespace velodyne {
class VelodynePacketDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VelodynePacket> _instance;
} _VelodynePacket_default_instance_;
class VelodyneScanDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VelodyneScan> _instance;
} _VelodyneScan_default_instance_;
}  // namespace velodyne
}  // namespace drivers
}  // namespace apollo
static void InitDefaultsscc_info_VelodynePacket_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::drivers::velodyne::_VelodynePacket_default_instance_;
    new (ptr) ::apollo::drivers::velodyne::VelodynePacket();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VelodynePacket_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_VelodynePacket_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto}, {}};

static void InitDefaultsscc_info_VelodyneScan_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::drivers::velodyne::_VelodyneScan_default_instance_;
    new (ptr) ::apollo::drivers::velodyne::VelodyneScan();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_VelodyneScan_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_VelodyneScan_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto}, {
      &scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto.base,
      &scc_info_VelodynePacket_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodynePacket, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodynePacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodynePacket, stamp_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodynePacket, data_),
  1,
  0,
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, header_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, model_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, mode_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, firing_pkts_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, positioning_pkts_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, sn_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::velodyne::VelodyneScan, basetime_),
  1,
  3,
  4,
  ~0u,
  ~0u,
  0,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::apollo::drivers::velodyne::VelodynePacket)},
  { 9, 21, sizeof(::apollo::drivers::velodyne::VelodyneScan)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::drivers::velodyne::_VelodynePacket_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::drivers::velodyne::_VelodyneScan_default_instance_),
};

const char descriptor_table_protodef_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n*modules/drivers/lidar/proto/velodyne.p"
  "roto\022\027apollo.drivers.velodyne\032!modules/c"
  "ommon/proto/header.proto\"-\n\016VelodynePack"
  "et\022\r\n\005stamp\030\001 \001(\004\022\014\n\004data\030\002 \001(\014\"\263\002\n\014Velo"
  "dyneScan\022%\n\006header\030\001 \001(\0132\025.apollo.common"
  ".Header\022-\n\005model\030\002 \001(\0162\036.apollo.drivers."
  "velodyne.Model\022+\n\004mode\030\003 \001(\0162\035.apollo.dr"
  "ivers.velodyne.Mode\022<\n\013firing_pkts\030\004 \003(\013"
  "2\'.apollo.drivers.velodyne.VelodynePacke"
  "t\022A\n\020positioning_pkts\030\005 \003(\0132\'.apollo.dri"
  "vers.velodyne.VelodynePacket\022\n\n\002sn\030\006 \001(\t"
  "\022\023\n\010basetime\030\007 \001(\004:\0010*r\n\005Model\022\013\n\007UNKNOW"
  "N\020\000\022\016\n\nHDL64E_S3S\020\001\022\016\n\nHDL64E_S3D\020\002\022\r\n\tH"
  "DL64E_S2\020\003\022\n\n\006HDL32E\020\004\022\t\n\005VLP16\020\005\022\n\n\006VLP"
  "32C\020\006\022\n\n\006VLS128\020\007*)\n\004Mode\022\r\n\tSTRONGEST\020\001"
  "\022\010\n\004LAST\020\002\022\010\n\004DUAL\020\003"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto_deps[1] = {
  &::descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto_sccs[2] = {
  &scc_info_VelodynePacket_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto.base,
  &scc_info_VelodyneScan_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto = {
  false, false, descriptor_table_protodef_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto, "modules/drivers/lidar/proto/velodyne.proto", 620,
  &descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto_once, descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto_sccs, descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto::offsets,
  file_level_metadata_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto, 2, file_level_enum_descriptors_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto, file_level_service_descriptors_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto)), true);
namespace apollo {
namespace drivers {
namespace velodyne {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Model_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto);
  return file_level_enum_descriptors_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto[0];
}
bool Model_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Mode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto);
  return file_level_enum_descriptors_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto[1];
}
bool Mode_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class VelodynePacket::_Internal {
 public:
  using HasBits = decltype(std::declval<VelodynePacket>()._has_bits_);
  static void set_has_stamp(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

VelodynePacket::VelodynePacket(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.drivers.velodyne.VelodynePacket)
}
VelodynePacket::VelodynePacket(const VelodynePacket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_data()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArena());
  }
  stamp_ = from.stamp_;
  // @@protoc_insertion_point(copy_constructor:apollo.drivers.velodyne.VelodynePacket)
}

void VelodynePacket::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_VelodynePacket_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stamp_ = PROTOBUF_ULONGLONG(0);
}

VelodynePacket::~VelodynePacket() {
  // @@protoc_insertion_point(destructor:apollo.drivers.velodyne.VelodynePacket)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VelodynePacket::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void VelodynePacket::ArenaDtor(void* object) {
  VelodynePacket* _this = reinterpret_cast< VelodynePacket* >(object);
  (void)_this;
}
void VelodynePacket::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VelodynePacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VelodynePacket& VelodynePacket::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VelodynePacket_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto.base);
  return *internal_default_instance();
}


void VelodynePacket::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.drivers.velodyne.VelodynePacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    data_.ClearNonDefaultToEmpty();
  }
  stamp_ = PROTOBUF_ULONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VelodynePacket::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional uint64 stamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_stamp(&has_bits);
          stamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bytes data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* VelodynePacket::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.drivers.velodyne.VelodynePacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 stamp = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_stamp(), target);
  }

  // optional bytes data = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.drivers.velodyne.VelodynePacket)
  return target;
}

size_t VelodynePacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.drivers.velodyne.VelodynePacket)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bytes data = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_data());
    }

    // optional uint64 stamp = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_stamp());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VelodynePacket::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.drivers.velodyne.VelodynePacket)
  GOOGLE_DCHECK_NE(&from, this);
  const VelodynePacket* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VelodynePacket>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.drivers.velodyne.VelodynePacket)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.drivers.velodyne.VelodynePacket)
    MergeFrom(*source);
  }
}

void VelodynePacket::MergeFrom(const VelodynePacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.drivers.velodyne.VelodynePacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_data(from._internal_data());
    }
    if (cached_has_bits & 0x00000002u) {
      stamp_ = from.stamp_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void VelodynePacket::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.drivers.velodyne.VelodynePacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VelodynePacket::CopyFrom(const VelodynePacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.drivers.velodyne.VelodynePacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VelodynePacket::IsInitialized() const {
  return true;
}

void VelodynePacket::InternalSwap(VelodynePacket* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(stamp_, other->stamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata VelodynePacket::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class VelodyneScan::_Internal {
 public:
  using HasBits = decltype(std::declval<VelodyneScan>()._has_bits_);
  static const ::apollo::common::Header& header(const VelodyneScan* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_model(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_sn(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_basetime(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::apollo::common::Header&
VelodyneScan::_Internal::header(const VelodyneScan* msg) {
  return *msg->header_;
}
void VelodyneScan::clear_header() {
  if (header_ != nullptr) header_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
VelodyneScan::VelodyneScan(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  firing_pkts_(arena),
  positioning_pkts_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.drivers.velodyne.VelodyneScan)
}
VelodyneScan::VelodyneScan(const VelodyneScan& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      firing_pkts_(from.firing_pkts_),
      positioning_pkts_(from.positioning_pkts_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  sn_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_sn()) {
    sn_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_sn(), 
      GetArena());
  }
  if (from._internal_has_header()) {
    header_ = new ::apollo::common::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  ::memcpy(&basetime_, &from.basetime_,
    static_cast<size_t>(reinterpret_cast<char*>(&mode_) -
    reinterpret_cast<char*>(&basetime_)) + sizeof(mode_));
  // @@protoc_insertion_point(copy_constructor:apollo.drivers.velodyne.VelodyneScan)
}

void VelodyneScan::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_VelodyneScan_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto.base);
  sn_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&header_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&model_) -
      reinterpret_cast<char*>(&header_)) + sizeof(model_));
  mode_ = 1;
}

VelodyneScan::~VelodyneScan() {
  // @@protoc_insertion_point(destructor:apollo.drivers.velodyne.VelodyneScan)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VelodyneScan::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  sn_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void VelodyneScan::ArenaDtor(void* object) {
  VelodyneScan* _this = reinterpret_cast< VelodyneScan* >(object);
  (void)_this;
}
void VelodyneScan::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VelodyneScan::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VelodyneScan& VelodyneScan::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VelodyneScan_modules_2fdrivers_2flidar_2fproto_2fvelodyne_2eproto.base);
  return *internal_default_instance();
}


void VelodyneScan::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.drivers.velodyne.VelodyneScan)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  firing_pkts_.Clear();
  positioning_pkts_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      sn_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(header_ != nullptr);
      header_->Clear();
    }
  }
  if (cached_has_bits & 0x0000001cu) {
    ::memset(&basetime_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&model_) -
        reinterpret_cast<char*>(&basetime_)) + sizeof(model_));
    mode_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VelodyneScan::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.common.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .apollo.drivers.velodyne.Model model = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::drivers::velodyne::Model_IsValid(val))) {
            _internal_set_model(static_cast<::apollo::drivers::velodyne::Model>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional .apollo.drivers.velodyne.Mode mode = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::drivers::velodyne::Mode_IsValid(val))) {
            _internal_set_mode(static_cast<::apollo::drivers::velodyne::Mode>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // repeated .apollo.drivers.velodyne.VelodynePacket firing_pkts = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_firing_pkts(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .apollo.drivers.velodyne.VelodynePacket positioning_pkts = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_positioning_pkts(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else goto handle_unusual;
        continue;
      // optional string sn = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_sn();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.drivers.velodyne.VelodyneScan.sn");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint64 basetime = 7 [default = 0];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_basetime(&has_bits);
          basetime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* VelodyneScan::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.drivers.velodyne.VelodyneScan)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.Header header = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // optional .apollo.drivers.velodyne.Model model = 2;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_model(), target);
  }

  // optional .apollo.drivers.velodyne.Mode mode = 3;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_mode(), target);
  }

  // repeated .apollo.drivers.velodyne.VelodynePacket firing_pkts = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_firing_pkts_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_firing_pkts(i), target, stream);
  }

  // repeated .apollo.drivers.velodyne.VelodynePacket positioning_pkts = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_positioning_pkts_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, this->_internal_positioning_pkts(i), target, stream);
  }

  // optional string sn = 6;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_sn().data(), static_cast<int>(this->_internal_sn().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.drivers.velodyne.VelodyneScan.sn");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_sn(), target);
  }

  // optional uint64 basetime = 7 [default = 0];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(7, this->_internal_basetime(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.drivers.velodyne.VelodyneScan)
  return target;
}

size_t VelodyneScan::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.drivers.velodyne.VelodyneScan)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .apollo.drivers.velodyne.VelodynePacket firing_pkts = 4;
  total_size += 1UL * this->_internal_firing_pkts_size();
  for (const auto& msg : this->firing_pkts_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .apollo.drivers.velodyne.VelodynePacket positioning_pkts = 5;
  total_size += 1UL * this->_internal_positioning_pkts_size();
  for (const auto& msg : this->positioning_pkts_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string sn = 6;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_sn());
    }

    // optional .apollo.common.Header header = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *header_);
    }

    // optional uint64 basetime = 7 [default = 0];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
          this->_internal_basetime());
    }

    // optional .apollo.drivers.velodyne.Model model = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_model());
    }

    // optional .apollo.drivers.velodyne.Mode mode = 3;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_mode());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VelodyneScan::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.drivers.velodyne.VelodyneScan)
  GOOGLE_DCHECK_NE(&from, this);
  const VelodyneScan* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VelodyneScan>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.drivers.velodyne.VelodyneScan)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.drivers.velodyne.VelodyneScan)
    MergeFrom(*source);
  }
}

void VelodyneScan::MergeFrom(const VelodyneScan& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.drivers.velodyne.VelodyneScan)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  firing_pkts_.MergeFrom(from.firing_pkts_);
  positioning_pkts_.MergeFrom(from.positioning_pkts_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_sn(from._internal_sn());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_header()->::apollo::common::Header::MergeFrom(from._internal_header());
    }
    if (cached_has_bits & 0x00000004u) {
      basetime_ = from.basetime_;
    }
    if (cached_has_bits & 0x00000008u) {
      model_ = from.model_;
    }
    if (cached_has_bits & 0x00000010u) {
      mode_ = from.mode_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void VelodyneScan::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.drivers.velodyne.VelodyneScan)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VelodyneScan::CopyFrom(const VelodyneScan& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.drivers.velodyne.VelodyneScan)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VelodyneScan::IsInitialized() const {
  return true;
}

void VelodyneScan::InternalSwap(VelodyneScan* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  firing_pkts_.InternalSwap(&other->firing_pkts_);
  positioning_pkts_.InternalSwap(&other->positioning_pkts_);
  sn_.Swap(&other->sn_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VelodyneScan, model_)
      + sizeof(VelodyneScan::model_)
      - PROTOBUF_FIELD_OFFSET(VelodyneScan, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
  swap(mode_, other->mode_);
}

::PROTOBUF_NAMESPACE_ID::Metadata VelodyneScan::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace velodyne
}  // namespace drivers
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::drivers::velodyne::VelodynePacket* Arena::CreateMaybeMessage< ::apollo::drivers::velodyne::VelodynePacket >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::drivers::velodyne::VelodynePacket >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::drivers::velodyne::VelodyneScan* Arena::CreateMaybeMessage< ::apollo::drivers::velodyne::VelodyneScan >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::drivers::velodyne::VelodyneScan >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
