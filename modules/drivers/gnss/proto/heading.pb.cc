// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/drivers/gnss/proto/heading.proto

#include "modules/drivers/gnss/proto/heading.pb.h"

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
namespace apollo {
namespace drivers {
namespace gnss {
class HeadingDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Heading> _instance;
} _Heading_default_instance_;
}  // namespace gnss
}  // namespace drivers
}  // namespace apollo
static void InitDefaultsscc_info_Heading_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::drivers::gnss::_Heading_default_instance_;
    new (ptr) ::apollo::drivers::gnss::Heading();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Heading_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Heading_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto}, {
      &scc_info_Header_modules_2fcommon_2fproto_2fheader_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, header_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, measurement_time_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, solution_status_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, position_type_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, baseline_length_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, heading_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, pitch_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, reserved_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, heading_std_dev_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, pitch_std_dev_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, station_id_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, satellite_tracked_number_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, satellite_soulution_number_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, satellite_number_obs_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, satellite_number_multi_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, solution_source_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, extended_solution_status_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, galileo_beidou_sig_mask_),
  PROTOBUF_FIELD_OFFSET(::apollo::drivers::gnss::Heading, gps_glonass_sig_mask_),
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  0,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 24, sizeof(::apollo::drivers::gnss::Heading)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::drivers::gnss::_Heading_default_instance_),
};

const char descriptor_table_protodef_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(modules/drivers/gnss/proto/heading.pro"
  "to\022\023apollo.drivers.gnss\032!modules/common/"
  "proto/header.proto\"\207\004\n\007Heading\022%\n\006header"
  "\030\001 \001(\0132\025.apollo.common.Header\022\030\n\020measure"
  "ment_time\030\002 \001(\001\022\027\n\017solution_status\030\003 \001(\r"
  "\022\025\n\rposition_type\030\004 \001(\r\022\027\n\017baseline_leng"
  "th\030\005 \001(\002\022\017\n\007heading\030\006 \001(\002\022\r\n\005pitch\030\007 \001(\002"
  "\022\020\n\010reserved\030\010 \001(\002\022\027\n\017heading_std_dev\030\t "
  "\001(\002\022\025\n\rpitch_std_dev\030\n \001(\002\022\022\n\nstation_id"
  "\030\013 \001(\014\022 \n\030satellite_tracked_number\030\014 \001(\r"
  "\022\"\n\032satellite_soulution_number\030\r \001(\r\022\034\n\024"
  "satellite_number_obs\030\016 \001(\r\022\036\n\026satellite_"
  "number_multi\030\017 \001(\r\022\027\n\017solution_source\030\020 "
  "\001(\r\022 \n\030extended_solution_status\030\021 \001(\r\022\037\n"
  "\027galileo_beidou_sig_mask\030\022 \001(\r\022\034\n\024gps_gl"
  "onass_sig_mask\030\023 \001(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto_deps[1] = {
  &::descriptor_table_modules_2fcommon_2fproto_2fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto_sccs[1] = {
  &scc_info_Heading_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto = {
  false, false, descriptor_table_protodef_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto, "modules/drivers/gnss/proto/heading.proto", 620,
  &descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto_once, descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto_sccs, descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto::offsets,
  file_level_metadata_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto, 1, file_level_enum_descriptors_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto, file_level_service_descriptors_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto)), true);
