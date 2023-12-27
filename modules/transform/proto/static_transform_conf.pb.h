// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/transform/proto/static_transform_conf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto;
namespace apollo {
namespace static_transform {
class Conf;
class ConfDefaultTypeInternal;
extern ConfDefaultTypeInternal _Conf_default_instance_;
class ExtrinsicFile;
class ExtrinsicFileDefaultTypeInternal;
extern ExtrinsicFileDefaultTypeInternal _ExtrinsicFile_default_instance_;
}  // namespace static_transform
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::static_transform::Conf* Arena::CreateMaybeMessage<::apollo::static_transform::Conf>(Arena*);
template<> ::apollo::static_transform::ExtrinsicFile* Arena::CreateMaybeMessage<::apollo::static_transform::ExtrinsicFile>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace static_transform {

// ===================================================================

class ExtrinsicFile PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.static_transform.ExtrinsicFile) */ {
 public:
  inline ExtrinsicFile() : ExtrinsicFile(nullptr) {}
  virtual ~ExtrinsicFile();

  ExtrinsicFile(const ExtrinsicFile& from);
  ExtrinsicFile(ExtrinsicFile&& from) noexcept
    : ExtrinsicFile() {
    *this = ::std::move(from);
  }

  inline ExtrinsicFile& operator=(const ExtrinsicFile& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExtrinsicFile& operator=(ExtrinsicFile&& from) noexcept {
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
  static const ExtrinsicFile& default_instance();

  static inline const ExtrinsicFile* internal_default_instance() {
    return reinterpret_cast<const ExtrinsicFile*>(
               &_ExtrinsicFile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ExtrinsicFile& a, ExtrinsicFile& b) {
    a.Swap(&b);
  }
  inline void Swap(ExtrinsicFile* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ExtrinsicFile* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ExtrinsicFile* New() const final {
    return CreateMaybeMessage<ExtrinsicFile>(nullptr);
  }

  ExtrinsicFile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExtrinsicFile>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ExtrinsicFile& from);
  void MergeFrom(const ExtrinsicFile& from);
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
  void InternalSwap(ExtrinsicFile* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.static_transform.ExtrinsicFile";
  }
  protected:
  explicit ExtrinsicFile(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto);
    return ::descriptor_table_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFrameIdFieldNumber = 1,
    kChildFrameIdFieldNumber = 2,
    kFilePathFieldNumber = 3,
    kEnableFieldNumber = 4,
  };
  // optional string frame_id = 1;
  bool has_frame_id() const;
  private:
  bool _internal_has_frame_id() const;
  public:
  void clear_frame_id();
  const std::string& frame_id() const;
  void set_frame_id(const std::string& value);
  void set_frame_id(std::string&& value);
  void set_frame_id(const char* value);
  void set_frame_id(const char* value, size_t size);
  std::string* mutable_frame_id();
  std::string* release_frame_id();
  void set_allocated_frame_id(std::string* frame_id);
  private:
  const std::string& _internal_frame_id() const;
  void _internal_set_frame_id(const std::string& value);
  std::string* _internal_mutable_frame_id();
  public:

  // optional string child_frame_id = 2;
  bool has_child_frame_id() const;
  private:
  bool _internal_has_child_frame_id() const;
  public:
  void clear_child_frame_id();
  const std::string& child_frame_id() const;
  void set_child_frame_id(const std::string& value);
  void set_child_frame_id(std::string&& value);
  void set_child_frame_id(const char* value);
  void set_child_frame_id(const char* value, size_t size);
  std::string* mutable_child_frame_id();
  std::string* release_child_frame_id();
  void set_allocated_child_frame_id(std::string* child_frame_id);
  private:
  const std::string& _internal_child_frame_id() const;
  void _internal_set_child_frame_id(const std::string& value);
  std::string* _internal_mutable_child_frame_id();
  public:

  // optional string file_path = 3;
  bool has_file_path() const;
  private:
  bool _internal_has_file_path() const;
  public:
  void clear_file_path();
  const std::string& file_path() const;
  void set_file_path(const std::string& value);
  void set_file_path(std::string&& value);
  void set_file_path(const char* value);
  void set_file_path(const char* value, size_t size);
  std::string* mutable_file_path();
  std::string* release_file_path();
  void set_allocated_file_path(std::string* file_path);
  private:
  const std::string& _internal_file_path() const;
  void _internal_set_file_path(const std::string& value);
  std::string* _internal_mutable_file_path();
  public:

  // optional bool enable = 4;
  bool has_enable() const;
  private:
  bool _internal_has_enable() const;
  public:
  void clear_enable();
  bool enable() const;
  void set_enable(bool value);
  private:
  bool _internal_enable() const;
  void _internal_set_enable(bool value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.static_transform.ExtrinsicFile)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr frame_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr child_frame_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr file_path_;
  bool enable_;
  friend struct ::TableStruct_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto;
};
// -------------------------------------------------------------------

class Conf PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.static_transform.Conf) */ {
 public:
  inline Conf() : Conf(nullptr) {}
  virtual ~Conf();

