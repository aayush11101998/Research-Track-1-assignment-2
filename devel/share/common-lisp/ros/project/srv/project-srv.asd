
(cl:in-package :asdf)

(defsystem "project-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "racetrack" :depends-on ("_package_racetrack"))
    (:file "_package_racetrack" :depends-on ("_package"))
  ))