// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: faro/proto/face_service.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class AccessRecord;
@class Attribute;
@class DetectRequest;
@class Detection;
@class DetectionOptions;
@class EnrollOptions;
@class EnrollRequest;
@class EnrollmentInfo;
@class ErrorMessage;
@class ExtractOptions;
@class ExtractRequest;
@class FaceRecord;
@class FaceRecordList;
@class FaceTemplate;
@class GalleryInfo;
@class Image;
@class Landmark;
@class MatchInfo;
@class Matrix;
@class Point2D;
@class Rect_Class;
@class SearchRequest;
@class TemplateList;
@class Vector;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum ServiceStatus

typedef GPB_ENUM(ServiceStatus) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  ServiceStatus_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  ServiceStatus_Unknown = 0,
  ServiceStatus_Ready = 1,
  ServiceStatus_Error = 2,
  ServiceStatus_Busy = 3,
};

GPBEnumDescriptor *ServiceStatus_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ServiceStatus_IsValidValue(int32_t value);

#pragma mark - Enum DataType

typedef GPB_ENUM(DataType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  DataType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  DataType_Empty = 0,
  DataType_String = 1,

  /** stored as string */
  DataType_Int = 2,

  /** stored as string */
  DataType_Float = 3,

  /** raw data */
  DataType_Bytes = 4,

  /** floating point values seperated by commas */
  DataType_Vector = 5,
  DataType_Pickle = 6,
  DataType_Xml = 7,
  DataType_Json = 8,
};

GPBEnumDescriptor *DataType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL DataType_IsValidValue(int32_t value);

#pragma mark - Enum ScoreType

typedef GPB_ENUM(ScoreType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  ScoreType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  ScoreType_Server = 0,
  ScoreType_L1 = 1,
  ScoreType_L2 = 2,
  ScoreType_NegDot = 3,
};

GPBEnumDescriptor *ScoreType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL ScoreType_IsValidValue(int32_t value);

#pragma mark - FaceServiceRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface FaceServiceRoot : GPBRootObject
@end

#pragma mark - Attribute

typedef GPB_ENUM(Attribute_FieldNumber) {
  Attribute_FieldNumber_Key = 1,
  Attribute_FieldNumber_Description_p = 2,
  Attribute_FieldNumber_Buffer = 3,
  Attribute_FieldNumber_Fvalue = 4,
  Attribute_FieldNumber_Ivalue = 5,
  Attribute_FieldNumber_Text = 6,
  Attribute_FieldNumber_Pickle = 7,
  Attribute_FieldNumber_Json = 8,
  Attribute_FieldNumber_Matrix = 9,
  Attribute_FieldNumber_Vector = 10,
  Attribute_FieldNumber_Image = 11,
  Attribute_FieldNumber_Point = 12,
  Attribute_FieldNumber_Rect = 13,
  Attribute_FieldNumber_Xml = 14,
};

/**
 * This is intended to support flexible encoding schemes in a dictionary like structure:
 * Example encodings: MALE:0.975, AGE:35.2, RACE:WHITE
 **/
@interface Attribute : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *key;

/** A text description on the content or type hint */
@property(nonatomic, readwrite, copy, null_resettable) NSString *description_p;

/** Typically popualate only one of these values */
@property(nonatomic, readwrite, copy, null_resettable) NSData *buffer;

@property(nonatomic, readwrite) float fvalue;

@property(nonatomic, readwrite) int32_t ivalue;

@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

@property(nonatomic, readwrite, copy, null_resettable) NSData *pickle;

@property(nonatomic, readwrite, copy, null_resettable) NSData *json;

@property(nonatomic, readwrite, strong, null_resettable) Matrix *matrix;
/** Test to see if @c matrix has been set. */
@property(nonatomic, readwrite) BOOL hasMatrix;

@property(nonatomic, readwrite, strong, null_resettable) Vector *vector;
/** Test to see if @c vector has been set. */
@property(nonatomic, readwrite) BOOL hasVector;

