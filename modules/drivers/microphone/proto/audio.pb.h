// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/drivers/microphone/proto/audio.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto

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
#include "modules/drivers/microphone/proto/microphone_config.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto;
namespace apollo {
namespace drivers {
namespace microphone {
namespace config {
class AudioData;
class AudioDataDefaultTypeInternal;
extern AudioDataDefaultTypeInternal _AudioData_default_instance_;
class ChannelData;
class ChannelDataDefaultTypeInternal;
extern ChannelDataDefaultTypeInternal _ChannelData_default_instance_;
}  // namespace config
}  // namespace microphone
}  // namespace drivers
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::drivers::microphone::config::AudioData* Arena::CreateMaybeMessage<::apollo::drivers::microphone::config::AudioData>(Arena*);
template<> ::apollo::drivers::microphone::config::ChannelData* Arena::CreateMaybeMessage<::apollo::drivers::microphone::config::ChannelData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace drivers {
namespace microphone {
namespace config {

// ===================================================================

class ChannelData PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.drivers.microphone.config.ChannelData) */ {
 public:
  inline ChannelData() : ChannelData(nullptr) {}
  virtual ~ChannelData();

  ChannelData(const ChannelData& from);
  ChannelData(ChannelData&& from) noexcept
    : ChannelData() {
    *this = ::std::move(from);
  }

  inline ChannelData& operator=(const ChannelData& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChannelData& operator=(ChannelData&& from) noexcept {
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
  static const ChannelData& default_instance();

  static inline const ChannelData* internal_default_instance() {
    return reinterpret_cast<const ChannelData*>(
               &_ChannelData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChannelData& a, ChannelData& b) {
    a.Swap(&b);
  }
  inline void Swap(ChannelData* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ChannelData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ChannelData* New() const final {
    return CreateMaybeMessage<ChannelData>(nullptr);
  }

  ChannelData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ChannelData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ChannelData& from);
  void MergeFrom(const ChannelData& from);
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
  void InternalSwap(ChannelData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.drivers.microphone.config.ChannelData";
  }
  protected:
  explicit ChannelData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto);
    return ::descriptor_table_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 2,
    kChannelTypeFieldNumber = 1,
  };
  // optional bytes data = 2;
  bool has_data() const;
  private:
  bool _internal_has_data() const;
  public:
  void clear_data();
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // optional .apollo.drivers.microphone.config.ChannelType channel_type = 1;
  bool has_channel_type() const;
  private:
  bool _internal_has_channel_type() const;
  public:
  void clear_channel_type();
  ::apollo::drivers::microphone::config::ChannelType channel_type() const;
  void set_channel_type(::apollo::drivers::microphone::config::ChannelType value);
  private:
  ::apollo::drivers::microphone::config::ChannelType _internal_channel_type() const;
  void _internal_set_channel_type(::apollo::drivers::microphone::config::ChannelType value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.drivers.microphone.config.ChannelData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  int channel_type_;
  friend struct ::TableStruct_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto;
};
// -------------------------------------------------------------------

class AudioData PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.drivers.microphone.config.AudioData) */ {
 public:
  inline AudioData() : AudioData(nullptr) {}
  virtual ~AudioData();

  AudioData(const AudioData& from);
  AudioData(AudioData&& from) noexcept
    : AudioData() {
    *this = ::std::move(from);
  }

  inline AudioData& operator=(const AudioData& from) {
    CopyFrom(from);
    return *this;
  }
  inline AudioData& operator=(AudioData&& from) noexcept {
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
  static const AudioData& default_instance();

  static inline const AudioData* internal_default_instance() {
    return reinterpret_cast<const AudioData*>(
               &_AudioData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AudioData& a, AudioData& b) {
    a.Swap(&b);
  }
  inline void Swap(AudioData* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AudioData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AudioData* New() const final {
    return CreateMaybeMessage<AudioData>(nullptr);
  }

  AudioData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AudioData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AudioData& from);
  void MergeFrom(const AudioData& from);
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
  void InternalSwap(AudioData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.drivers.microphone.config.AudioData";
  }
  protected:
  explicit AudioData(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto);
    return ::descriptor_table_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChannelDataFieldNumber = 3,
    kHeaderFieldNumber = 1,
    kMicrophoneConfigFieldNumber = 2,
  };
  // repeated .apollo.drivers.microphone.config.ChannelData channel_data = 3;
  int channel_data_size() const;
  private:
  int _internal_channel_data_size() const;
  public:
  void clear_channel_data();
  ::apollo::drivers::microphone::config::ChannelData* mutable_channel_data(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::drivers::microphone::config::ChannelData >*
      mutable_channel_data();
  private:
  const ::apollo::drivers::microphone::config::ChannelData& _internal_channel_data(int index) const;
  ::apollo::drivers::microphone::config::ChannelData* _internal_add_channel_data();
  public:
  const ::apollo::drivers::microphone::config::ChannelData& channel_data(int index) const;
  ::apollo::drivers::microphone::config::ChannelData* add_channel_data();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::drivers::microphone::config::ChannelData >&
      channel_data() const;

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

  // optional .apollo.drivers.microphone.config.MicrophoneConfig microphone_config = 2;
  bool has_microphone_config() const;
  private:
  bool _internal_has_microphone_config() const;
  public:
  void clear_microphone_config();
  const ::apollo::drivers::microphone::config::MicrophoneConfig& microphone_config() const;
  ::apollo::drivers::microphone::config::MicrophoneConfig* release_microphone_config();
  ::apollo::drivers::microphone::config::MicrophoneConfig* mutable_microphone_config();
  void set_allocated_microphone_config(::apollo::drivers::microphone::config::MicrophoneConfig* microphone_config);
  private:
  const ::apollo::drivers::microphone::config::MicrophoneConfig& _internal_microphone_config() const;
  ::apollo::drivers::microphone::config::MicrophoneConfig* _internal_mutable_microphone_config();
  public:
  void unsafe_arena_set_allocated_microphone_config(
      ::apollo::drivers::microphone::config::MicrophoneConfig* microphone_config);
  ::apollo::drivers::microphone::config::MicrophoneConfig* unsafe_arena_release_microphone_config();

  // @@protoc_insertion_point(class_scope:apollo.drivers.microphone.config.AudioData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::drivers::microphone::config::ChannelData > channel_data_;
  ::apollo::common::Header* header_;
  ::apollo::drivers::microphone::config::MicrophoneConfig* microphone_config_;
  friend struct ::TableStruct_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChannelData

// optional .apollo.drivers.microphone.config.ChannelType channel_type = 1;
inline bool ChannelData::_internal_has_channel_type() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ChannelData::has_channel_type() const {
  return _internal_has_channel_type();
}
inline void ChannelData::clear_channel_type() {
  channel_type_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::apollo::drivers::microphone::config::ChannelType ChannelData::_internal_channel_type() const {
  return static_cast< ::apollo::drivers::microphone::config::ChannelType >(channel_type_);
}
inline ::apollo::drivers::microphone::config::ChannelType ChannelData::channel_type() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.microphone.config.ChannelData.channel_type)
  return _internal_channel_type();
}
inline void ChannelData::_internal_set_channel_type(::apollo::drivers::microphone::config::ChannelType value) {
  assert(::apollo::drivers::microphone::config::ChannelType_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  channel_type_ = value;
}
inline void ChannelData::set_channel_type(::apollo::drivers::microphone::config::ChannelType value) {
  _internal_set_channel_type(value);
  // @@protoc_insertion_point(field_set:apollo.drivers.microphone.config.ChannelData.channel_type)
}

// optional bytes data = 2;
inline bool ChannelData::_internal_has_data() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ChannelData::has_data() const {
  return _internal_has_data();
}
inline void ChannelData::clear_data() {
  data_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ChannelData::data() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.microphone.config.ChannelData.data)
  return _internal_data();
}
inline void ChannelData::set_data(const std::string& value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:apollo.drivers.microphone.config.ChannelData.data)
}
inline std::string* ChannelData::mutable_data() {
  // @@protoc_insertion_point(field_mutable:apollo.drivers.microphone.config.ChannelData.data)
  return _internal_mutable_data();
}
inline const std::string& ChannelData::_internal_data() const {
  return data_.Get();
}
inline void ChannelData::_internal_set_data(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ChannelData::set_data(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  data_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:apollo.drivers.microphone.config.ChannelData.data)
}
inline void ChannelData::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:apollo.drivers.microphone.config.ChannelData.data)
}
inline void ChannelData::set_data(const void* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:apollo.drivers.microphone.config.ChannelData.data)
}
inline std::string* ChannelData::_internal_mutable_data() {
  _has_bits_[0] |= 0x00000001u;
  return data_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ChannelData::release_data() {
  // @@protoc_insertion_point(field_release:apollo.drivers.microphone.config.ChannelData.data)
  if (!_internal_has_data()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return data_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ChannelData::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  data_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.microphone.config.ChannelData.data)
}

// -------------------------------------------------------------------

// AudioData

// optional .apollo.common.Header header = 1;
inline bool AudioData::_internal_has_header() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || header_ != nullptr);
  return value;
}
inline bool AudioData::has_header() const {
  return _internal_has_header();
}
inline const ::apollo::common::Header& AudioData::_internal_header() const {
  const ::apollo::common::Header* p = header_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::common::Header&>(
      ::apollo::common::_Header_default_instance_);
}
inline const ::apollo::common::Header& AudioData::header() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.microphone.config.AudioData.header)
  return _internal_header();
}
inline void AudioData::unsafe_arena_set_allocated_header(
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
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.drivers.microphone.config.AudioData.header)
}
inline ::apollo::common::Header* AudioData::release_header() {
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::apollo::common::Header* AudioData::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:apollo.drivers.microphone.config.AudioData.header)
  _has_bits_[0] &= ~0x00000001u;
  ::apollo::common::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::apollo::common::Header* AudioData::_internal_mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::common::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::apollo::common::Header* AudioData::mutable_header() {
  // @@protoc_insertion_point(field_mutable:apollo.drivers.microphone.config.AudioData.header)
  return _internal_mutable_header();
}
inline void AudioData::set_allocated_header(::apollo::common::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.microphone.config.AudioData.header)
}

