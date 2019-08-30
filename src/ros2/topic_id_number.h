/*
 * topic_id_number.h
 *
 *  Created on: Mar 11, 2019
 *      Author: kei
 */

#ifndef SRC_LIB_ROS2XRCEDDS_TOPIC_ID_NUMBER_H_
#define SRC_LIB_ROS2XRCEDDS_TOPIC_ID_NUMBER_H_


enum TopicIdNumbering
{
  /* builtin_interfaces */
  BUILTIN_INTERFACES_TIME_ID = 1,
  BUILTIN_INTERFACES_DURATION_ID,

  /* std_msgs */
  STD_MSGS_BOOL_ID,
  STD_MSGS_CHAR_ID,
  STD_MSGS_STRING_ID,
  STD_MSGS_INT8_ID,
  STD_MSGS_INT16_ID,
  STD_MSGS_INT32_ID,
  STD_MSGS_INT64_ID,
  STD_MSGS_UINT8_ID,
  STD_MSGS_UINT16_ID,
  STD_MSGS_UINT32_ID,
  STD_MSGS_UINT64_ID,
  STD_MSGS_FLOAT32_ID,
  STD_MSGS_FLOAT64_ID,
  STD_MSGS_EMPTY_ID,
  STD_MSGS_HEADER_ID,
  STD_MSGS_MULTI_ARRAY_DIMENSION_ID,

  /* geometry_msgs */
  GEOMETRY_MSGS_VECTOR3_ID,
  GEOMETRY_MSGS_TWIST_ID,
  GEOMETRY_MSGS_QUATERNION_ID,
  GEOMETRY_MSGS_POINT_ID,
  GEOMETRY_MSGS_POSE_ID,
  GEOMETRY_MSGS_POSE_WITH_COVARIANCE_ID,
  GEOMETRY_MSGS_TWIST_WITH_COVARIANCE_ID,
  GEOMETRY_MSGS_TRANSFORM_ID,
  GEOMETRY_MSGS_TRANSFORM_STAMPED_ID,

  /* diagnostic_msgs */
  DIAGNOSTIC_MSGS_KEY_VALUE_ID,

  /* sensor_msgs */
  SENSOR_MSGS_IMU_ID,
  SENSOR_MSGS_LASER_SCAN_ID,
  SENSOR_MSGS_BATTERY_STATE_ID,
  SENSOR_MSGS_MAGNETIC_FIELD_ID,
  SENSOR_MSGS_JOINT_STATE_ID,
  SENSOR_MSGS_JOY_ID,
  SENSOR_MSGS_IMAGE_ID,

  /* nav_msgs */
  NAV_MSGS_ODOMETRY_ID,

  /* tf_msgs */
  TF2_MSGS_TFMESSAGE_ID,

  /* turtlebot3_msgs */
  TURTLEBOT3_MSGS_SOUND_ID,
  TURTLEBOT3_MSGS_VERSION_INFO_ID,
  TURTLEBOT3_MSGS_SENSOR_STATE_ID
};


#endif /* SRC_LIB_ROS2XRCEDDS_TOPIC_ID_NUMBER_H_ */