@property(nonatomic, readwrite, strong, null_resettable) Image *image;
/** Test to see if @c image has been set. */
@property(nonatomic, readwrite) BOOL hasImage;

@property(nonatomic, readwrite, strong, null_resettable) Point2D *point;
/** Test to see if @c point has been set. */
@property(nonatomic, readwrite) BOOL hasPoint;

@property(nonatomic, readwrite, strong, null_resettable) Rect_Class *rect;
/** Test to see if @c rect has been set. */
@property(nonatomic, readwrite) BOOL hasRect;

@property(nonatomic, readwrite, copy, null_resettable) NSData *xml;

@end

#pragma mark - ErrorMessage

typedef GPB_ENUM(ErrorMessage_FieldNumber) {
  ErrorMessage_FieldNumber_ErrorCode = 3,
  ErrorMessage_FieldNumber_ErrorMessage = 4,
};

@interface ErrorMessage : GPBMessage

@property(nonatomic, readwrite) int32_t errorCode;

@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMessage;

@end

#pragma mark - Detection

typedef GPB_ENUM(Detection_FieldNumber) {
  Detection_FieldNumber_Score = 1,
  Detection_FieldNumber_Location = 2,
  Detection_FieldNumber_DetectionId = 3,
  Detection_FieldNumber_DetectionClass = 4,
  Detection_FieldNumber_AttributesArray = 5,
};

@interface Detection : GPBMessage

@property(nonatomic, readwrite) float score;

@property(nonatomic, readwrite, strong, null_resettable) Rect_Class *location;
/** Test to see if @c location has been set. */
@property(nonatomic, readwrite) BOOL hasLocation;

@property(nonatomic, readwrite) int32_t detectionId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *detectionClass;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Attribute*> *attributesArray;
/** The number of items in @c attributesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger attributesArray_Count;

@end

#pragma mark - Landmark

typedef GPB_ENUM(Landmark_FieldNumber) {
  Landmark_FieldNumber_LandmarkId = 1,
  Landmark_FieldNumber_Location = 2,
};

@interface Landmark : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *landmarkId;

@property(nonatomic, readwrite, strong, null_resettable) Point2D *location;
/** Test to see if @c location has been set. */
@property(nonatomic, readwrite) BOOL hasLocation;

@end

#pragma mark - DetectionOptions

typedef GPB_ENUM(DetectionOptions_FieldNumber) {
  DetectionOptions_FieldNumber_AlgorithmId = 1,
  DetectionOptions_FieldNumber_Best = 2,
  DetectionOptions_FieldNumber_Threshold = 3,
  DetectionOptions_FieldNumber_ScaleLevels = 4,
  DetectionOptions_FieldNumber_ScanLevels = 5,
  DetectionOptions_FieldNumber_ScanOverlap = 6,
  DetectionOptions_FieldNumber_MinSize = 7,
  DetectionOptions_FieldNumber_AttributesArray = 8,
};

@interface DetectionOptions : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *algorithmId;

@property(nonatomic, readwrite) BOOL best;

@property(nonatomic, readwrite) float threshold;

/** number of times to reduce the image by half (pyrDown) before detection */
@property(nonatomic, readwrite) int32_t scaleLevels;

/** number of times to reduce the image by half and then scan using the detector */
@property(nonatomic, readwrite) int32_t scanLevels;

/** amount of overlap to use at each scan level. */
@property(nonatomic, readwrite) float scanOverlap;

@property(nonatomic, readwrite) int32_t minSize;

