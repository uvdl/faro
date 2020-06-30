// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: faro/proto/image.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_faro_2fproto_2fimage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_faro_2fproto_2fimage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_faro_2fproto_2fimage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_faro_2fproto_2fimage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_faro_2fproto_2fimage_2eproto;
class Image;
class ImageDefaultTypeInternal;
extern ImageDefaultTypeInternal _Image_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Image* Arena::CreateMaybeMessage<::Image>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Image_DataType : int {
  Image_DataType_UINT8 = 0,
  Image_DataType_UINT16 = 1,
  Image_DataType_FLOAT32 = 2,
  Image_DataType_Image_DataType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Image_DataType_Image_DataType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Image_DataType_IsValid(int value);
constexpr Image_DataType Image_DataType_DataType_MIN = Image_DataType_UINT8;
constexpr Image_DataType Image_DataType_DataType_MAX = Image_DataType_FLOAT32;
constexpr int Image_DataType_DataType_ARRAYSIZE = Image_DataType_DataType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Image_DataType_descriptor();
template<typename T>
inline const std::string& Image_DataType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Image_DataType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Image_DataType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Image_DataType_descriptor(), enum_t_value);
}
inline bool Image_DataType_Parse(
    const std::string& name, Image_DataType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Image_DataType>(
    Image_DataType_descriptor(), name, value);
}
// ===================================================================

class Image :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Image) */ {
 public:
  Image();
  virtual ~Image();

  Image(const Image& from);
  Image(Image&& from) noexcept
    : Image() {
    *this = ::std::move(from);
  }