namespace apollo {
namespace drivers {
namespace gnss {

// ===================================================================

class Heading::_Internal {
 public:
  using HasBits = decltype(std::declval<Heading>()._has_bits_);
  static const ::apollo::common::Header& header(const Heading* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_measurement_time(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_solution_status(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_position_type(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_baseline_length(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_heading(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_pitch(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_reserved(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_heading_std_dev(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_pitch_std_dev(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_station_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_satellite_tracked_number(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_satellite_soulution_number(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
  static void set_has_satellite_number_obs(HasBits* has_bits) {
    (*has_bits)[0] |= 8192u;
  }
  static void set_has_satellite_number_multi(HasBits* has_bits) {
    (*has_bits)[0] |= 16384u;
  }
  static void set_has_solution_source(HasBits* has_bits) {
    (*has_bits)[0] |= 32768u;
  }
  static void set_has_extended_solution_status(HasBits* has_bits) {
    (*has_bits)[0] |= 65536u;
  }
  static void set_has_galileo_beidou_sig_mask(HasBits* has_bits) {
    (*has_bits)[0] |= 131072u;
  }
  static void set_has_gps_glonass_sig_mask(HasBits* has_bits) {
    (*has_bits)[0] |= 262144u;
  }
};

const ::apollo::common::Header&
Heading::_Internal::header(const Heading* msg) {
  return *msg->header_;
}
void Heading::clear_header() {
  if (header_ != nullptr) header_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
Heading::Heading(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.drivers.gnss.Heading)
}
Heading::Heading(const Heading& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  station_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_station_id()) {
    station_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_station_id(), 
      GetArena());
  }
  if (from._internal_has_header()) {
    header_ = new ::apollo::common::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  ::memcpy(&measurement_time_, &from.measurement_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&gps_glonass_sig_mask_) -
    reinterpret_cast<char*>(&measurement_time_)) + sizeof(gps_glonass_sig_mask_));
  // @@protoc_insertion_point(copy_constructor:apollo.drivers.gnss.Heading)
}

void Heading::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Heading_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto.base);
  station_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&header_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&gps_glonass_sig_mask_) -
      reinterpret_cast<char*>(&header_)) + sizeof(gps_glonass_sig_mask_));
}

Heading::~Heading() {
  // @@protoc_insertion_point(destructor:apollo.drivers.gnss.Heading)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Heading::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  station_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void Heading::ArenaDtor(void* object) {
  Heading* _this = reinterpret_cast< Heading* >(object);
  (void)_this;
}
void Heading::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Heading::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Heading& Heading::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Heading_modules_2fdrivers_2fgnss_2fproto_2fheading_2eproto.base);
  return *internal_default_instance();
}


void Heading::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.drivers.gnss.Heading)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      station_id_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(header_ != nullptr);
      header_->Clear();
    }
  }
  if (cached_has_bits & 0x000000fcu) {
    ::memset(&measurement_time_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&pitch_) -
        reinterpret_cast<char*>(&measurement_time_)) + sizeof(pitch_));
  }
  if (cached_has_bits & 0x0000ff00u) {
    ::memset(&reserved_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&solution_source_) -
        reinterpret_cast<char*>(&reserved_)) + sizeof(solution_source_));
  }
  if (cached_has_bits & 0x00070000u) {
    ::memset(&extended_solution_status_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&gps_glonass_sig_mask_) -
        reinterpret_cast<char*>(&extended_solution_status_)) + sizeof(gps_glonass_sig_mask_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Heading::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // optional double measurement_time = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_measurement_time(&has_bits);
          measurement_time_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional uint32 solution_status = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_solution_status(&has_bits);
          solution_status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 position_type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_position_type(&has_bits);
          position_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional float baseline_length = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          _Internal::set_has_baseline_length(&has_bits);
          baseline_length_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float heading = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53)) {
          _Internal::set_has_heading(&has_bits);
          heading_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float pitch = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 61)) {
          _Internal::set_has_pitch(&has_bits);
          pitch_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float reserved = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 69)) {
          _Internal::set_has_reserved(&has_bits);
          reserved_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float heading_std_dev = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 77)) {
          _Internal::set_has_heading_std_dev(&has_bits);
          heading_std_dev_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float pitch_std_dev = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 85)) {
          _Internal::set_has_pitch_std_dev(&has_bits);
          pitch_std_dev_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional bytes station_id = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          auto str = _internal_mutable_station_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 satellite_tracked_number = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          _Internal::set_has_satellite_tracked_number(&has_bits);
          satellite_tracked_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 satellite_soulution_number = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 104)) {
          _Internal::set_has_satellite_soulution_number(&has_bits);
          satellite_soulution_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 satellite_number_obs = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 112)) {
          _Internal::set_has_satellite_number_obs(&has_bits);
          satellite_number_obs_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 satellite_number_multi = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 120)) {
          _Internal::set_has_satellite_number_multi(&has_bits);
          satellite_number_multi_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 solution_source = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 128)) {
          _Internal::set_has_solution_source(&has_bits);
          solution_source_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 extended_solution_status = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 136)) {
          _Internal::set_has_extended_solution_status(&has_bits);
          extended_solution_status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 galileo_beidou_sig_mask = 18;
      case 18:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 144)) {
          _Internal::set_has_galileo_beidou_sig_mask(&has_bits);
          galileo_beidou_sig_mask_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 gps_glonass_sig_mask = 19;
      case 19:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 152)) {
          _Internal::set_has_gps_glonass_sig_mask(&has_bits);
          gps_glonass_sig_mask_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Heading::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.drivers.gnss.Heading)
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

  // optional double measurement_time = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_measurement_time(), target);
  }

  // optional uint32 solution_status = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_solution_status(), target);
  }

  // optional uint32 position_type = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_position_type(), target);
  }

  // optional float baseline_length = 5;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_baseline_length(), target);
  }

  // optional float heading = 6;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(6, this->_internal_heading(), target);
  }

  // optional float pitch = 7;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(7, this->_internal_pitch(), target);
  }

  // optional float reserved = 8;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(8, this->_internal_reserved(), target);
  }

  // optional float heading_std_dev = 9;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(9, this->_internal_heading_std_dev(), target);
  }

  // optional float pitch_std_dev = 10;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(10, this->_internal_pitch_std_dev(), target);
  }

  // optional bytes station_id = 11;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        11, this->_internal_station_id(), target);
  }

  // optional uint32 satellite_tracked_number = 12;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(12, this->_internal_satellite_tracked_number(), target);
  }

  // optional uint32 satellite_soulution_number = 13;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(13, this->_internal_satellite_soulution_number(), target);
  }

  // optional uint32 satellite_number_obs = 14;
  if (cached_has_bits & 0x00002000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(14, this->_internal_satellite_number_obs(), target);
  }

  // optional uint32 satellite_number_multi = 15;
  if (cached_has_bits & 0x00004000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(15, this->_internal_satellite_number_multi(), target);
  }

  // optional uint32 solution_source = 16;
  if (cached_has_bits & 0x00008000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(16, this->_internal_solution_source(), target);
  }

  // optional uint32 extended_solution_status = 17;
  if (cached_has_bits & 0x00010000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(17, this->_internal_extended_solution_status(), target);
  }

  // optional uint32 galileo_beidou_sig_mask = 18;
  if (cached_has_bits & 0x00020000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(18, this->_internal_galileo_beidou_sig_mask(), target);
  }

  // optional uint32 gps_glonass_sig_mask = 19;
  if (cached_has_bits & 0x00040000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(19, this->_internal_gps_glonass_sig_mask(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.drivers.gnss.Heading)
  return target;
}

size_t Heading::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.drivers.gnss.Heading)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional bytes station_id = 11;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_station_id());
    }

    // optional .apollo.common.Header header = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *header_);
    }

    // optional double measurement_time = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional uint32 solution_status = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_solution_status());
    }

    // optional uint32 position_type = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_position_type());
    }

    // optional float baseline_length = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 4;
    }

    // optional float heading = 6;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 4;
    }

    // optional float pitch = 7;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 4;
    }

  }
  if (cached_has_bits & 0x0000ff00u) {
    // optional float reserved = 8;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 4;
    }

    // optional float heading_std_dev = 9;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 + 4;
    }

    // optional float pitch_std_dev = 10;
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 + 4;
    }

    // optional uint32 satellite_tracked_number = 12;
    if (cached_has_bits & 0x00000800u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_satellite_tracked_number());
    }

    // optional uint32 satellite_soulution_number = 13;
    if (cached_has_bits & 0x00001000u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_satellite_soulution_number());
    }

    // optional uint32 satellite_number_obs = 14;
    if (cached_has_bits & 0x00002000u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_satellite_number_obs());
    }

    // optional uint32 satellite_number_multi = 15;
    if (cached_has_bits & 0x00004000u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_satellite_number_multi());
    }

    // optional uint32 solution_source = 16;
    if (cached_has_bits & 0x00008000u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_solution_source());
    }

  }
  if (cached_has_bits & 0x00070000u) {
    // optional uint32 extended_solution_status = 17;
    if (cached_has_bits & 0x00010000u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_extended_solution_status());
    }

    // optional uint32 galileo_beidou_sig_mask = 18;
    if (cached_has_bits & 0x00020000u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_galileo_beidou_sig_mask());
    }

    // optional uint32 gps_glonass_sig_mask = 19;
    if (cached_has_bits & 0x00040000u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_gps_glonass_sig_mask());
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