/** Used for passing algorithm specific options */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Attribute*> *attributesArray;
/** The number of items in @c attributesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger attributesArray_Count;

@end

#pragma mark - ExtractOptions

typedef GPB_ENUM(ExtractOptions_FieldNumber) {
  ExtractOptions_FieldNumber_AlgorithmId = 1,
  ExtractOptions_FieldNumber_AttributesArray = 8,
};

@interface ExtractOptions : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *algorithmId;

/** Used for passing algorithm specific options */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Attribute*> *attributesArray;
/** The number of items in @c attributesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger attributesArray_Count;

@end

#pragma mark - EnrollOptions

typedef GPB_ENUM(EnrollOptions_FieldNumber) {
  EnrollOptions_FieldNumber_AttributesArray = 8,
};

@interface EnrollOptions : GPBMessage

/** Used for passing algorithm specific options */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Attribute*> *attributesArray;
/** The number of items in @c attributesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger attributesArray_Count;

@end

#pragma mark - DetectionList

typedef GPB_ENUM(DetectionList_FieldNumber) {
  DetectionList_FieldNumber_DetectionsArray = 1,
  DetectionList_FieldNumber_DetectionTime = 2,
  DetectionList_FieldNumber_ImageWidth = 3,
  DetectionList_FieldNumber_ImageHeight = 4,
  DetectionList_FieldNumber_DetectionCount = 5,
  DetectionList_FieldNumber_Options = 6,
};

@interface DetectionList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Detection*> *detectionsArray;
/** The number of items in @c detectionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger detectionsArray_Count;

@property(nonatomic, readwrite) float detectionTime;

@property(nonatomic, readwrite) int32_t imageWidth;

@property(nonatomic, readwrite) int32_t imageHeight;

@property(nonatomic, readwrite) int32_t detectionCount;

@property(nonatomic, readwrite, strong, null_resettable) DetectionOptions *options;
/** Test to see if @c options has been set. */
@property(nonatomic, readwrite) BOOL hasOptions;

@end

#pragma mark - MatchList

typedef GPB_ENUM(MatchList_FieldNumber) {
  MatchList_FieldNumber_MatchListArray = 1,
};

@interface MatchList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<MatchInfo*> *matchListArray;
/** The number of items in @c matchListArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger matchListArray_Count;

@end

#pragma mark - MatchInfo

typedef GPB_ENUM(MatchInfo_FieldNumber) {
  MatchInfo_FieldNumber_Score = 1,
  MatchInfo_FieldNumber_ImageId = 2,
  MatchInfo_FieldNumber_DetectionId = 3,
  MatchInfo_FieldNumber_SubjectId = 4,
  MatchInfo_FieldNumber_SubjectName = 5,
  MatchInfo_FieldNumber_Face = 6,
};

@interface MatchInfo : GPBMessage

@property(nonatomic, readwrite) float score;

@property(nonatomic, readwrite, copy, null_resettable) NSString *imageId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *detectionId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subjectId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subjectName;

@property(nonatomic, readwrite, strong, null_resettable) Image *face;
/** Test to see if @c face has been set. */
@property(nonatomic, readwrite) BOOL hasFace;

@end

#pragma mark - TemplateInput

typedef GPB_ENUM(TemplateInput_FieldNumber) {
  TemplateInput_FieldNumber_Im = 1,
  TemplateInput_FieldNumber_DetectionsArray = 2,
};

@interface TemplateInput : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Image *im;
/** Test to see if @c im has been set. */
@property(nonatomic, readwrite) BOOL hasIm;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Rect_Class*> *detectionsArray;
/** The number of items in @c detectionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger detectionsArray_Count;

@end

#pragma mark - FaceTemplate

typedef GPB_ENUM(FaceTemplate_FieldNumber) {
  FaceTemplate_FieldNumber_Data_p = 1,
  FaceTemplate_FieldNumber_Buffer = 2,
};

@interface FaceTemplate : GPBMessage

/** Typically just populate one of these fields. */
@property(nonatomic, readwrite, strong, null_resettable) Vector *data_p;
/** Test to see if @c data_p has been set. */
@property(nonatomic, readwrite) BOOL hasData_p;

/** General storage.  Can be used for raw data templates from commercial systems. */
@property(nonatomic, readwrite, copy, null_resettable) NSData *buffer;

@end

#pragma mark - TemplateList

typedef GPB_ENUM(TemplateList_FieldNumber) {
  TemplateList_FieldNumber_TemplatesArray = 1,
};

