// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/localization/proto/imu.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2fimu_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2fimu_2eproto

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
#include "modules/common/proto/header.pb.h"
#include "modules/localization/proto/pose.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2flocalization_2fproto_2fimu_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2flocalization_2fproto_2fimu_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2flocalization_2fproto_2fimu_2eproto;
namespace apollo {
namespace localization {
class CorrectedImu;
class CorrectedImuDefaultTypeInternal;
extern CorrectedImuDefaultTypeInternal _CorrectedImu_default_instance_;
}  // namespace localization
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::localization::CorrectedImu* Arena::CreateMaybeMessage<::apollo::localization::CorrectedImu>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace localization {

// ===================================================================

class CorrectedImu PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.localization.CorrectedImu) */ {
 public:
  inline CorrectedImu() : CorrectedImu(nullptr) {}
  virtual ~CorrectedImu();

  CorrectedImu(const CorrectedImu& from);
  CorrectedImu(CorrectedImu&& from) noexcept
    : CorrectedImu() {
    *this = ::std::move(from);
  }

  inline CorrectedImu& operator=(const CorrectedImu& from) {
    CopyFrom(from);
    return *this;
  }
  inline CorrectedImu& operator=(CorrectedImu&& from) noexcept {
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
  static const CorrectedImu& default_instance();

  static inline const CorrectedImu* internal_default_instance() {
    return reinterpret_cast<const CorrectedImu*>(
               &_CorrectedImu_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CorrectedImu& a, CorrectedImu& b) {
    a.Swap(&b);
  }
  inline void Swap(CorrectedImu* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CorrectedImu* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CorrectedImu* New() const final {
    return CreateMaybeMessage<CorrectedImu>(nullptr);
  }

  CorrectedImu* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CorrectedImu>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CorrectedImu& from);
  void MergeFrom(const CorrectedImu& from);
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
  void InternalSwap(CorrectedImu* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.localization.CorrectedImu";
  }
  protected:
  explicit CorrectedImu(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2flocalization_2fproto_2fimu_2eproto);
    return ::descriptor_table_modules_2flocalization_2fproto_2fimu_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kImuFieldNumber = 3,
  };
  // optional .apollo.common.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::apollo::common::Header& header() const;
  ::apollo::common::Header* release_header();
  ::apollo::common::Header* mutable_header();
  void set_allocated_header(::apollo::common::Header* header);
  private:
  const ::apollo::common::Header& _internal_header() const;
  ::apollo::common::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::apollo::common::Header* header);
  ::apollo::common::Header* unsafe_arena_release_header();

  // optional .apollo.localization.Pose imu = 3;
  bool has_imu() const;
  private:
  bool _internal_has_imu() const;
  public:
  void clear_imu();
  const ::apollo::localization::Pose& imu() const;
  ::apollo::localization::Pose* release_imu();
  ::apollo::localization::Pose* mutable_imu();
  void set_allocated_imu(::apollo::localization::Pose* imu);
  private:
  const ::apollo::localization::Pose& _internal_imu() const;
  ::apollo::localization::Pose* _internal_mutable_imu();
  public:
  void unsafe_arena_set_allocated_imu(
      ::apollo::localization::Pose* imu);
  ::apollo::localization::Pose* unsafe_arena_release_imu();

  // @@protoc_insertion_point(class_scope:apollo.localization.CorrectedImu)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::common::Header* header_;
  ::apollo::localization::Pose* imu_;
  friend struct ::TableStruct_modules_2flocalization_2fproto_2fimu_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CorrectedImu

// optional .apollo.common.Header header = 1;
inline bool CorrectedImu::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool CorrectedImu::has_header() const {
  return _internal_has_header();
}
inline const ::apollo::common::Header& CorrectedImu::_internal_header() const {
  const ::apollo::common::Header* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::common::Header&>(
      ::apollo::common::_Header_default_instance_);
}
inline const ::apollo::common::Header& CorrectedImu::header() const {
  // @@protoc_insertion_point(field_get:apollo.localization.CorrectedImu.header)
  return _internal_header();
}
inline void CorrectedImu::unsafe_arena_set_allocated_header(
    ::apollo::common::Header* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.localization.CorrectedImu.header)
}
inline ::apollo::common::Header* CorrectedImu::release_header() {
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::apollo::common::Header* CorrectedImu::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:apollo.localization.CorrectedImu.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::common::Header* CorrectedImu::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::apollo::common::Header* CorrectedImu::mutable_header() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.CorrectedImu.header)
  return _internal_mutable_header();
}
inline void CorrectedImu::set_allocated_header(::apollo::common::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.CorrectedImu.header)
}

// optional .apollo.localization.Pose imu = 3;
inline bool CorrectedImu::_internal_has_imu() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || imu_ != nullptr);
  return value;
}
inline bool CorrectedImu::has_imu() const {
  return _internal_has_imu();
}
inline const ::apollo::localization::Pose& CorrectedImu::_internal_imu() const {
  const ::apollo::localization::Pose* p = imu_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::localization::Pose&>(
      ::apollo::localization::_Pose_default_instance_);
}
inline const ::apollo::localization::Pose& CorrectedImu::imu() const {
  // @@protoc_insertion_point(field_get:apollo.localization.CorrectedImu.imu)
  return _internal_imu();
}
inline void CorrectedImu::unsafe_arena_set_allocated_imu(
    ::apollo::localization::Pose* imu) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(imu_);
  }
  imu_ = imu;
  if (imu) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.localization.CorrectedImu.imu)
}
inline ::apollo::localization::Pose* CorrectedImu::release_imu() {
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::localization::Pose* temp = imu_;
  imu_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::apollo::localization::Pose* CorrectedImu::unsafe_arena_release_imu() {
  // @@protoc_insertion_point(field_release:apollo.localization.CorrectedImu.imu)
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::localization::Pose* temp = imu_;
  imu_ = nullptr;
  return temp;
}
inline ::apollo::localization::Pose* CorrectedImu::_internal_mutable_imu() {
  _has_bits_[0] |= 0x00000002u;
  if (imu_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::localization::Pose>(GetArena());
    imu_ = p;
  }
  return imu_;
}
inline ::apollo::localization::Pose* CorrectedImu::mutable_imu() {
  // @@protoc_insertion_point(field_mutable:apollo.localization.CorrectedImu.imu)
  return _internal_mutable_imu();
}
inline void CorrectedImu::set_allocated_imu(::apollo::localization::Pose* imu) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(imu_);
  }
  if (imu) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(imu)->GetArena();
    if (message_arena != submessage_arena) {
      imu = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, imu, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  imu_ = imu;
  // @@protoc_insertion_point(field_set_allocated:apollo.localization.CorrectedImu.imu)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace localization
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2fimu_2eproto