void Heading::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.drivers.gnss.Heading)
  GOOGLE_DCHECK_NE(&from, this);
  const Heading* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Heading>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.drivers.gnss.Heading)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.drivers.gnss.Heading)
    MergeFrom(*source);
  }
}

void Heading::MergeFrom(const Heading& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.drivers.gnss.Heading)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_station_id(from._internal_station_id());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_header()->::apollo::common::Header::MergeFrom(from._internal_header());
    }
    if (cached_has_bits & 0x00000004u) {
      measurement_time_ = from.measurement_time_;
    }
    if (cached_has_bits & 0x00000008u) {
      solution_status_ = from.solution_status_;
    }
    if (cached_has_bits & 0x00000010u) {
      position_type_ = from.position_type_;
    }
    if (cached_has_bits & 0x00000020u) {
      baseline_length_ = from.baseline_length_;
    }
    if (cached_has_bits & 0x00000040u) {
      heading_ = from.heading_;
    }
    if (cached_has_bits & 0x00000080u) {
      pitch_ = from.pitch_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x0000ff00u) {
    if (cached_has_bits & 0x00000100u) {
      reserved_ = from.reserved_;
    }
    if (cached_has_bits & 0x00000200u) {
      heading_std_dev_ = from.heading_std_dev_;
    }
    if (cached_has_bits & 0x00000400u) {
      pitch_std_dev_ = from.pitch_std_dev_;
    }
    if (cached_has_bits & 0x00000800u) {
      satellite_tracked_number_ = from.satellite_tracked_number_;
    }
    if (cached_has_bits & 0x00001000u) {
      satellite_soulution_number_ = from.satellite_soulution_number_;
    }
    if (cached_has_bits & 0x00002000u) {
      satellite_number_obs_ = from.satellite_number_obs_;
    }
    if (cached_has_bits & 0x00004000u) {
      satellite_number_multi_ = from.satellite_number_multi_;
    }
    if (cached_has_bits & 0x00008000u) {
      solution_source_ = from.solution_source_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00070000u) {
    if (cached_has_bits & 0x00010000u) {
      extended_solution_status_ = from.extended_solution_status_;
    }
    if (cached_has_bits & 0x00020000u) {
      galileo_beidou_sig_mask_ = from.galileo_beidou_sig_mask_;
    }
    if (cached_has_bits & 0x00040000u) {
      gps_glonass_sig_mask_ = from.gps_glonass_sig_mask_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Heading::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.drivers.gnss.Heading)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Heading::CopyFrom(const Heading& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.drivers.gnss.Heading)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Heading::IsInitialized() const {
  return true;
}

void Heading::InternalSwap(Heading* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  station_id_.Swap(&other->station_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Heading, gps_glonass_sig_mask_)
      + sizeof(Heading::gps_glonass_sig_mask_)
      - PROTOBUF_FIELD_OFFSET(Heading, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Heading::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace gnss
}  // namespace drivers
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::drivers::gnss::Heading* Arena::CreateMaybeMessage< ::apollo::drivers::gnss::Heading >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::drivers::gnss::Heading >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