@interface TemplateList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<FaceTemplate*> *templatesArray;
/** The number of items in @c templatesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger templatesArray_Count;

@end

#pragma mark - AccessRecord

typedef GPB_ENUM(AccessRecord_FieldNumber) {
  AccessRecord_FieldNumber_Datetime = 1,
  AccessRecord_FieldNumber_Notes = 2,
  AccessRecord_FieldNumber_Credential = 3,
  AccessRecord_FieldNumber_MetadataArray = 4,
};

@interface AccessRecord : GPBMessage

@property(nonatomic, readwrite) float datetime;

@property(nonatomic, readwrite, copy, null_resettable) NSString *notes;

@property(nonatomic, readwrite, copy, null_resettable) NSString *credential;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Attribute*> *metadataArray;
/** The number of items in @c metadataArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger metadataArray_Count;

@end

#pragma mark - FaceRecord

typedef GPB_ENUM(FaceRecord_FieldNumber) {
  FaceRecord_FieldNumber_SubjectId = 1,
  FaceRecord_FieldNumber_Detection = 2,
  FaceRecord_FieldNumber_Template_p = 3,
  FaceRecord_FieldNumber_Source = 4,
  FaceRecord_FieldNumber_Name = 5,
  FaceRecord_FieldNumber_Notes = 6,
  FaceRecord_FieldNumber_View = 7,
  FaceRecord_FieldNumber_LandmarksArray = 8,
  FaceRecord_FieldNumber_Aligned = 9,
  FaceRecord_FieldNumber_AttributesArray = 10,
  FaceRecord_FieldNumber_InternalDataArray = 11,
  FaceRecord_FieldNumber_Score = 12,
  FaceRecord_FieldNumber_SearchResults = 13,
  FaceRecord_FieldNumber_Frame = 14,
  FaceRecord_FieldNumber_GalleryKey = 15,
  FaceRecord_FieldNumber_CollectionDate = 16,
  FaceRecord_FieldNumber_EnrollmentDate = 17,
  FaceRecord_FieldNumber_MetadataArray = 18,
  FaceRecord_FieldNumber_AccessRecordsArray = 19,
};

@interface FaceRecord : GPBMessage

/** Note: The face id is a combination of subject_id:source:detection.detection_id is the face id and this should be unique. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *subjectId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite, copy, null_resettable) NSString *source;

@property(nonatomic, readwrite) int64_t frame;

@property(nonatomic, readwrite, copy, null_resettable) NSString *notes;

@property(nonatomic, readwrite, copy, null_resettable) NSString *galleryKey;

@property(nonatomic, readwrite) float collectionDate;

@property(nonatomic, readwrite) float enrollmentDate;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Attribute*> *metadataArray;
/** The number of items in @c metadataArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger metadataArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<AccessRecord*> *accessRecordsArray;
/** The number of items in @c accessRecordsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger accessRecordsArray_Count;

/** A cropped and scaled image to be viewed by humans, similar to a passport photo. */
@property(nonatomic, readwrite, strong, null_resettable) Image *view;
/** Test to see if @c view has been set. */
@property(nonatomic, readwrite) BOOL hasView;

/** An aligned image used for template extraction. */
@property(nonatomic, readwrite, strong, null_resettable) Image *aligned;
/** Test to see if @c aligned has been set. */
@property(nonatomic, readwrite) BOOL hasAligned;

/** The detection rectangle etc. */
@property(nonatomic, readwrite, strong, null_resettable) Detection *detection;
/** Test to see if @c detection has been set. */
@property(nonatomic, readwrite) BOOL hasDetection;

/** eyes, nose, mouth, etc */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Landmark*> *landmarksArray;
/** The number of items in @c landmarksArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger landmarksArray_Count;

/** smiling, glasses, gender, race, ... */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Attribute*> *attributesArray;
/** The number of items in @c attributesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger attributesArray_Count;

/** a dictionary used to store algorithm specific data about the face. */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Attribute*> *internalDataArray;
/** The number of items in @c internalDataArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger internalDataArray_Count;

/** A small encoding used for fast face matching. */
@property(nonatomic, readwrite, strong, null_resettable) FaceTemplate *template_p;
/** Test to see if @c template_p has been set. */
@property(nonatomic, readwrite) BOOL hasTemplate_p;

