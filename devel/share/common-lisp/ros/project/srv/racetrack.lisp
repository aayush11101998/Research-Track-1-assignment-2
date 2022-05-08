; Auto-generated. Do not edit!


(cl:in-package project-srv)


;//! \htmlinclude racetrack-request.msg.html

(cl:defclass <racetrack-request> (roslisp-msg-protocol:ros-message)
  ((controller
    :reader controller
    :initarg :controller
    :type cl:integer
    :initform 0))
)

(cl:defclass racetrack-request (<racetrack-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <racetrack-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'racetrack-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name project-srv:<racetrack-request> is deprecated: use project-srv:racetrack-request instead.")))

(cl:ensure-generic-function 'controller-val :lambda-list '(m))
(cl:defmethod controller-val ((m <racetrack-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader project-srv:controller-val is deprecated.  Use project-srv:controller instead.")
  (controller m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <racetrack-request>) ostream)
  "Serializes a message object of type '<racetrack-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'controller)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <racetrack-request>) istream)
  "Deserializes a message object of type '<racetrack-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'controller)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<racetrack-request>)))
  "Returns string type for a service object of type '<racetrack-request>"
  "project/racetrackRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'racetrack-request)))
  "Returns string type for a service object of type 'racetrack-request"
  "project/racetrackRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<racetrack-request>)))
  "Returns md5sum for a message object of type '<racetrack-request>"
  "b1133b6668b2500e671959e11f3eee47")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'racetrack-request)))
  "Returns md5sum for a message object of type 'racetrack-request"
  "b1133b6668b2500e671959e11f3eee47")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<racetrack-request>)))
  "Returns full string definition for message of type '<racetrack-request>"
  (cl:format cl:nil "~%char controller~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'racetrack-request)))
  "Returns full string definition for message of type 'racetrack-request"
  (cl:format cl:nil "~%char controller~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <racetrack-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <racetrack-request>))
  "Converts a ROS message object to a list"
  (cl:list 'racetrack-request
    (cl:cons ':controller (controller msg))
))
;//! \htmlinclude racetrack-response.msg.html

(cl:defclass <racetrack-response> (roslisp-msg-protocol:ros-message)
  ((speed
    :reader speed
    :initarg :speed
    :type cl:float
    :initform 0.0))
)

(cl:defclass racetrack-response (<racetrack-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <racetrack-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'racetrack-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name project-srv:<racetrack-response> is deprecated: use project-srv:racetrack-response instead.")))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <racetrack-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader project-srv:speed-val is deprecated.  Use project-srv:speed instead.")
  (speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <racetrack-response>) ostream)
  "Serializes a message object of type '<racetrack-response>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <racetrack-response>) istream)
  "Deserializes a message object of type '<racetrack-response>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'speed) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<racetrack-response>)))
  "Returns string type for a service object of type '<racetrack-response>"
  "project/racetrackResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'racetrack-response)))
  "Returns string type for a service object of type 'racetrack-response"
  "project/racetrackResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<racetrack-response>)))
  "Returns md5sum for a message object of type '<racetrack-response>"
  "b1133b6668b2500e671959e11f3eee47")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'racetrack-response)))
  "Returns md5sum for a message object of type 'racetrack-response"
  "b1133b6668b2500e671959e11f3eee47")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<racetrack-response>)))
  "Returns full string definition for message of type '<racetrack-response>"
  (cl:format cl:nil "float32 speed~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'racetrack-response)))
  "Returns full string definition for message of type 'racetrack-response"
  (cl:format cl:nil "float32 speed~%~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <racetrack-response>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <racetrack-response>))
  "Converts a ROS message object to a list"
  (cl:list 'racetrack-response
    (cl:cons ':speed (speed msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'racetrack)))
  'racetrack-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'racetrack)))
  'racetrack-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'racetrack)))
  "Returns string type for a service object of type '<racetrack>"
  "project/racetrack")