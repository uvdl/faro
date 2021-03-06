/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.VerificationRequest');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.FaceRecord');

/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.VerificationRequest = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.VerificationRequest.repeatedFields_, null);
};
goog.inherits(proto.VerificationRequest, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.VerificationRequest.displayName = 'proto.VerificationRequest';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.VerificationRequest.repeatedFields_ = [3];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.VerificationRequest.prototype.toObject = function(opt_includeInstance) {
  return proto.VerificationRequest.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.VerificationRequest} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.VerificationRequest.toObject = function(includeInstance, msg) {
  var f, obj = {
    gallery: jspb.Message.getFieldWithDefault(msg, 1, ""),
    subjectId: jspb.Message.getFieldWithDefault(msg, 2, ""),
    faceRecordList: jspb.Message.toObjectList(msg.getFaceRecordList(),
    proto.FaceRecord.toObject, includeInstance)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.VerificationRequest}
 */
proto.VerificationRequest.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.VerificationRequest;
  return proto.VerificationRequest.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.VerificationRequest} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.VerificationRequest}
 */
proto.VerificationRequest.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setGallery(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setSubjectId(value);
      break;
    case 3:
      var value = new proto.FaceRecord;
      reader.readMessage(value,proto.FaceRecord.deserializeBinaryFromReader);
      msg.addFaceRecord(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.VerificationRequest.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.VerificationRequest.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.VerificationRequest} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.VerificationRequest.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getGallery();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getSubjectId();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getFaceRecordList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      3,
      f,
      proto.FaceRecord.serializeBinaryToWriter
    );
  }
};


/**
 * optional string gallery = 1;
 * @return {string}
 */
proto.VerificationRequest.prototype.getGallery = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.VerificationRequest.prototype.setGallery = function(value) {
  jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string subject_id = 2;
 * @return {string}
 */
proto.VerificationRequest.prototype.getSubjectId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.VerificationRequest.prototype.setSubjectId = function(value) {
  jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * repeated FaceRecord face_record = 3;
 * @return {!Array<!proto.FaceRecord>}
 */
proto.VerificationRequest.prototype.getFaceRecordList = function() {
  return /** @type{!Array<!proto.FaceRecord>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.FaceRecord, 3));
};


/** @param {!Array<!proto.FaceRecord>} value */
proto.VerificationRequest.prototype.setFaceRecordList = function(value) {
  jspb.Message.setRepeatedWrapperField(this, 3, value);
};


/**
 * @param {!proto.FaceRecord=} opt_value
 * @param {number=} opt_index
 * @return {!proto.FaceRecord}
 */
proto.VerificationRequest.prototype.addFaceRecord = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 3, opt_value, proto.FaceRecord, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.VerificationRequest.prototype.clearFaceRecordList = function() {
  this.setFaceRecordList([]);
};