/** A score indicating the similarity in a search results list */
@property(nonatomic, readwrite) float score;

/** A list of matching faces */
@property(nonatomic, readwrite, strong, null_resettable) FaceRecordList *searchResults;
/** Test to see if @c searchResults has been set. */
@property(nonatomic, readwrite) BOOL hasSearchResults;

@end

#pragma mark - FaceRecordList

typedef GPB_ENUM(FaceRecordList_FieldNumber) {
  FaceRecordList_FieldNumber_FaceRecordsArray = 1,
};

@interface FaceRecordList : GPBMessage

/** repeated float scores = 2; // Scores returned by gallery searches */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<FaceRecord*> *faceRecordsArray;
/** The number of items in @c faceRecordsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger faceRecordsArray_Count;

@end

#pragma mark - VerificationRequest

typedef GPB_ENUM(VerificationRequest_FieldNumber) {
  VerificationRequest_FieldNumber_Gallery = 1,
  VerificationRequest_FieldNumber_SubjectId = 2,
  VerificationRequest_FieldNumber_FaceRecordArray = 3,
};

@interface VerificationRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *gallery;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subjectId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<FaceRecord*> *faceRecordArray;
/** The number of items in @c faceRecordArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger faceRecordArray_Count;

@end

#pragma mark - VerificationResponse

typedef GPB_ENUM(VerificationResponse_FieldNumber) {
  VerificationResponse_FieldNumber_Success = 1,
  VerificationResponse_FieldNumber_Confidence = 2,
  VerificationResponse_FieldNumber_MatchesArray = 3,
  VerificationResponse_FieldNumber_ErrorCode = 4,
  VerificationResponse_FieldNumber_ErrorMessage = 5,
};

@interface VerificationResponse : GPBMessage

@property(nonatomic, readwrite) int32_t errorCode;

@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMessage;

@property(nonatomic, readwrite) BOOL success;

@property(nonatomic, readwrite) float confidence;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<FaceRecord*> *matchesArray;
/** The number of items in @c matchesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger matchesArray_Count;

@end

#pragma mark - SearchRequest

typedef GPB_ENUM(SearchRequest_FieldNumber) {
  SearchRequest_FieldNumber_SearchGallery = 1,
  SearchRequest_FieldNumber_Probes = 3,
  SearchRequest_FieldNumber_MaxResults = 4,
  SearchRequest_FieldNumber_Threshold = 5,
};

@interface SearchRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *searchGallery;

@property(nonatomic, readwrite, strong, null_resettable) FaceRecordList *probes;
/** Test to see if @c probes has been set. */
@property(nonatomic, readwrite) BOOL hasProbes;

@property(nonatomic, readwrite) int32_t maxResults;

@property(nonatomic, readwrite) float threshold;

@end

#pragma mark - SearchResponse

typedef GPB_ENUM(SearchResponse_FieldNumber) {
  SearchResponse_FieldNumber_Message = 1,
  SearchResponse_FieldNumber_Probes = 2,
};

@interface SearchResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ErrorMessage *message;
/** Test to see if @c message has been set. */
@property(nonatomic, readwrite) BOOL hasMessage;

@property(nonatomic, readwrite, strong, null_resettable) FaceRecordList *probes;
/** Test to see if @c probes has been set. */
@property(nonatomic, readwrite) BOOL hasProbes;

@end

#pragma mark - EnrollRequest

typedef GPB_ENUM(EnrollRequest_FieldNumber) {
  EnrollRequest_FieldNumber_EnrollGallery = 1,
  EnrollRequest_FieldNumber_Records = 2,
  EnrollRequest_FieldNumber_EnrollOptions = 10,
};

@interface EnrollRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *enrollGallery;

@property(nonatomic, readwrite, strong, null_resettable) FaceRecordList *records;
/** Test to see if @c records has been set. */
@property(nonatomic, readwrite) BOOL hasRecords;

