#ifndef _Odoemtry_H_
#define _Odoemtry_H_

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_broadcaster.h>
#include <nav_msgs/msg/odometry.hpp>
#include "segwayrmp/sensor.h"

#define pi 3.141593f

namespace odometry
{
    class Odometry : public rclcpp::Node
    {
        public:
            Odometry();

        private:
            void Odometry_Cacl(double vx, double vy, double th);
            void Sensor_callback(const segwayrmp::sensor::SharedPtr msg);
            void TimeUpdate20Hz();

            rclcpp::Subscription<segwayrmp::sensor>::SharedPtr sensor_sub_;
            rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;

            rclcpp::TimerBase::SharedPtr update_timer_;
            rclcpp::Time current_time, last_time;

            tf2_ros::TransformBroadcaster odom_broadcaster;
            nav_msgs::msg::Odometry odom;
            geometry_msgs::msg::Quaternion odom_quat;
            geometry_msgs::msg::TransformStamped odom_trans;

            int16_t L_Ticks_;
            int16_t R_Ticks_;
            int16_t Pre_L_Ticks_;
            int16_t Pre_R_Ticks_;
    };

} // namespace odometry

#endif