  inline Image& operator=(const Image& from) {
    CopyFrom(from);
    return *this;
  }
  inline Image& operator=(Image&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Image& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Image* internal_default_instance() {
    return reinterpret_cast<const Image*>(
               &_Image_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Image* other);
  friend void swap(Image& a, Image& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Image* New() const final {
    return CreateMaybeMessage<Image>(nullptr);
  }

  Image* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Image>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Image& from);
  void MergeFrom(const Image& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Image* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Image";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_faro_2fproto_2fimage_2eproto);
    return ::descriptor_table_faro_2fproto_2fimage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Image_DataType DataType;
  static constexpr DataType UINT8 =
    Image_DataType_UINT8;
  static constexpr DataType UINT16 =
    Image_DataType_UINT16;
  static constexpr DataType FLOAT32 =
    Image_DataType_FLOAT32;
  static inline bool DataType_IsValid(int value) {
    return Image_DataType_IsValid(value);
  }
  static constexpr DataType DataType_MIN =
    Image_DataType_DataType_MIN;
  static constexpr DataType DataType_MAX =
    Image_DataType_DataType_MAX;
  static constexpr int DataType_ARRAYSIZE =
    Image_DataType_DataType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  DataType_descriptor() {
    return Image_DataType_descriptor();
  }
  template<typename T>
  static inline const std::string& DataType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, DataType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function DataType_Name.");
    return Image_DataType_Name(enum_t_value);
  }
  static inline bool DataType_Parse(const std::string& name,
      DataType* value) {
    return Image_DataType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string description = 5;
  void clear_description();
  static const int kDescriptionFieldNumber = 5;
  const std::string& description() const;
  void set_description(const std::string& value);
  void set_description(std::string&& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  std::string* mutable_description();
  std::string* release_description();
  void set_allocated_description(std::string* description);

  // bytes data = 6;
  void clear_data();
  static const int kDataFieldNumber = 6;
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);

  // string date = 8;
  void clear_date();
  static const int kDateFieldNumber = 8;
  const std::string& date() const;
  void set_date(const std::string& value);
  void set_date(std::string&& value);
  void set_date(const char* value);
  void set_date(const char* value, size_t size);
  std::string* mutable_date();
  std::string* release_date();
  void set_allocated_date(std::string* date);

  // string time = 9;
  void clear_time();
  static const int kTimeFieldNumber = 9;
  const std::string& time() const;
  void set_time(const std::string& value);
  void set_time(std::string&& value);
  void set_time(const char* value);
  void set_time(const char* value, size_t size);
  std::string* mutable_time();
  std::string* release_time();
  void set_allocated_time(std::string* time);

  // string source = 19;
  void clear_source();
  static const int kSourceFieldNumber = 19;
  const std::string& source() const;
  void set_source(const std::string& value);
  void set_source(std::string&& value);
  void set_source(const char* value);
  void set_source(const char* value, size_t size);
  std::string* mutable_source();
  std::string* release_source();
  void set_allocated_source(std::string* source);

  // int32 width = 1;
  void clear_width();
  static const int kWidthFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 height = 2;
  void clear_height();
  static const int kHeightFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::int32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 channels = 3;
  void clear_channels();
  static const int kChannelsFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::int32 channels() const;
  void set_channels(::PROTOBUF_NAMESPACE_ID::int32 value);

  // .Image.DataType type = 4;
  void clear_type();
  static const int kTypeFieldNumber = 4;
  ::Image_DataType type() const;
  void set_type(::Image_DataType value);

  // int32 module = 10;
  void clear_module();
  static const int kModuleFieldNumber = 10;
  ::PROTOBUF_NAMESPACE_ID::int32 module() const;
  void set_module(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 camera = 11;
  void clear_camera();
  static const int kCameraFieldNumber = 11;
  ::PROTOBUF_NAMESPACE_ID::int32 camera() const;
  void set_camera(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 event = 12;
  void clear_event();
  static const int kEventFieldNumber = 12;
  ::PROTOBUF_NAMESPACE_ID::int32 event() const;
  void set_event(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 image_num = 13;
  void clear_image_num();
  static const int kImageNumFieldNumber = 13;
  ::PROTOBUF_NAMESPACE_ID::int32 image_num() const;
  void set_image_num(::PROTOBUF_NAMESPACE_ID::int32 value);

  // float exposure_time = 14;
  void clear_exposure_time();
  static const int kExposureTimeFieldNumber = 14;
  float exposure_time() const;
  void set_exposure_time(float value);

  // float gain_raw = 15;
  void clear_gain_raw();
  static const int kGainRawFieldNumber = 15;
  float gain_raw() const;
  void set_gain_raw(float value);

  // float f_stop = 16;
  void clear_f_stop();
  static const int kFStopFieldNumber = 16;
  float f_stop() const;
  void set_f_stop(float value);

  // float nd_filter = 17;
  void clear_nd_filter();
  static const int kNdFilterFieldNumber = 17;
  float nd_filter() const;
  void set_nd_filter(float value);

  // float polarizer_ang = 18;
  void clear_polarizer_ang();
  static const int kPolarizerAngFieldNumber = 18;
  float polarizer_ang() const;
  void set_polarizer_ang(float value);

  // @@protoc_insertion_point(class_scope:Image)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr date_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr time_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr source_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_;
  ::PROTOBUF_NAMESPACE_ID::int32 channels_;
  int type_;
  ::PROTOBUF_NAMESPACE_ID::int32 module_;
  ::PROTOBUF_NAMESPACE_ID::int32 camera_;
  ::PROTOBUF_NAMESPACE_ID::int32 event_;
  ::PROTOBUF_NAMESPACE_ID::int32 image_num_;
  float exposure_time_;
  float gain_raw_;
  float f_stop_;
  float nd_filter_;
  float polarizer_ang_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_faro_2fproto_2fimage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Image

// int32 width = 1;
inline void Image::clear_width() {
  width_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::width() const {
  // @@protoc_insertion_point(field_get:Image.width)
  return width_;
}
inline void Image::set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:Image.width)
}

// int32 height = 2;
inline void Image::clear_height() {
  height_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::height() const {
  // @@protoc_insertion_point(field_get:Image.height)
  return height_;
}
inline void Image::set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:Image.height)
}

// int32 channels = 3;
inline void Image::clear_channels() {
  channels_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::channels() const {
  // @@protoc_insertion_point(field_get:Image.channels)
  return channels_;
}
inline void Image::set_channels(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  channels_ = value;
  // @@protoc_insertion_point(field_set:Image.channels)
}

// .Image.DataType type = 4;
inline void Image::clear_type() {
  type_ = 0;
}
inline ::Image_DataType Image::type() const {
  // @@protoc_insertion_point(field_get:Image.type)
  return static_cast< ::Image_DataType >(type_);
}
inline void Image::set_type(::Image_DataType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:Image.type)
}

// string description = 5;
inline void Image::clear_description() {
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Image::description() const {
  // @@protoc_insertion_point(field_get:Image.description)
  return description_.GetNoArena();
}
inline void Image::set_description(const std::string& value) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Image.description)
}
inline void Image::set_description(std::string&& value) {
  
  description_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Image.description)
}
inline void Image::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Image.description)
}
inline void Image::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Image.description)
}
inline std::string* Image::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:Image.description)
  return description_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Image::release_description() {
  // @@protoc_insertion_point(field_release:Image.description)
  
  return description_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:Image.description)
}