// optional .apollo.drivers.microphone.config.MicrophoneConfig microphone_config = 2;
inline bool AudioData::_internal_has_microphone_config() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || microphone_config_ != nullptr);
  return value;
}
inline bool AudioData::has_microphone_config() const {
  return _internal_has_microphone_config();
}
inline const ::apollo::drivers::microphone::config::MicrophoneConfig& AudioData::_internal_microphone_config() const {
  const ::apollo::drivers::microphone::config::MicrophoneConfig* p = microphone_config_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::drivers::microphone::config::MicrophoneConfig&>(
      ::apollo::drivers::microphone::config::_MicrophoneConfig_default_instance_);
}
inline const ::apollo::drivers::microphone::config::MicrophoneConfig& AudioData::microphone_config() const {
  // @@protoc_insertion_point(field_get:apollo.drivers.microphone.config.AudioData.microphone_config)
  return _internal_microphone_config();
}
inline void AudioData::unsafe_arena_set_allocated_microphone_config(
    ::apollo::drivers::microphone::config::MicrophoneConfig* microphone_config) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(microphone_config_);
  }
  microphone_config_ = microphone_config;
  if (microphone_config) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.drivers.microphone.config.AudioData.microphone_config)
}
inline ::apollo::drivers::microphone::config::MicrophoneConfig* AudioData::release_microphone_config() {
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::drivers::microphone::config::MicrophoneConfig* temp = microphone_config_;
  microphone_config_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::apollo::drivers::microphone::config::MicrophoneConfig* AudioData::unsafe_arena_release_microphone_config() {
  // @@protoc_insertion_point(field_release:apollo.drivers.microphone.config.AudioData.microphone_config)
  _has_bits_[0] &= ~0x00000002u;
  ::apollo::drivers::microphone::config::MicrophoneConfig* temp = microphone_config_;
  microphone_config_ = nullptr;
  return temp;
}
inline ::apollo::drivers::microphone::config::MicrophoneConfig* AudioData::_internal_mutable_microphone_config() {
  _has_bits_[0] |= 0x00000002u;
  if (microphone_config_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::drivers::microphone::config::MicrophoneConfig>(GetArena());
    microphone_config_ = p;
  }
  return microphone_config_;
}
inline ::apollo::drivers::microphone::config::MicrophoneConfig* AudioData::mutable_microphone_config() {
  // @@protoc_insertion_point(field_mutable:apollo.drivers.microphone.config.AudioData.microphone_config)
  return _internal_mutable_microphone_config();
}
inline void AudioData::set_allocated_microphone_config(::apollo::drivers::microphone::config::MicrophoneConfig* microphone_config) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(microphone_config_);
  }
  if (microphone_config) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(microphone_config)->GetArena();
    if (message_arena != submessage_arena) {
      microphone_config = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, microphone_config, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  microphone_config_ = microphone_config;
  // @@protoc_insertion_point(field_set_allocated:apollo.drivers.microphone.config.AudioData.microphone_config)
}

