// Auto-generated. Do not edit!

// (in-package project.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class racetrackRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.controller = null;
    }
    else {
      if (initObj.hasOwnProperty('controller')) {
        this.controller = initObj.controller
      }
      else {
        this.controller = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type racetrackRequest
    // Serialize message field [controller]
    bufferOffset = _serializer.char(obj.controller, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type racetrackRequest
    let len;
    let data = new racetrackRequest(null);
    // Deserialize message field [controller]
    data.controller = _deserializer.char(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'project/racetrackRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bb0d033473a20b642b4366b25d0cd892';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    char controller
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new racetrackRequest(null);
    if (msg.controller !== undefined) {
      resolved.controller = msg.controller;
    }
    else {
      resolved.controller = 0
    }

    return resolved;
    }
};

class racetrackResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.speed = null;
    }
    else {
      if (initObj.hasOwnProperty('speed')) {
        this.speed = initObj.speed
      }
      else {
        this.speed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type racetrackResponse
    // Serialize message field [speed]
    bufferOffset = _serializer.float32(obj.speed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type racetrackResponse
    let len;
    let data = new racetrackResponse(null);
    // Deserialize message field [speed]
    data.speed = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'project/racetrackResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ca65bba734a79b4a6707341d829f4d5c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 speed
    
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new racetrackResponse(null);
    if (msg.speed !== undefined) {
      resolved.speed = msg.speed;
    }
    else {
      resolved.speed = 0.0
    }

    return resolved;
    }
};

module.exports = {
  Request: racetrackRequest,
  Response: racetrackResponse,
  md5sum() { return 'b1133b6668b2500e671959e11f3eee47'; },
  datatype() { return 'project/racetrack'; }
};
