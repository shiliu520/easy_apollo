// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/math/cos_theta_smoother_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto;
namespace apollo {
namespace planning {
class CosThetaSmootherConfig;
class CosThetaSmootherConfigDefaultTypeInternal;
extern CosThetaSmootherConfigDefaultTypeInternal _CosThetaSmootherConfig_default_instance_;
}  // namespace planning
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::planning::CosThetaSmootherConfig* Arena::CreateMaybeMessage<::apollo::planning::CosThetaSmootherConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace planning {

// ===================================================================

class CosThetaSmootherConfig PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.planning.CosThetaSmootherConfig) */ {
 public:
  inline CosThetaSmootherConfig() : CosThetaSmootherConfig(nullptr) {}
  virtual ~CosThetaSmootherConfig();

  CosThetaSmootherConfig(const CosThetaSmootherConfig& from);
  CosThetaSmootherConfig(CosThetaSmootherConfig&& from) noexcept
    : CosThetaSmootherConfig() {
    *this = ::std::move(from);
  }

  inline CosThetaSmootherConfig& operator=(const CosThetaSmootherConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline CosThetaSmootherConfig& operator=(CosThetaSmootherConfig&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CosThetaSmootherConfig& default_instance();

  static inline const CosThetaSmootherConfig* internal_default_instance() {
    return reinterpret_cast<const CosThetaSmootherConfig*>(
               &_CosThetaSmootherConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CosThetaSmootherConfig& a, CosThetaSmootherConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(CosThetaSmootherConfig* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CosThetaSmootherConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CosThetaSmootherConfig* New() const final {
    return CreateMaybeMessage<CosThetaSmootherConfig>(nullptr);
  }

  CosThetaSmootherConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CosThetaSmootherConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CosThetaSmootherConfig& from);
  void MergeFrom(const CosThetaSmootherConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CosThetaSmootherConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.planning.CosThetaSmootherConfig";
  }
  protected:
  explicit CosThetaSmootherConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto);
    return ::descriptor_table_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPrintLevelFieldNumber = 4,
    kIpoptUseAutomaticDifferentiationFieldNumber = 9,
    kWeightCosIncludedAngleFieldNumber = 1,
    kWeightAnchorPointsFieldNumber = 2,
    kWeightLengthFieldNumber = 3,
    kMaxNumOfIterationsFieldNumber = 5,
    kAcceptableNumOfIterationsFieldNumber = 6,
    kTolFieldNumber = 7,
    kAcceptableTolFieldNumber = 8,
  };
  // optional int32 print_level = 4 [default = 0];
  bool has_print_level() const;
  private:
  bool _internal_has_print_level() const;
  public:
  void clear_print_level();
  ::PROTOBUF_NAMESPACE_ID::int32 print_level() const;
  void set_print_level(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_print_level() const;
  void _internal_set_print_level(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool ipopt_use_automatic_differentiation = 9 [default = false];
  bool has_ipopt_use_automatic_differentiation() const;
  private:
  bool _internal_has_ipopt_use_automatic_differentiation() const;
  public:
  void clear_ipopt_use_automatic_differentiation();
  bool ipopt_use_automatic_differentiation() const;
  void set_ipopt_use_automatic_differentiation(bool value);
  private:
  bool _internal_ipopt_use_automatic_differentiation() const;
  void _internal_set_ipopt_use_automatic_differentiation(bool value);
  public:

  // optional double weight_cos_included_angle = 1 [default = 10000];
  bool has_weight_cos_included_angle() const;
  private:
  bool _internal_has_weight_cos_included_angle() const;
  public:
  void clear_weight_cos_included_angle();
  double weight_cos_included_angle() const;
  void set_weight_cos_included_angle(double value);
  private:
  double _internal_weight_cos_included_angle() const;
  void _internal_set_weight_cos_included_angle(double value);
  public:

  // optional double weight_anchor_points = 2 [default = 1];
  bool has_weight_anchor_points() const;
  private:
  bool _internal_has_weight_anchor_points() const;
  public:
  void clear_weight_anchor_points();
  double weight_anchor_points() const;
  void set_weight_anchor_points(double value);
  private:
  double _internal_weight_anchor_points() const;
  void _internal_set_weight_anchor_points(double value);
  public:

  // optional double weight_length = 3 [default = 1];
  bool has_weight_length() const;
  private:
  bool _internal_has_weight_length() const;
  public:
  void clear_weight_length();
  double weight_length() const;
  void set_weight_length(double value);
  private:
  double _internal_weight_length() const;
  void _internal_set_weight_length(double value);
  public:

  // optional int32 max_num_of_iterations = 5 [default = 500];
  bool has_max_num_of_iterations() const;
  private:
  bool _internal_has_max_num_of_iterations() const;
  public:
  void clear_max_num_of_iterations();
  ::PROTOBUF_NAMESPACE_ID::int32 max_num_of_iterations() const;
  void set_max_num_of_iterations(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_max_num_of_iterations() const;
  void _internal_set_max_num_of_iterations(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional int32 acceptable_num_of_iterations = 6 [default = 15];
  bool has_acceptable_num_of_iterations() const;
  private:
  bool _internal_has_acceptable_num_of_iterations() const;
  public:
  void clear_acceptable_num_of_iterations();
  ::PROTOBUF_NAMESPACE_ID::int32 acceptable_num_of_iterations() const;
  void set_acceptable_num_of_iterations(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_acceptable_num_of_iterations() const;
  void _internal_set_acceptable_num_of_iterations(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional double tol = 7 [default = 1e-08];
  bool has_tol() const;
  private:
  bool _internal_has_tol() const;
  public:
  void clear_tol();
  double tol() const;
  void set_tol(double value);
  private:
  double _internal_tol() const;
  void _internal_set_tol(double value);
  public:

  // optional double acceptable_tol = 8 [default = 0.1];
  bool has_acceptable_tol() const;
  private:
  bool _internal_has_acceptable_tol() const;
  public:
  void clear_acceptable_tol();
  double acceptable_tol() const;
  void set_acceptable_tol(double value);
  private:
  double _internal_acceptable_tol() const;
  void _internal_set_acceptable_tol(double value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.planning.CosThetaSmootherConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 print_level_;
  bool ipopt_use_automatic_differentiation_;
  double weight_cos_included_angle_;
  double weight_anchor_points_;
  double weight_length_;
  ::PROTOBUF_NAMESPACE_ID::int32 max_num_of_iterations_;
  ::PROTOBUF_NAMESPACE_ID::int32 acceptable_num_of_iterations_;
  double tol_;
  double acceptable_tol_;
  friend struct ::TableStruct_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CosThetaSmootherConfig

// optional double weight_cos_included_angle = 1 [default = 10000];
inline bool CosThetaSmootherConfig::_internal_has_weight_cos_included_angle() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_weight_cos_included_angle() const {
  return _internal_has_weight_cos_included_angle();
}
inline void CosThetaSmootherConfig::clear_weight_cos_included_angle() {
  weight_cos_included_angle_ = 10000;
  _has_bits_[0] &= ~0x00000004u;
}
inline double CosThetaSmootherConfig::_internal_weight_cos_included_angle() const {
  return weight_cos_included_angle_;
}
inline double CosThetaSmootherConfig::weight_cos_included_angle() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.weight_cos_included_angle)
  return _internal_weight_cos_included_angle();
}
inline void CosThetaSmootherConfig::_internal_set_weight_cos_included_angle(double value) {
  _has_bits_[0] |= 0x00000004u;
  weight_cos_included_angle_ = value;
}
inline void CosThetaSmootherConfig::set_weight_cos_included_angle(double value) {
  _internal_set_weight_cos_included_angle(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.weight_cos_included_angle)
}

// optional double weight_anchor_points = 2 [default = 1];
inline bool CosThetaSmootherConfig::_internal_has_weight_anchor_points() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_weight_anchor_points() const {
  return _internal_has_weight_anchor_points();
}
inline void CosThetaSmootherConfig::clear_weight_anchor_points() {
  weight_anchor_points_ = 1;
  _has_bits_[0] &= ~0x00000008u;
}
inline double CosThetaSmootherConfig::_internal_weight_anchor_points() const {
  return weight_anchor_points_;
}
inline double CosThetaSmootherConfig::weight_anchor_points() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.weight_anchor_points)
  return _internal_weight_anchor_points();
}
inline void CosThetaSmootherConfig::_internal_set_weight_anchor_points(double value) {
  _has_bits_[0] |= 0x00000008u;
  weight_anchor_points_ = value;
}
inline void CosThetaSmootherConfig::set_weight_anchor_points(double value) {
  _internal_set_weight_anchor_points(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.weight_anchor_points)
}

// optional double weight_length = 3 [default = 1];
inline bool CosThetaSmootherConfig::_internal_has_weight_length() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_weight_length() const {
  return _internal_has_weight_length();
}
inline void CosThetaSmootherConfig::clear_weight_length() {
  weight_length_ = 1;
  _has_bits_[0] &= ~0x00000010u;
}
inline double CosThetaSmootherConfig::_internal_weight_length() const {
  return weight_length_;
}
inline double CosThetaSmootherConfig::weight_length() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.weight_length)
  return _internal_weight_length();
}
inline void CosThetaSmootherConfig::_internal_set_weight_length(double value) {
  _has_bits_[0] |= 0x00000010u;
  weight_length_ = value;
}
inline void CosThetaSmootherConfig::set_weight_length(double value) {
  _internal_set_weight_length(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.weight_length)
}

// optional int32 print_level = 4 [default = 0];
inline bool CosThetaSmootherConfig::_internal_has_print_level() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_print_level() const {
  return _internal_has_print_level();
}
inline void CosThetaSmootherConfig::clear_print_level() {
  print_level_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CosThetaSmootherConfig::_internal_print_level() const {
  return print_level_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CosThetaSmootherConfig::print_level() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.print_level)
  return _internal_print_level();
}
inline void CosThetaSmootherConfig::_internal_set_print_level(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  print_level_ = value;
}
inline void CosThetaSmootherConfig::set_print_level(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_print_level(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.print_level)
}

// optional int32 max_num_of_iterations = 5 [default = 500];
inline bool CosThetaSmootherConfig::_internal_has_max_num_of_iterations() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_max_num_of_iterations() const {
  return _internal_has_max_num_of_iterations();
}
inline void CosThetaSmootherConfig::clear_max_num_of_iterations() {
  max_num_of_iterations_ = 500;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CosThetaSmootherConfig::_internal_max_num_of_iterations() const {
  return max_num_of_iterations_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CosThetaSmootherConfig::max_num_of_iterations() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.max_num_of_iterations)
  return _internal_max_num_of_iterations();
}
inline void CosThetaSmootherConfig::_internal_set_max_num_of_iterations(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000020u;
  max_num_of_iterations_ = value;
}
inline void CosThetaSmootherConfig::set_max_num_of_iterations(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_max_num_of_iterations(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.max_num_of_iterations)
}

// optional int32 acceptable_num_of_iterations = 6 [default = 15];
inline bool CosThetaSmootherConfig::_internal_has_acceptable_num_of_iterations() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_acceptable_num_of_iterations() const {
  return _internal_has_acceptable_num_of_iterations();
}
inline void CosThetaSmootherConfig::clear_acceptable_num_of_iterations() {
  acceptable_num_of_iterations_ = 15;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CosThetaSmootherConfig::_internal_acceptable_num_of_iterations() const {
  return acceptable_num_of_iterations_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CosThetaSmootherConfig::acceptable_num_of_iterations() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.acceptable_num_of_iterations)
  return _internal_acceptable_num_of_iterations();
}
inline void CosThetaSmootherConfig::_internal_set_acceptable_num_of_iterations(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000040u;
  acceptable_num_of_iterations_ = value;
}
inline void CosThetaSmootherConfig::set_acceptable_num_of_iterations(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_acceptable_num_of_iterations(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.acceptable_num_of_iterations)
}

// optional double tol = 7 [default = 1e-08];
inline bool CosThetaSmootherConfig::_internal_has_tol() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_tol() const {
  return _internal_has_tol();
}
inline void CosThetaSmootherConfig::clear_tol() {
  tol_ = 1e-08;
  _has_bits_[0] &= ~0x00000080u;
}
inline double CosThetaSmootherConfig::_internal_tol() const {
  return tol_;
}
inline double CosThetaSmootherConfig::tol() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.tol)
  return _internal_tol();
}
inline void CosThetaSmootherConfig::_internal_set_tol(double value) {
  _has_bits_[0] |= 0x00000080u;
  tol_ = value;
}
inline void CosThetaSmootherConfig::set_tol(double value) {
  _internal_set_tol(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.tol)
}

// optional double acceptable_tol = 8 [default = 0.1];
inline bool CosThetaSmootherConfig::_internal_has_acceptable_tol() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_acceptable_tol() const {
  return _internal_has_acceptable_tol();
}
inline void CosThetaSmootherConfig::clear_acceptable_tol() {
  acceptable_tol_ = 0.1;
  _has_bits_[0] &= ~0x00000100u;
}
inline double CosThetaSmootherConfig::_internal_acceptable_tol() const {
  return acceptable_tol_;
}
inline double CosThetaSmootherConfig::acceptable_tol() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.acceptable_tol)
  return _internal_acceptable_tol();
}
inline void CosThetaSmootherConfig::_internal_set_acceptable_tol(double value) {
  _has_bits_[0] |= 0x00000100u;
  acceptable_tol_ = value;
}
inline void CosThetaSmootherConfig::set_acceptable_tol(double value) {
  _internal_set_acceptable_tol(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.acceptable_tol)
}

// optional bool ipopt_use_automatic_differentiation = 9 [default = false];
inline bool CosThetaSmootherConfig::_internal_has_ipopt_use_automatic_differentiation() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CosThetaSmootherConfig::has_ipopt_use_automatic_differentiation() const {
  return _internal_has_ipopt_use_automatic_differentiation();
}
inline void CosThetaSmootherConfig::clear_ipopt_use_automatic_differentiation() {
  ipopt_use_automatic_differentiation_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool CosThetaSmootherConfig::_internal_ipopt_use_automatic_differentiation() const {
  return ipopt_use_automatic_differentiation_;
}
inline bool CosThetaSmootherConfig::ipopt_use_automatic_differentiation() const {
  // @@protoc_insertion_point(field_get:apollo.planning.CosThetaSmootherConfig.ipopt_use_automatic_differentiation)
  return _internal_ipopt_use_automatic_differentiation();
}
inline void CosThetaSmootherConfig::_internal_set_ipopt_use_automatic_differentiation(bool value) {
  _has_bits_[0] |= 0x00000002u;
  ipopt_use_automatic_differentiation_ = value;
}
inline void CosThetaSmootherConfig::set_ipopt_use_automatic_differentiation(bool value) {
  _internal_set_ipopt_use_automatic_differentiation(value);
  // @@protoc_insertion_point(field_set:apollo.planning.CosThetaSmootherConfig.ipopt_use_automatic_differentiation)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fplanning_2fproto_2fmath_2fcos_5ftheta_5fsmoother_5fconfig_2eproto