// repeated .apollo.drivers.microphone.config.ChannelData channel_data = 3;
inline int AudioData::_internal_channel_data_size() const {
  return channel_data_.size();
}
inline int AudioData::channel_data_size() const {
  return _internal_channel_data_size();
}
inline void AudioData::clear_channel_data() {
  channel_data_.Clear();
}
inline ::apollo::drivers::microphone::config::ChannelData* AudioData::mutable_channel_data(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.drivers.microphone.config.AudioData.channel_data)
  return channel_data_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::drivers::microphone::config::ChannelData >*
AudioData::mutable_channel_data() {
  // @@protoc_insertion_point(field_mutable_list:apollo.drivers.microphone.config.AudioData.channel_data)
  return &channel_data_;
}
inline const ::apollo::drivers::microphone::config::ChannelData& AudioData::_internal_channel_data(int index) const {
  return channel_data_.Get(index);
}
inline const ::apollo::drivers::microphone::config::ChannelData& AudioData::channel_data(int index) const {
  // @@protoc_insertion_point(field_get:apollo.drivers.microphone.config.AudioData.channel_data)
  return _internal_channel_data(index);
}
inline ::apollo::drivers::microphone::config::ChannelData* AudioData::_internal_add_channel_data() {
  return channel_data_.Add();
}
inline ::apollo::drivers::microphone::config::ChannelData* AudioData::add_channel_data() {
  // @@protoc_insertion_point(field_add:apollo.drivers.microphone.config.AudioData.channel_data)
  return _internal_add_channel_data();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::drivers::microphone::config::ChannelData >&
AudioData::channel_data() const {
  // @@protoc_insertion_point(field_list:apollo.drivers.microphone.config.AudioData.channel_data)
  return channel_data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace config
}  // namespace microphone
}  // namespace drivers
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2fdrivers_2fmicrophone_2fproto_2faudio_2eproto