@property(nonatomic, readwrite, strong, null_resettable) EnrollOptions *enrollOptions;
/** Test to see if @c enrollOptions has been set. */
@property(nonatomic, readwrite) BOOL hasEnrollOptions;

@end

#pragma mark - DetectRequest

typedef GPB_ENUM(DetectRequest_FieldNumber) {
  DetectRequest_FieldNumber_Image = 1,
  DetectRequest_FieldNumber_Source = 2,
  DetectRequest_FieldNumber_Frame = 3,
  DetectRequest_FieldNumber_SubjectId = 4,
  DetectRequest_FieldNumber_SubjectName = 5,
  DetectRequest_FieldNumber_DetectOptions = 8,
};

@interface DetectRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Image *image;
/** Test to see if @c image has been set. */
@property(nonatomic, readwrite) BOOL hasImage;

@property(nonatomic, readwrite, copy, null_resettable) NSString *source;

@property(nonatomic, readwrite) int64_t frame;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subjectId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subjectName;

@property(nonatomic, readwrite, strong, null_resettable) DetectionOptions *detectOptions;
/** Test to see if @c detectOptions has been set. */
@property(nonatomic, readwrite) BOOL hasDetectOptions;

@end

#pragma mark - ExtractRequest

typedef GPB_ENUM(ExtractRequest_FieldNumber) {
  ExtractRequest_FieldNumber_Image = 1,
  ExtractRequest_FieldNumber_Records = 4,
  ExtractRequest_FieldNumber_ExtractOptions = 9,
};

@interface ExtractRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) Image *image;
/** Test to see if @c image has been set. */
@property(nonatomic, readwrite) BOOL hasImage;

@property(nonatomic, readwrite, strong, null_resettable) FaceRecordList *records;
/** Test to see if @c records has been set. */
@property(nonatomic, readwrite) BOOL hasRecords;

@property(nonatomic, readwrite, strong, null_resettable) ExtractOptions *extractOptions;
/** Test to see if @c extractOptions has been set. */
@property(nonatomic, readwrite) BOOL hasExtractOptions;

@end

#pragma mark - ScoreRequest

typedef GPB_ENUM(ScoreRequest_FieldNumber) {
  ScoreRequest_FieldNumber_FaceProbes = 1,
  ScoreRequest_FieldNumber_FaceGallery = 2,
  ScoreRequest_FieldNumber_TemplateProbes = 3,
  ScoreRequest_FieldNumber_TemplateGallery = 4,
};

/**
 * suggested : typically use TemplateLists because they are smaller. Then
 *             FaceRecordLists should be left empty.
 *
 * FaceRecordsList can be used as a convieniance but may be too large,
 * slow, or use to much band with.
 **/
@interface ScoreRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) FaceRecordList *faceProbes;
/** Test to see if @c faceProbes has been set. */
@property(nonatomic, readwrite) BOOL hasFaceProbes;

@property(nonatomic, readwrite, strong, null_resettable) FaceRecordList *faceGallery;
/** Test to see if @c faceGallery has been set. */
@property(nonatomic, readwrite) BOOL hasFaceGallery;

@property(nonatomic, readwrite, strong, null_resettable) TemplateList *templateProbes;
/** Test to see if @c templateProbes has been set. */
@property(nonatomic, readwrite) BOOL hasTemplateProbes;

@property(nonatomic, readwrite, strong, null_resettable) TemplateList *templateGallery;
/** Test to see if @c templateGallery has been set. */
@property(nonatomic, readwrite) BOOL hasTemplateGallery;

@end

#pragma mark - DetectExtractRequest

typedef GPB_ENUM(DetectExtractRequest_FieldNumber) {
  DetectExtractRequest_FieldNumber_DetectRequest = 1,
  DetectExtractRequest_FieldNumber_ExtractRequest = 2,
};

/**
 * ***************************************************************************
 * Combined operations
 *
 * These allow calling the server once and executing multiple operations in
 * sequence.  This should save time and network bandwidth for common
 * operations.  When calling combined results some arguments from the
 * later calls will be ignored and if present then replaced by the results
 * of the earlier calls.  It is recommended that those arguments are left
 * empty to save bandwidth.
 * *************************************************************************
 **/
