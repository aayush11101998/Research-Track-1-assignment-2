;; Auto-generated. Do not edit!


(when (boundp 'project::racetrack)
  (if (not (find-package "PROJECT"))
    (make-package "PROJECT"))
  (shadow 'racetrack (find-package "PROJECT")))
(unless (find-package "PROJECT::RACETRACK")
  (make-package "PROJECT::RACETRACK"))
(unless (find-package "PROJECT::RACETRACKREQUEST")
  (make-package "PROJECT::RACETRACKREQUEST"))
(unless (find-package "PROJECT::RACETRACKRESPONSE")
  (make-package "PROJECT::RACETRACKRESPONSE"))

(in-package "ROS")





(defclass project::racetrackRequest
  :super ros::object
  :slots (_controller ))

(defmethod project::racetrackRequest
  (:init
   (&key
    ((:controller __controller) 0)
    )
   (send-super :init)
   (setq _controller (round __controller))
   self)
  (:controller
   (&optional __controller)
   (if __controller (setq _controller __controller)) _controller)
  (:serialization-length
   ()
   (+
    ;; char _controller
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; char _controller
       (write-byte _controller s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; char _controller
     (setq _controller (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass project::racetrackResponse
  :super ros::object
  :slots (_speed ))

(defmethod project::racetrackResponse
  (:init
   (&key
    ((:speed __speed) 0.0)
    )
   (send-super :init)
   (setq _speed (float __speed))
   self)
  (:speed
   (&optional __speed)
   (if __speed (setq _speed __speed)) _speed)
  (:serialization-length
   ()
   (+
    ;; float32 _speed
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _speed
       (sys::poke _speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _speed
     (setq _speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass project::racetrack
  :super ros::object
  :slots ())

(setf (get project::racetrack :md5sum-) "b1133b6668b2500e671959e11f3eee47")
(setf (get project::racetrack :datatype-) "project/racetrack")
(setf (get project::racetrack :request) project::racetrackRequest)
(setf (get project::racetrack :response) project::racetrackResponse)

(defmethod project::racetrackRequest
  (:response () (instance project::racetrackResponse :init)))

(setf (get project::racetrackRequest :md5sum-) "b1133b6668b2500e671959e11f3eee47")
(setf (get project::racetrackRequest :datatype-) "project/racetrackRequest")
(setf (get project::racetrackRequest :definition-)
      "
char controller
---
float32 speed



")

(setf (get project::racetrackResponse :md5sum-) "b1133b6668b2500e671959e11f3eee47")
(setf (get project::racetrackResponse :datatype-) "project/racetrackResponse")
(setf (get project::racetrackResponse :definition-)
      "
char controller
---
float32 speed



")



(provide :project/racetrack "b1133b6668b2500e671959e11f3eee47")