// bytes data = 6;
inline void Image::clear_data() {
  data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Image::data() const {
  // @@protoc_insertion_point(field_get:Image.data)
  return data_.GetNoArena();
}
inline void Image::set_data(const std::string& value) {
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Image.data)
}
inline void Image::set_data(std::string&& value) {
  
  data_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Image.data)
}
inline void Image::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Image.data)
}
inline void Image::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Image.data)
}
inline std::string* Image::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:Image.data)
  return data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Image::release_data() {
  // @@protoc_insertion_point(field_release:Image.data)
  
  return data_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:Image.data)
}

// string date = 8;
inline void Image::clear_date() {
  date_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Image::date() const {
  // @@protoc_insertion_point(field_get:Image.date)
  return date_.GetNoArena();
}
inline void Image::set_date(const std::string& value) {
  
  date_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Image.date)
}
inline void Image::set_date(std::string&& value) {
  
  date_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Image.date)
}
inline void Image::set_date(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  date_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Image.date)
}
inline void Image::set_date(const char* value, size_t size) {
  
  date_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Image.date)
}
inline std::string* Image::mutable_date() {
  
  // @@protoc_insertion_point(field_mutable:Image.date)
  return date_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Image::release_date() {
  // @@protoc_insertion_point(field_release:Image.date)
  
  return date_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_date(std::string* date) {
  if (date != nullptr) {
    
  } else {
    
  }
  date_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), date);
  // @@protoc_insertion_point(field_set_allocated:Image.date)
}

// string time = 9;
inline void Image::clear_time() {
  time_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Image::time() const {
  // @@protoc_insertion_point(field_get:Image.time)
  return time_.GetNoArena();
}
inline void Image::set_time(const std::string& value) {
  
  time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Image.time)
}
inline void Image::set_time(std::string&& value) {
  
  time_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Image.time)
}
inline void Image::set_time(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Image.time)
}
inline void Image::set_time(const char* value, size_t size) {
  
  time_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Image.time)
}
inline std::string* Image::mutable_time() {
  
  // @@protoc_insertion_point(field_mutable:Image.time)
  return time_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Image::release_time() {
  // @@protoc_insertion_point(field_release:Image.time)
  
  return time_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_time(std::string* time) {
  if (time != nullptr) {
    
  } else {
    
  }
  time_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), time);
  // @@protoc_insertion_point(field_set_allocated:Image.time)
}

