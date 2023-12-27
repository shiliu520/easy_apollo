// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/audio/proto/audio_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2faudio_2fproto_2faudio_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2faudio_2fproto_2faudio_5fevent_2eproto

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
#include "modules/audio/proto/audio_common.pb.h"
#include "modules/common/proto/header.pb.h"
#include "modules/localization/proto/pose.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2faudio_2fproto_2faudio_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2faudio_2fproto_2faudio_5fevent_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2faudio_2fproto_2faudio_5fevent_2eproto;
namespace apollo {
namespace audio {
class AudioEvent;
class AudioEventDefaultTypeInternal;
extern AudioEventDefaultTypeInternal _AudioEvent_default_instance_;
}  // namespace audio
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::audio::AudioEvent* Arena::CreateMaybeMessage<::apollo::audio::AudioEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace audio {

// ===================================================================

class AudioEvent PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.audio.AudioEvent) */ {
 public:
  inline AudioEvent() : AudioEvent(nullptr) {}
  virtual ~AudioEvent();

  AudioEvent(const AudioEvent& from);
  AudioEvent(AudioEvent&& from) noexcept
    : AudioEvent() {
    *this = ::std::move(from);
  }

  inline AudioEvent& operator=(const AudioEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline AudioEvent& operator=(AudioEvent&& from) noexcept {
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
  static const AudioEvent& default_instance();

  static inline const AudioEvent* internal_default_instance() {
    return reinterpret_cast<const AudioEvent*>(
               &_AudioEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AudioEvent& a, AudioEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(AudioEvent* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AudioEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AudioEvent* New() const final {
    return CreateMaybeMessage<AudioEvent>(nullptr);
  }

  AudioEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AudioEvent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AudioEvent& from);
  void MergeFrom(const AudioEvent& from);
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
  void InternalSwap(AudioEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.audio.AudioEvent";
  }
  protected:
  explicit AudioEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2faudio_2fproto_2faudio_5fevent_2eproto);
    return ::descriptor_table_modules_2faudio_2fproto_2faudio_5fevent_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kPoseFieldNumber = 7,
    kIdFieldNumber = 2,
    kMovingResultFieldNumber = 3,
    kAudioTypeFieldNumber = 4,
    kSirenIsOnFieldNumber = 5,
    kAudioDirectionFieldNumber = 6,
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

  // optional .apollo.localization.Pose pose = 7;
  bool has_pose() const;
  private:
  bool _internal_has_pose() const;
  public:
  void clear_pose();
  const ::apollo::localization::Pose& pose() const;
  ::apollo::localization::Pose* release_pose();
  ::apollo::localization::Pose* mutable_pose();
  void set_allocated_pose(::apollo::localization::Pose* pose);
  private:
  const ::apollo::localization::Pose& _internal_pose() const;
  ::apollo::localization::Pose* _internal_mutable_pose();
  public:
  void unsafe_arena_set_allocated_pose(
      ::apollo::localization::Pose* pose);
  ::apollo::localization::Pose* unsafe_arena_release_pose();

  // optional int32 id = 2;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional .apollo.audio.MovingResult moving_result = 3 [default = UNKNOWN];
  bool has_moving_result() const;
  private:
  bool _internal_has_moving_result() const;
  public:
  void clear_moving_result();
  ::apollo::audio::MovingResult moving_result() const;
  void set_moving_result(::apollo::audio::MovingResult value);
  private:
  ::apollo::audio::MovingResult _internal_moving_result() const;
  void _internal_set_moving_result(::apollo::audio::MovingResult value);
  public:

  // optional .apollo.audio.AudioType audio_type = 4 [default = UNKNOWN_TYPE];
  bool has_audio_type() const;
  private:
  bool _internal_has_audio_type() const;
  public:
  void clear_audio_type();
  ::apollo::audio::AudioType audio_type() const;
  void set_audio_type(::apollo::audio::AudioType value);
  private:
  ::apollo::audio::AudioType _internal_audio_type() const;
  void _internal_set_audio_type(::apollo::audio::AudioType value);
  public:

  // optional bool siren_is_on = 5;
  bool has_siren_is_on() const;
  private:
  bool _internal_has_siren_is_on() const;
  public:
  void clear_siren_is_on();
  bool siren_is_on() const;
  void set_siren_is_on(bool value);
  private:
  bool _internal_siren_is_on() const;
  void _internal_set_siren_is_on(bool value);
  public:

  // optional .apollo.audio.AudioDirection audio_direction = 6 [default = UNKNOWN_DIRECTION];
  bool has_audio_direction() const;
  private:
  bool _internal_has_audio_direction() const;
  public:
  void clear_audio_direction();
  ::apollo::audio::AudioDirection audio_direction() const;
  void set_audio_direction(::apollo::audio::AudioDirection value);
  private:
  ::apollo::audio::AudioDirection _internal_audio_direction() const;
  void _internal_set_audio_direction(::apollo::audio::AudioDirection value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.audio.AudioEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::apollo::common::Header* header_;
  ::apollo::localization::Pose* pose_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  int moving_result_;
  int audio_type_;
  bool siren_is_on_;
  int audio_direction_;
  friend struct ::TableStruct_modules_2faudio_2fproto_2faudio_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AudioEvent

// optional .apollo.common.Header header = 1;
inline bool AudioEvent::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool AudioEvent::has_header() const {
  return _internal_has_header();
}
inline const ::apollo::common::Header& AudioEvent::_internal_header() const {
  const ::apollo::common::Header* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::common::Header&>(
      ::apollo::common::_Header_default_instance_);
}
inline const ::apollo::common::Header& AudioEvent::header() const {
  // @@protoc_insertion_point(field_get:apollo.audio.AudioEvent.header)
  return _internal_header();
}
inline void AudioEvent::unsafe_arena_set_allocated_header(
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
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.audio.AudioEvent.header)
}
inline ::apollo::common::Header* AudioEvent::release_header() {
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::apollo::common::Header* AudioEvent::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:apollo.audio.AudioEvent.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::common::Header* AudioEvent::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::apollo::common::Header* AudioEvent::mutable_header() {
  // @@protoc_insertion_point(field_mutable:apollo.audio.AudioEvent.header)
  return _internal_mutable_header();
}
inline void AudioEvent::set_allocated_header(::apollo::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:apollo.audio.AudioEvent.header)
}

// optional int32 id = 2;
inline bool AudioEvent::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AudioEvent::has_id() const {
  return _internal_has_id();
}
inline void AudioEvent::clear_id() {
  id_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AudioEvent::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AudioEvent::id() const {
  // @@protoc_insertion_point(field_get:apollo.audio.AudioEvent.id)
  return _internal_id();
}
inline void AudioEvent::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  id_ = value;
}
inline void AudioEvent::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:apollo.audio.AudioEvent.id)
}

// optional .apollo.audio.MovingResult moving_result = 3 [default = UNKNOWN];
inline bool AudioEvent::_internal_has_moving_result() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool AudioEvent::has_moving_result() const {
  return _internal_has_moving_result();
}
inline void AudioEvent::clear_moving_result() {
  moving_result_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::apollo::audio::MovingResult AudioEvent::_internal_moving_result() const {
  return static_cast< ::apollo::audio::MovingResult >(moving_result_);
}
inline ::apollo::audio::MovingResult AudioEvent::moving_result() const {
  // @@protoc_insertion_point(field_get:apollo.audio.AudioEvent.moving_result)
  return _internal_moving_result();
}
inline void AudioEvent::_internal_set_moving_result(::apollo::audio::MovingResult value) {
  assert(::apollo::audio::MovingResult_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  moving_result_ = value;
}
inline void AudioEvent::set_moving_result(::apollo::audio::MovingResult value) {
  _internal_set_moving_result(value);
  // @@protoc_insertion_point(field_set:apollo.audio.AudioEvent.moving_result)
}

// optional .apollo.audio.AudioType audio_type = 4 [default = UNKNOWN_TYPE];
inline bool AudioEvent::_internal_has_audio_type() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool AudioEvent::has_audio_type() const {
  return _internal_has_audio_type();
}
inline void AudioEvent::clear_audio_type() {
  audio_type_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::apollo::audio::AudioType AudioEvent::_internal_audio_type() const {
  return static_cast< ::apollo::audio::AudioType >(audio_type_);
}
inline ::apollo::audio::AudioType AudioEvent::audio_type() const {
  // @@protoc_insertion_point(field_get:apollo.audio.AudioEvent.audio_type)
  return _internal_audio_type();
}
inline void AudioEvent::_internal_set_audio_type(::apollo::audio::AudioType value) {
  assert(::apollo::audio::AudioType_IsValid(value));
  _has_bits_[0] |= 0x00000010u;
  audio_type_ = value;
}
inline void AudioEvent::set_audio_type(::apollo::audio::AudioType value) {
  _internal_set_audio_type(value);
  // @@protoc_insertion_point(field_set:apollo.audio.AudioEvent.audio_type)
}

// optional bool siren_is_on = 5;
inline bool AudioEvent::_internal_has_siren_is_on() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool AudioEvent::has_siren_is_on() const {
  return _internal_has_siren_is_on();
}
inline void AudioEvent::clear_siren_is_on() {
  siren_is_on_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool AudioEvent::_internal_siren_is_on() const {
  return siren_is_on_;
}
inline bool AudioEvent::siren_is_on() const {
  // @@protoc_insertion_point(field_get:apollo.audio.AudioEvent.siren_is_on)
  return _internal_siren_is_on();
}
inline void AudioEvent::_internal_set_siren_is_on(bool value) {
  _has_bits_[0] |= 0x00000020u;
  siren_is_on_ = value;
}
inline void AudioEvent::set_siren_is_on(bool value) {
  _internal_set_siren_is_on(value);
  // @@protoc_insertion_point(field_set:apollo.audio.AudioEvent.siren_is_on)
}

// optional .apollo.audio.AudioDirection audio_direction = 6 [default = UNKNOWN_DIRECTION];
inline bool AudioEvent::_internal_has_audio_direction() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool AudioEvent::has_audio_direction() const {
  return _internal_has_audio_direction();
}
inline void AudioEvent::clear_audio_direction() {
  audio_direction_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::apollo::audio::AudioDirection AudioEvent::_internal_audio_direction() const {
  return static_cast< ::apollo::audio::AudioDirection >(audio_direction_);
}
inline ::apollo::audio::AudioDirection AudioEvent::audio_direction() const {
  // @@protoc_insertion_point(field_get:apollo.audio.AudioEvent.audio_direction)
  return _internal_audio_direction();
}
inline void AudioEvent::_internal_set_audio_direction(::apollo::audio::AudioDirection value) {
  assert(::apollo::audio::AudioDirection_IsValid(value));
  _has_bits_[0] |= 0x00000040u;
  audio_direction_ = value;
}
inline void AudioEvent::set_audio_direction(::apollo::audio::AudioDirection value) {
  _internal_set_audio_direction(value);
  // @@protoc_insertion_point(field_set:apollo.audio.AudioEvent.audio_direction)
}

// optional .apollo.localization.Pose pose = 7;
inline bool AudioEvent::_internal_has_pose() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || pose_ != nullptr);
  return value;
}
inline bool AudioEvent::has_pose() const {
  return _internal_has_pose();
}
inline const ::apollo::localization::Pose& AudioEvent::_internal_pose() const {
  const ::apollo::localization::Pose* p = pose_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::localization::Pose&>(
      ::apollo::localization::_Pose_default_instance_);
}
inline const ::apollo::localization::Pose& AudioEvent::pose() const {
  // @@protoc_insertion_point(field_get:apollo.audio.AudioEvent.pose)
  return _internal_pose();
}
inline void AudioEvent::unsafe_arena_set_allocated_pose(
    ::apollo::localization::Pose* pose) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  pose_ = pose;
  if (pose) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.audio.AudioEvent.pose)
}
inline ::apollo::localization::Pose* AudioEvent::release_pose() {
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::localization::Pose* temp = pose_;
  pose_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::apollo::localization::Pose* AudioEvent::unsafe_arena_release_pose() {
  // @@protoc_insertion_point(field_release:apollo.audio.AudioEvent.pose)
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::localization::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::apollo::localization::Pose* AudioEvent::_internal_mutable_pose() {
  _has_bits_[0] |= 0x00000002u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::localization::Pose>(GetArena());
    pose_ = p;
  }
  return pose_;
}
inline ::apollo::localization::Pose* AudioEvent::mutable_pose() {
  // @@protoc_insertion_point(field_mutable:apollo.audio.AudioEvent.pose)
  return _internal_mutable_pose();
}
inline void AudioEvent::set_allocated_pose(::apollo::localization::Pose* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose)->GetArena();
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:apollo.audio.AudioEvent.pose)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace audio
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2faudio_2fproto_2faudio_5fevent_2eproto