  Conf(const Conf& from);
  Conf(Conf&& from) noexcept
    : Conf() {
    *this = ::std::move(from);
  }

  inline Conf& operator=(const Conf& from) {
    CopyFrom(from);
    return *this;
  }
  inline Conf& operator=(Conf&& from) noexcept {
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
  static const Conf& default_instance();

  static inline const Conf* internal_default_instance() {
    return reinterpret_cast<const Conf*>(
               &_Conf_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Conf& a, Conf& b) {
    a.Swap(&b);
  }
  inline void Swap(Conf* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Conf* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Conf* New() const final {
    return CreateMaybeMessage<Conf>(nullptr);
  }

  Conf* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Conf>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Conf& from);
  void MergeFrom(const Conf& from);
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
  void InternalSwap(Conf* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.static_transform.Conf";
  }
  protected:
  explicit Conf(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto);
    return ::descriptor_table_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExtrinsicFileFieldNumber = 1,
  };
  // repeated .apollo.static_transform.ExtrinsicFile extrinsic_file = 1;
  int extrinsic_file_size() const;
  private:
  int _internal_extrinsic_file_size() const;
  public:
  void clear_extrinsic_file();
  ::apollo::static_transform::ExtrinsicFile* mutable_extrinsic_file(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::static_transform::ExtrinsicFile >*
      mutable_extrinsic_file();
  private:
  const ::apollo::static_transform::ExtrinsicFile& _internal_extrinsic_file(int index) const;
  ::apollo::static_transform::ExtrinsicFile* _internal_add_extrinsic_file();
  public:
  const ::apollo::static_transform::ExtrinsicFile& extrinsic_file(int index) const;
  ::apollo::static_transform::ExtrinsicFile* add_extrinsic_file();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::static_transform::ExtrinsicFile >&
      extrinsic_file() const;

  // @@protoc_insertion_point(class_scope:apollo.static_transform.Conf)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::static_transform::ExtrinsicFile > extrinsic_file_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExtrinsicFile

// optional string frame_id = 1;
inline bool ExtrinsicFile::_internal_has_frame_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ExtrinsicFile::has_frame_id() const {
  return _internal_has_frame_id();
}
inline void ExtrinsicFile::clear_frame_id() {
  frame_id_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ExtrinsicFile::frame_id() const {
  // @@protoc_insertion_point(field_get:apollo.static_transform.ExtrinsicFile.frame_id)
  return _internal_frame_id();
}
inline void ExtrinsicFile::set_frame_id(const std::string& value) {
  _internal_set_frame_id(value);
  // @@protoc_insertion_point(field_set:apollo.static_transform.ExtrinsicFile.frame_id)
}
inline std::string* ExtrinsicFile::mutable_frame_id() {
  // @@protoc_insertion_point(field_mutable:apollo.static_transform.ExtrinsicFile.frame_id)
  return _internal_mutable_frame_id();
}
inline const std::string& ExtrinsicFile::_internal_frame_id() const {
  return frame_id_.Get();
}
inline void ExtrinsicFile::_internal_set_frame_id(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ExtrinsicFile::set_frame_id(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  frame_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:apollo.static_transform.ExtrinsicFile.frame_id)
}
inline void ExtrinsicFile::set_frame_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:apollo.static_transform.ExtrinsicFile.frame_id)
}
inline void ExtrinsicFile::set_frame_id(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:apollo.static_transform.ExtrinsicFile.frame_id)
}
inline std::string* ExtrinsicFile::_internal_mutable_frame_id() {
  _has_bits_[0] |= 0x00000001u;
  return frame_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ExtrinsicFile::release_frame_id() {
  // @@protoc_insertion_point(field_release:apollo.static_transform.ExtrinsicFile.frame_id)
  if (!_internal_has_frame_id()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return frame_id_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ExtrinsicFile::set_allocated_frame_id(std::string* frame_id) {
  if (frame_id != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  frame_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), frame_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:apollo.static_transform.ExtrinsicFile.frame_id)
}

// optional string child_frame_id = 2;
inline bool ExtrinsicFile::_internal_has_child_frame_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ExtrinsicFile::has_child_frame_id() const {
  return _internal_has_child_frame_id();
}
inline void ExtrinsicFile::clear_child_frame_id() {
  child_frame_id_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ExtrinsicFile::child_frame_id() const {
  // @@protoc_insertion_point(field_get:apollo.static_transform.ExtrinsicFile.child_frame_id)
  return _internal_child_frame_id();
}
inline void ExtrinsicFile::set_child_frame_id(const std::string& value) {
  _internal_set_child_frame_id(value);
  // @@protoc_insertion_point(field_set:apollo.static_transform.ExtrinsicFile.child_frame_id)
}
inline std::string* ExtrinsicFile::mutable_child_frame_id() {
  // @@protoc_insertion_point(field_mutable:apollo.static_transform.ExtrinsicFile.child_frame_id)
  return _internal_mutable_child_frame_id();
}
inline const std::string& ExtrinsicFile::_internal_child_frame_id() const {
  return child_frame_id_.Get();
}
inline void ExtrinsicFile::_internal_set_child_frame_id(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  child_frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ExtrinsicFile::set_child_frame_id(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  child_frame_id_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:apollo.static_transform.ExtrinsicFile.child_frame_id)
}
inline void ExtrinsicFile::set_child_frame_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  child_frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:apollo.static_transform.ExtrinsicFile.child_frame_id)
}
inline void ExtrinsicFile::set_child_frame_id(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  child_frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:apollo.static_transform.ExtrinsicFile.child_frame_id)
}
inline std::string* ExtrinsicFile::_internal_mutable_child_frame_id() {
  _has_bits_[0] |= 0x00000002u;
  return child_frame_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ExtrinsicFile::release_child_frame_id() {
  // @@protoc_insertion_point(field_release:apollo.static_transform.ExtrinsicFile.child_frame_id)
  if (!_internal_has_child_frame_id()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return child_frame_id_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ExtrinsicFile::set_allocated_child_frame_id(std::string* child_frame_id) {
  if (child_frame_id != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  child_frame_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), child_frame_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:apollo.static_transform.ExtrinsicFile.child_frame_id)
}

// optional string file_path = 3;
inline bool ExtrinsicFile::_internal_has_file_path() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ExtrinsicFile::has_file_path() const {
  return _internal_has_file_path();
}
inline void ExtrinsicFile::clear_file_path() {
  file_path_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& ExtrinsicFile::file_path() const {
  // @@protoc_insertion_point(field_get:apollo.static_transform.ExtrinsicFile.file_path)
  return _internal_file_path();
}
inline void ExtrinsicFile::set_file_path(const std::string& value) {
  _internal_set_file_path(value);
  // @@protoc_insertion_point(field_set:apollo.static_transform.ExtrinsicFile.file_path)
}
inline std::string* ExtrinsicFile::mutable_file_path() {
  // @@protoc_insertion_point(field_mutable:apollo.static_transform.ExtrinsicFile.file_path)
  return _internal_mutable_file_path();
}
inline const std::string& ExtrinsicFile::_internal_file_path() const {
  return file_path_.Get();
}
inline void ExtrinsicFile::_internal_set_file_path(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  file_path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void ExtrinsicFile::set_file_path(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  file_path_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:apollo.static_transform.ExtrinsicFile.file_path)
}
inline void ExtrinsicFile::set_file_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  file_path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:apollo.static_transform.ExtrinsicFile.file_path)
}
inline void ExtrinsicFile::set_file_path(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000004u;
  file_path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:apollo.static_transform.ExtrinsicFile.file_path)
}
inline std::string* ExtrinsicFile::_internal_mutable_file_path() {
  _has_bits_[0] |= 0x00000004u;
  return file_path_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* ExtrinsicFile::release_file_path() {
  // @@protoc_insertion_point(field_release:apollo.static_transform.ExtrinsicFile.file_path)
  if (!_internal_has_file_path()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return file_path_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ExtrinsicFile::set_allocated_file_path(std::string* file_path) {
  if (file_path != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  file_path_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), file_path,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:apollo.static_transform.ExtrinsicFile.file_path)
}

// optional bool enable = 4;
inline bool ExtrinsicFile::_internal_has_enable() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ExtrinsicFile::has_enable() const {
  return _internal_has_enable();
}
inline void ExtrinsicFile::clear_enable() {
  enable_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool ExtrinsicFile::_internal_enable() const {
  return enable_;
}
inline bool ExtrinsicFile::enable() const {
  // @@protoc_insertion_point(field_get:apollo.static_transform.ExtrinsicFile.enable)
  return _internal_enable();
}
inline void ExtrinsicFile::_internal_set_enable(bool value) {
  _has_bits_[0] |= 0x00000008u;
  enable_ = value;
}
inline void ExtrinsicFile::set_enable(bool value) {
  _internal_set_enable(value);
  // @@protoc_insertion_point(field_set:apollo.static_transform.ExtrinsicFile.enable)
}

// -------------------------------------------------------------------

// Conf

// repeated .apollo.static_transform.ExtrinsicFile extrinsic_file = 1;
inline int Conf::_internal_extrinsic_file_size() const {
  return extrinsic_file_.size();
}
inline int Conf::extrinsic_file_size() const {
  return _internal_extrinsic_file_size();
}
inline void Conf::clear_extrinsic_file() {
  extrinsic_file_.Clear();
}
inline ::apollo::static_transform::ExtrinsicFile* Conf::mutable_extrinsic_file(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.static_transform.Conf.extrinsic_file)
  return extrinsic_file_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::static_transform::ExtrinsicFile >*
Conf::mutable_extrinsic_file() {
  // @@protoc_insertion_point(field_mutable_list:apollo.static_transform.Conf.extrinsic_file)
  return &extrinsic_file_;
}
inline const ::apollo::static_transform::ExtrinsicFile& Conf::_internal_extrinsic_file(int index) const {
  return extrinsic_file_.Get(index);
}
inline const ::apollo::static_transform::ExtrinsicFile& Conf::extrinsic_file(int index) const {
  // @@protoc_insertion_point(field_get:apollo.static_transform.Conf.extrinsic_file)
  return _internal_extrinsic_file(index);
}
inline ::apollo::static_transform::ExtrinsicFile* Conf::_internal_add_extrinsic_file() {
  return extrinsic_file_.Add();
}
inline ::apollo::static_transform::ExtrinsicFile* Conf::add_extrinsic_file() {
  // @@protoc_insertion_point(field_add:apollo.static_transform.Conf.extrinsic_file)
  return _internal_add_extrinsic_file();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::apollo::static_transform::ExtrinsicFile >&
Conf::extrinsic_file() const {
  // @@protoc_insertion_point(field_list:apollo.static_transform.Conf.extrinsic_file)
  return extrinsic_file_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace static_transform
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2ftransform_2fproto_2fstatic_5ftransform_5fconf_2eproto