// int32 module = 10;
inline void Image::clear_module() {
  module_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::module() const {
  // @@protoc_insertion_point(field_get:Image.module)
  return module_;
}
inline void Image::set_module(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  module_ = value;
  // @@protoc_insertion_point(field_set:Image.module)
}

// int32 camera = 11;
inline void Image::clear_camera() {
  camera_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::camera() const {
  // @@protoc_insertion_point(field_get:Image.camera)
  return camera_;
}
inline void Image::set_camera(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  camera_ = value;
  // @@protoc_insertion_point(field_set:Image.camera)
}

// int32 event = 12;
inline void Image::clear_event() {
  event_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::event() const {
  // @@protoc_insertion_point(field_get:Image.event)
  return event_;
}
inline void Image::set_event(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  event_ = value;
  // @@protoc_insertion_point(field_set:Image.event)
}

// int32 image_num = 13;
inline void Image::clear_image_num() {
  image_num_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Image::image_num() const {
  // @@protoc_insertion_point(field_get:Image.image_num)
  return image_num_;
}
inline void Image::set_image_num(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  image_num_ = value;
  // @@protoc_insertion_point(field_set:Image.image_num)
}

// float exposure_time = 14;
inline void Image::clear_exposure_time() {
  exposure_time_ = 0;
}
inline float Image::exposure_time() const {
  // @@protoc_insertion_point(field_get:Image.exposure_time)
  return exposure_time_;
}
inline void Image::set_exposure_time(float value) {
  
  exposure_time_ = value;
  // @@protoc_insertion_point(field_set:Image.exposure_time)
}

// float gain_raw = 15;
inline void Image::clear_gain_raw() {
  gain_raw_ = 0;
}
inline float Image::gain_raw() const {
  // @@protoc_insertion_point(field_get:Image.gain_raw)
  return gain_raw_;
}
inline void Image::set_gain_raw(float value) {
  
  gain_raw_ = value;
  // @@protoc_insertion_point(field_set:Image.gain_raw)
}

// float f_stop = 16;
inline void Image::clear_f_stop() {
  f_stop_ = 0;
}
inline float Image::f_stop() const {
  // @@protoc_insertion_point(field_get:Image.f_stop)
  return f_stop_;
}
inline void Image::set_f_stop(float value) {
  
  f_stop_ = value;
  // @@protoc_insertion_point(field_set:Image.f_stop)
}

// float nd_filter = 17;
inline void Image::clear_nd_filter() {
  nd_filter_ = 0;
}
inline float Image::nd_filter() const {
  // @@protoc_insertion_point(field_get:Image.nd_filter)
  return nd_filter_;
}
inline void Image::set_nd_filter(float value) {
  
  nd_filter_ = value;
  // @@protoc_insertion_point(field_set:Image.nd_filter)
}

// float polarizer_ang = 18;
inline void Image::clear_polarizer_ang() {
  polarizer_ang_ = 0;
}
inline float Image::polarizer_ang() const {
  // @@protoc_insertion_point(field_get:Image.polarizer_ang)
  return polarizer_ang_;
}
inline void Image::set_polarizer_ang(float value) {
  
  polarizer_ang_ = value;
  // @@protoc_insertion_point(field_set:Image.polarizer_ang)
}

// string source = 19;
inline void Image::clear_source() {
  source_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Image::source() const {
  // @@protoc_insertion_point(field_get:Image.source)
  return source_.GetNoArena();
}
inline void Image::set_source(const std::string& value) {
  
  source_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Image.source)
}
inline void Image::set_source(std::string&& value) {
  
  source_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Image.source)
}
inline void Image::set_source(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  source_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Image.source)
}
inline void Image::set_source(const char* value, size_t size) {
  
  source_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Image.source)
}
inline std::string* Image::mutable_source() {
  
  // @@protoc_insertion_point(field_mutable:Image.source)
  return source_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Image::release_source() {
  // @@protoc_insertion_point(field_release:Image.source)
  
  return source_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_source(std::string* source) {
  if (source != nullptr) {
    
  } else {
    
  }
  source_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), source);
  // @@protoc_insertion_point(field_set_allocated:Image.source)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Image_DataType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Image_DataType>() {
  return ::Image_DataType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_faro_2fproto_2fimage_2eproto