@interface DetectExtractRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) DetectRequest *detectRequest;
/** Test to see if @c detectRequest has been set. */
@property(nonatomic, readwrite) BOOL hasDetectRequest;

/** The image and face list are replaced by the result of the detect results. */
@property(nonatomic, readwrite, strong, null_resettable) ExtractRequest *extractRequest;
/** Test to see if @c extractRequest has been set. */
@property(nonatomic, readwrite) BOOL hasExtractRequest;

@end

#pragma mark - DetectExtractEnrollRequest

typedef GPB_ENUM(DetectExtractEnrollRequest_FieldNumber) {
  DetectExtractEnrollRequest_FieldNumber_DetectRequest = 1,
  DetectExtractEnrollRequest_FieldNumber_ExtractRequest = 2,
  DetectExtractEnrollRequest_FieldNumber_EnrollRequest = 3,
};

@interface DetectExtractEnrollRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) DetectRequest *detectRequest;
/** Test to see if @c detectRequest has been set. */
@property(nonatomic, readwrite) BOOL hasDetectRequest;

/** The image and face list are replaced by the result of the detect results. */
@property(nonatomic, readwrite, strong, null_resettable) ExtractRequest *extractRequest;
/** Test to see if @c extractRequest has been set. */
@property(nonatomic, readwrite) BOOL hasExtractRequest;

/** The face list is replaced by the result of the extract results. */
@property(nonatomic, readwrite, strong, null_resettable) EnrollRequest *enrollRequest;
/** Test to see if @c enrollRequest has been set. */
@property(nonatomic, readwrite) BOOL hasEnrollRequest;

@end

#pragma mark - DetectExtractSearchRequest

typedef GPB_ENUM(DetectExtractSearchRequest_FieldNumber) {
  DetectExtractSearchRequest_FieldNumber_DetectRequest = 1,
  DetectExtractSearchRequest_FieldNumber_ExtractRequest = 2,
  DetectExtractSearchRequest_FieldNumber_SearchRequest = 3,
};

@interface DetectExtractSearchRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) DetectRequest *detectRequest;
/** Test to see if @c detectRequest has been set. */
@property(nonatomic, readwrite) BOOL hasDetectRequest;

/** The image and face list are replaced by the result of the detect results. */
@property(nonatomic, readwrite, strong, null_resettable) ExtractRequest *extractRequest;
/** Test to see if @c extractRequest has been set. */
@property(nonatomic, readwrite) BOOL hasExtractRequest;

/** The face list is replaced by the result of the extract results. */
@property(nonatomic, readwrite, strong, null_resettable) SearchRequest *searchRequest;
/** Test to see if @c searchRequest has been set. */
@property(nonatomic, readwrite) BOOL hasSearchRequest;

@end

#pragma mark - FaceStatusRequest

@interface FaceStatusRequest : GPBMessage

@end

#pragma mark - FaceServiceInfo

typedef GPB_ENUM(FaceServiceInfo_FieldNumber) {
  FaceServiceInfo_FieldNumber_Status = 1,
  FaceServiceInfo_FieldNumber_WorkerCount = 2,
  FaceServiceInfo_FieldNumber_DetectionSupport = 3,
  FaceServiceInfo_FieldNumber_ExtractSupport = 4,
  FaceServiceInfo_FieldNumber_ScoreSupport = 5,
  FaceServiceInfo_FieldNumber_AttributeSupport = 6,
  FaceServiceInfo_FieldNumber_ScoreType = 7,
  FaceServiceInfo_FieldNumber_DetectionThreshold = 8,
  FaceServiceInfo_FieldNumber_MatchThreshold = 9,
  FaceServiceInfo_FieldNumber_Algorithm = 10,
  FaceServiceInfo_FieldNumber_Notes = 11,
};

@interface FaceServiceInfo : GPBMessage

@property(nonatomic, readwrite) ServiceStatus status;

@property(nonatomic, readwrite) int32_t workerCount;

