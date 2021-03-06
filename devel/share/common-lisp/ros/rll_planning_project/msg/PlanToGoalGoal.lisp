; Auto-generated. Do not edit!


(cl:in-package rll_planning_project-msg)


;//! \htmlinclude PlanToGoalGoal.msg.html

(cl:defclass <PlanToGoalGoal> (roslisp-msg-protocol:ros-message)
  ((start
    :reader start
    :initarg :start
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D))
   (goal
    :reader goal
    :initarg :goal
    :type geometry_msgs-msg:Pose2D
    :initform (cl:make-instance 'geometry_msgs-msg:Pose2D)))
)

(cl:defclass PlanToGoalGoal (<PlanToGoalGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PlanToGoalGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PlanToGoalGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rll_planning_project-msg:<PlanToGoalGoal> is deprecated: use rll_planning_project-msg:PlanToGoalGoal instead.")))

(cl:ensure-generic-function 'start-val :lambda-list '(m))
(cl:defmethod start-val ((m <PlanToGoalGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rll_planning_project-msg:start-val is deprecated.  Use rll_planning_project-msg:start instead.")
  (start m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <PlanToGoalGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rll_planning_project-msg:goal-val is deprecated.  Use rll_planning_project-msg:goal instead.")
  (goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PlanToGoalGoal>) ostream)
  "Serializes a message object of type '<PlanToGoalGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'start) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PlanToGoalGoal>) istream)
  "Deserializes a message object of type '<PlanToGoalGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'start) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PlanToGoalGoal>)))
  "Returns string type for a message object of type '<PlanToGoalGoal>"
  "rll_planning_project/PlanToGoalGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PlanToGoalGoal)))
  "Returns string type for a message object of type 'PlanToGoalGoal"
  "rll_planning_project/PlanToGoalGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PlanToGoalGoal>)))
  "Returns md5sum for a message object of type '<PlanToGoalGoal>"
  "5e8ecd9fb61e382b8974a904baeee367")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PlanToGoalGoal)))
  "Returns md5sum for a message object of type 'PlanToGoalGoal"
  "5e8ecd9fb61e382b8974a904baeee367")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PlanToGoalGoal>)))
  "Returns full string definition for message of type '<PlanToGoalGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%geometry_msgs/Pose2D start~%geometry_msgs/Pose2D goal~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PlanToGoalGoal)))
  "Returns full string definition for message of type 'PlanToGoalGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%geometry_msgs/Pose2D start~%geometry_msgs/Pose2D goal~%~%================================================================================~%MSG: geometry_msgs/Pose2D~%# This expresses a position and orientation on a 2D manifold.~%~%float64 x~%float64 y~%float64 theta~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PlanToGoalGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'start))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PlanToGoalGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'PlanToGoalGoal
    (cl:cons ':start (start msg))
    (cl:cons ':goal (goal msg))
))
