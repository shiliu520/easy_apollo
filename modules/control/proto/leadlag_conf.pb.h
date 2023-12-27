// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/leadlag_conf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto;
namespace apollo {
namespace control {
class LeadlagConf;
class LeadlagConfDefaultTypeInternal;
extern LeadlagConfDefaultTypeInternal _LeadlagConf_default_instance_;
}  // namespace control
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::control::LeadlagConf* Arena::CreateMaybeMessage<::apollo::control::LeadlagConf>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace control {

// ===================================================================

class LeadlagConf PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.control.LeadlagConf) */ {
 public:
  inline LeadlagConf() : LeadlagConf(nullptr) {}
  virtual ~LeadlagConf();

  LeadlagConf(const LeadlagConf& from);
  LeadlagConf(LeadlagConf&& from) noexcept
    : LeadlagConf() {
    *this = ::std::move(from);
  }

  inline LeadlagConf& operator=(const LeadlagConf& from) {
    CopyFrom(from);
    return *this;
  }
  inline LeadlagConf& operator=(LeadlagConf&& from) noexcept {
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
  static const LeadlagConf& default_instance();

  static inline const LeadlagConf* internal_default_instance() {
    return reinterpret_cast<const LeadlagConf*>(
               &_LeadlagConf_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LeadlagConf& a, LeadlagConf& b) {
    a.Swap(&b);
  }
  inline void Swap(LeadlagConf* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LeadlagConf* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LeadlagConf* New() const final {
    return CreateMaybeMessage<LeadlagConf>(nullptr);
  }

  LeadlagConf* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LeadlagConf>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LeadlagConf& from);
  void MergeFrom(const LeadlagConf& from);
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
  void InternalSwap(LeadlagConf* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.control.LeadlagConf";
  }
  protected:
  explicit LeadlagConf(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto);
    return ::descriptor_table_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTauFieldNumber = 4,
    kInnerstateSaturationLevelFieldNumber = 1,
    kAlphaFieldNumber = 2,
    kBetaFieldNumber = 3,
  };
  // optional double tau = 4 [default = 0];
  bool has_tau() const;
  private:
  bool _internal_has_tau() const;
  public:
  void clear_tau();
  double tau() const;
  void set_tau(double value);
  private:
  double _internal_tau() const;
  void _internal_set_tau(double value);
  public:

  // optional double innerstate_saturation_level = 1 [default = 300];
  bool has_innerstate_saturation_level() const;
  private:
  bool _internal_has_innerstate_saturation_level() const;
  public:
  void clear_innerstate_saturation_level();
  double innerstate_saturation_level() const;
  void set_innerstate_saturation_level(double value);
  private:
  double _internal_innerstate_saturation_level() const;
  void _internal_set_innerstate_saturation_level(double value);
  public:

  // optional double alpha = 2 [default = 0.1];
  bool has_alpha() const;
  private:
  bool _internal_has_alpha() const;
  public:
  void clear_alpha();
  double alpha() const;
  void set_alpha(double value);
  private:
  double _internal_alpha() const;
  void _internal_set_alpha(double value);
  public:

  // optional double beta = 3 [default = 1];
  bool has_beta() const;
  private:
  bool _internal_has_beta() const;
  public:
  void clear_beta();
  double beta() const;
  void set_beta(double value);
  private:
  double _internal_beta() const;
  void _internal_set_beta(double value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.control.LeadlagConf)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double tau_;
  double innerstate_saturation_level_;
  double alpha_;
  double beta_;
  friend struct ::TableStruct_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LeadlagConf

// optional double innerstate_saturation_level = 1 [default = 300];
inline bool LeadlagConf::_internal_has_innerstate_saturation_level() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool LeadlagConf::has_innerstate_saturation_level() const {
  return _internal_has_innerstate_saturation_level();
}
inline void LeadlagConf::clear_innerstate_saturation_level() {
  innerstate_saturation_level_ = 300;
  _has_bits_[0] &= ~0x00000002u;
}
inline double LeadlagConf::_internal_innerstate_saturation_level() const {
  return innerstate_saturation_level_;
}
inline double LeadlagConf::innerstate_saturation_level() const {
  // @@protoc_insertion_point(field_get:apollo.control.LeadlagConf.innerstate_saturation_level)
  return _internal_innerstate_saturation_level();
}
inline void LeadlagConf::_internal_set_innerstate_saturation_level(double value) {
  _has_bits_[0] |= 0x00000002u;
  innerstate_saturation_level_ = value;
}
inline void LeadlagConf::set_innerstate_saturation_level(double value) {
  _internal_set_innerstate_saturation_level(value);
  // @@protoc_insertion_point(field_set:apollo.control.LeadlagConf.innerstate_saturation_level)
}

// optional double alpha = 2 [default = 0.1];
inline bool LeadlagConf::_internal_has_alpha() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool LeadlagConf::has_alpha() const {
  return _internal_has_alpha();
}
inline void LeadlagConf::clear_alpha() {
  alpha_ = 0.1;
  _has_bits_[0] &= ~0x00000004u;
}
inline double LeadlagConf::_internal_alpha() const {
  return alpha_;
}
inline double LeadlagConf::alpha() const {
  // @@protoc_insertion_point(field_get:apollo.control.LeadlagConf.alpha)
  return _internal_alpha();
}
inline void LeadlagConf::_internal_set_alpha(double value) {
  _has_bits_[0] |= 0x00000004u;
  alpha_ = value;
}
inline void LeadlagConf::set_alpha(double value) {
  _internal_set_alpha(value);
  // @@protoc_insertion_point(field_set:apollo.control.LeadlagConf.alpha)
}

// optional double beta = 3 [default = 1];
inline bool LeadlagConf::_internal_has_beta() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool LeadlagConf::has_beta() const {
  return _internal_has_beta();
}
inline void LeadlagConf::clear_beta() {
  beta_ = 1;
  _has_bits_[0] &= ~0x00000008u;
}
inline double LeadlagConf::_internal_beta() const {
  return beta_;
}
inline double LeadlagConf::beta() const {
  // @@protoc_insertion_point(field_get:apollo.control.LeadlagConf.beta)
  return _internal_beta();
}
inline void LeadlagConf::_internal_set_beta(double value) {
  _has_bits_[0] |= 0x00000008u;
  beta_ = value;
}
inline void LeadlagConf::set_beta(double value) {
  _internal_set_beta(value);
  // @@protoc_insertion_point(field_set:apollo.control.LeadlagConf.beta)
}

// optional double tau = 4 [default = 0];
inline bool LeadlagConf::_internal_has_tau() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool LeadlagConf::has_tau() const {
  return _internal_has_tau();
}
inline void LeadlagConf::clear_tau() {
  tau_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double LeadlagConf::_internal_tau() const {
  return tau_;
}
inline double LeadlagConf::tau() const {
  // @@protoc_insertion_point(field_get:apollo.control.LeadlagConf.tau)
  return _internal_tau();
}
inline void LeadlagConf::_internal_set_tau(double value) {
  _has_bits_[0] |= 0x00000001u;
  tau_ = value;
}
inline void LeadlagConf::set_tau(double value) {
  _internal_set_tau(value);
  // @@protoc_insertion_point(field_set:apollo.control.LeadlagConf.tau)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace control
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fcontrol_2fproto_2fleadlag_5fconf_2eproto