@property(nonatomic, readwrite) BOOL detectionSupport;

@property(nonatomic, readwrite) BOOL extractSupport;

@property(nonatomic, readwrite) BOOL scoreSupport;

@property(nonatomic, readwrite) BOOL attributeSupport;

@property(nonatomic, readwrite) ScoreType scoreType;

@property(nonatomic, readwrite) float detectionThreshold;

@property(nonatomic, readwrite) float matchThreshold;

@property(nonatomic, readwrite, copy, null_resettable) NSString *algorithm;

@property(nonatomic, readwrite, copy, null_resettable) NSString *notes;

@end

/**
 * Fetches the raw value of a @c FaceServiceInfo's @c status property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t FaceServiceInfo_Status_RawValue(FaceServiceInfo *message);
/**
 * Sets the raw value of an @c FaceServiceInfo's @c status property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetFaceServiceInfo_Status_RawValue(FaceServiceInfo *message, int32_t value);

/**
 * Fetches the raw value of a @c FaceServiceInfo's @c scoreType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t FaceServiceInfo_ScoreType_RawValue(FaceServiceInfo *message);
/**
 * Sets the raw value of an @c FaceServiceInfo's @c scoreType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetFaceServiceInfo_ScoreType_RawValue(FaceServiceInfo *message, int32_t value);

#pragma mark - GalleryListRequest

/**
 * ******** Gallery Management *******
 **/
@interface GalleryListRequest : GPBMessage

@end

#pragma mark - GalleryDeleteRequest

typedef GPB_ENUM(GalleryDeleteRequest_FieldNumber) {
  GalleryDeleteRequest_FieldNumber_GalleryName = 1,
};

@interface GalleryDeleteRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *galleryName;

@end

#pragma mark - EnrollmentListRequest

typedef GPB_ENUM(EnrollmentListRequest_FieldNumber) {
  EnrollmentListRequest_FieldNumber_GalleryName = 1,
};

/**
 * ******** Enrollment Management *******
 **/
@interface EnrollmentListRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *galleryName;

@end

#pragma mark - EnrollmentInfo

typedef GPB_ENUM(EnrollmentInfo_FieldNumber) {
  EnrollmentInfo_FieldNumber_SubjectId = 1,
  EnrollmentInfo_FieldNumber_Name = 2,
  EnrollmentInfo_FieldNumber_FaceCount = 3,
};

@interface EnrollmentInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *subjectId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite) int32_t faceCount;

@end

#pragma mark - EnrollmentListResponse

typedef GPB_ENUM(EnrollmentListResponse_FieldNumber) {
  EnrollmentListResponse_FieldNumber_GalleryName = 1,
  EnrollmentListResponse_FieldNumber_EnrollmentsArray = 2,
};

@interface EnrollmentListResponse : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *galleryName;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<EnrollmentInfo*> *enrollmentsArray;
/** The number of items in @c enrollmentsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger enrollmentsArray_Count;

@end

#pragma mark - EnrollmentDeleteRequest

typedef GPB_ENUM(EnrollmentDeleteRequest_FieldNumber) {
  EnrollmentDeleteRequest_FieldNumber_GalleryName = 1,
  EnrollmentDeleteRequest_FieldNumber_SubjectId = 2,
};

@interface EnrollmentDeleteRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *galleryName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *subjectId;

@end

#pragma mark - GalleryInfo

typedef GPB_ENUM(GalleryInfo_FieldNumber) {
  GalleryInfo_FieldNumber_GalleryName = 1,
  GalleryInfo_FieldNumber_FaceCount = 2,
};

@interface GalleryInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *galleryName;

@property(nonatomic, readwrite) int64_t faceCount;

@end

#pragma mark - GalleryList

typedef GPB_ENUM(GalleryList_FieldNumber) {
  GalleryList_FieldNumber_GalleriesArray = 1,
};

@interface GalleryList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GalleryInfo*> *galleriesArray;
/** The number of items in @c galleriesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger galleriesArray_Count;

@end

#pragma mark - Empty

@interface Empty : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
