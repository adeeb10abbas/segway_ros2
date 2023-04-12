#pragma once
#pragma once

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include "comm_ctrl_navigation.h"
#include "segway_msgs/msg/bmsfb.hpp"
#include "segway_msgs/msg/chassisctrlsrcfb.hpp"
#include "segway_msgs/msg/chassismileagemeterfb.hpp"
#include "segway_msgs/msg/chassismodefb.hpp"
#include "segway_msgs/msg/errorcodefb.hpp"
#include "segway_msgs/msg/motorworkmodefb.hpp"
#include "segway_msgs/msg/speedfb.hpp"
#include "segway_msgs/msg/ticksfb.hpp"
#include "Ge_encoder_odometry.h"
#include "segway_msgs/srv/ros_get_sw_version_cmd.hpp"
#include "segway_msgs/srv/ros_get_vel_max_feedback_cmd.hpp"
#include "segway_msgs/srv/ros_set_chassis_buzzer_cmd.hpp"
#include "segway_msgs/srv/ros_set_chassis_enable_cmd.hpp"
#include "segway_msgs/srv/ros_set_chassis_poweroff_cmd.hpp"
#include "segway_msgs/srv/ros_set_load_param_cmd.hpp"
#include "segway_msgs/srv/ros_set_vel_max_cmd.hpp"
#include "segway_msgs/srv/chassis_send_event.hpp"
#include "segway_msgs/srv/ros_clear_chassis_error_code_cmd.hpp"
#include "segway_msgs/srv/ros_enable_chassis_rotate_cmd.hpp"
#include "segway_msgs/srv/ros_get_chassis_rotate_switch_cmd.hpp"
#include "segway_msgs/srv/ros_get_chassis_sn_cmd.hpp"
#include "segway_msgs/srv/ros_get_load_param_cmd.hpp"
#include "segway_msgs/srv/ros_get_rotate_function_cfg_cmd.hpp"
#include "segway_msgs/srv/ros_set_cfg_rotate_function_cmd.hpp"
#include "segway_msgs/srv/ros_get_host_and_chassis_match_cmd.hpp"
#include "segway_msgs/srv/ros_reset_host_power_cmd.hpp"
#include "segway_msgs/srv/ros_start_chassis_left_rotate_cmd.hpp"
#include "segway_msgs/srv/ros_start_chassis_right_rotate_cmd.hpp"
#include "segway_msgs/srv/ros_stop_chassis_rotate_cmd.hpp"
#include <rclcpp_action/rclcpp_action.hpp>
#include "segway_msgs/action/ros_set_iap_cmd.hpp"
#include "tf2_ros/transform_broadcaster.h"

#define IAP_STATE_COMPLETE  3
#define IAP_STATE_FAIL      4
#define IAP_STATE_ABORT     5
using iapActionServer = rclcpp_action::Server<segway_msgs::action::RosSetIapCmd>;
using iapActionClient = rclcpp_action::Client<segway_msgs::action::RosSetIapCmd>;

namespace robot
{

    class Chassis : public rclcpp::Node
    {
        public:
            explicit Chassis(const rclcpp::Node::SharedPtr &nh);
            static void chassis_send_event_callback(int event_no);
        private:
            void cmd_vel_callback(const geometry_msgs::msg::Twist::SharedPtr vel);
            void TimeUpdate1000Hz();
            void TimeUpdate1Hz();
            void PubOdomToRosOdom(Odometry odom_data);
            void PubImuToRosImu(void);
            rclcpp::Node::SharedPtr nh_;
            rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr velocity_sub_;

            rclcpp::Publisher<segway_msgs::msg::Bmsfb>::SharedPtr bms_fb_pub;
            rclcpp::Publisher<segway_msgs::msg::Chassisctrlsrcfb>::SharedPtr chassis_ctrl_src_fb_pub;
            rclcpp::Publisher<segway_msgs::msg::Chassismileagemeterfb>::SharedPtr chassis_mileage_meter_fb_pub;
            rclcpp::Publisher<segway_msgs::msg::Chassismodefb>::SharedPtr chassis_mode_fb_pub;
            rclcpp::Publisher<segway_msgs::msg::Errorcodefb>::SharedPtr error_code_fb_pub;
            rclcpp::Publisher<segway_msgs::msg::Motorworkmodefb>::SharedPtr motor_work_mode_fb_pub;
            rclcpp::Publisher<segway_msgs::msg::Speedfb>::SharedPtr speed_fb_pub;
            rclcpp::Publisher<segway_msgs::msg::Ticksfb>::SharedPtr ticks_fb_pub;
            rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr Odom_pub;
            rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr Imu_pub;
            std::shared_ptr<tf2_ros::TransformBroadcaster> odom_broadcaster;

            rclcpp::TimerBase::SharedPtr update_timer_;
            rclcpp::TimerBase::SharedPtr update_timer2_;

            segway_msgs::msg::Bmsfb bms_fb;
            segway_msgs::msg::Chassisctrlsrcfb chassis_ctrl_src_fb;
            segway_msgs::msg::Chassismileagemeterfb chassis_mileage_meter_fb;
            segway_msgs::msg::Chassismodefb chassis_mode_fb;
            segway_msgs::msg::Errorcodefb error_code_fb;
            segway_msgs::msg::Motorworkmodefb motor_work_mode_fb;
            segway_msgs::msg::Speedfb speed_fb;
            segway_msgs::msg::Ticksfb ticks_fb;
            nav_msgs::msg::Odometry ROS_odom;
            sensor_msgs::msg::Imu ros_imu;
            geometry_msgs::msg::TransformStamped odom_trans;

            // Add service callbacks and service server declarations here
            // Callbacks
            bool ros_enable_chassis_rotate_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosEnableChassisRotateCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosEnableChassisRotateCmd::Response> res);
            bool ros_get_chassis_rotate_switch_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosGetChassisRotateSwitchCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosGetChassisRotateSwitchCmd::Response> res);
            bool ros_clear_chassis_error_code_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosClearChassisErrorCodeCmd::Response> res);
            bool ros_get_load_param_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosGetLoadParamCmd::Response> res);
            bool ros_get_chassis_SN_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosGetChassisSnCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosGetChassisSnCmd::Response> res);
            bool ros_get_sw_version_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosGetSwVersionCmd::Response> res);
            bool ros_get_vel_max_feedback_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosGetVelMaxFeedbackCmd::Response> res);
            bool ros_set_chassis_buzzer_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosSetChassisBuzzerCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosSetChassisBuzzerCmd::Response> res);
            bool ros_set_chassis_enable_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosSetChassisEnableCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosSetChassisEnableCmd::Response> res);
            bool ros_set_chassis_poweroff_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosSetChassisPoweroffCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosSetChassisPoweroffCmd::Response> res);
            bool ros_set_load_param_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosSetLoadParamCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosSetLoadParamCmd::Response> res);
            bool ros_set_vel_max_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosSetVelMaxCmd::Response> res);
            bool ros_reset_host_power_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosResetHostPowerCmd::Response> res);
            bool ros_start_chassis_left_rotate_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosStartChassisLeftRotateCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosStartChassisLeftRotateCmd::Response> res);
            bool ros_start_chassis_right_rotate_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosStartChassisRightRotateCmd::Response> res);
            bool ros_stop_chassis_rotate_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosStopChassisRotateCmd::Response> res);
            bool ros_get_rotate_function_cfg_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosGetRotateFunctionCfgCmd::Response> res);
            bool ros_set_cfg_rotate_function_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosSetCfgRotateFunctionCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosSetCfgRotateFunctionCmd::Response> res);
            bool ros_get_host_and_chassis_match_cmd_callback(const std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd::Request> req, std::shared_ptr<segway_msgs::srv::RosGetHostAndChassisMatchCmd::Response> res);

            rclcpp::Service<segway_msgs::srv::RosEnableChassisRotateCmd>::SharedPtr ros_enable_chassis_rotate_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosGetChassisRotateSwitchCmd>::SharedPtr ros_get_chassis_rotate_switch_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosClearChassisErrorCodeCmd>::SharedPtr ros_clear_chassis_error_code_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosGetChassisSnCmd>::SharedPtr ros_get_chassis_SN_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosGetLoadParamCmd>::SharedPtr ros_get_load_param_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosGetSwVersionCmd>::SharedPtr ros_get_sw_version_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosGetVelMaxFeedbackCmd>::SharedPtr ros_get_vel_max_feedback_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosSetChassisBuzzerCmd>::SharedPtr ros_set_chassis_buzzer_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosSetChassisEnableCmd>::SharedPtr ros_set_chassis_enable_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosSetChassisPoweroffCmd>::SharedPtr ros_set_chassis_poweroff_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosSetLoadParamCmd>::SharedPtr ros_set_load_param_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosSetVelMaxCmd>::SharedPtr ros_set_vel_max_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosResetHostPowerCmd>::SharedPtr ros_reset_host_power_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosStartChassisLeftRotateCmd>::SharedPtr ros_start_chassis_left_rotate_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosStartChassisRightRotateCmd>::SharedPtr ros_start_chassis_right_rotate_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosStopChassisRotateCmd>::SharedPtr ros_stop_chassis_rotate_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosGetRotateFunctionCfgCmd>::SharedPtr ros_get_rotate_function_cfg_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosSetCfgRotateFunctionCmd>::SharedPtr ros_set_cfg_rotate_function_cmd_srv_server;
            rclcpp::Service<segway_msgs::srv::RosGetHostAndChassisMatchCmd>::SharedPtr ros_get_host_and_chassis_match_cmd_srv_server;

            s_aprctrl_datastamped_t timestamp_data;
            s_aprctrl_event_t event_data;

            // std::shared_ptr<Ge_encoder_odometry> m_ge_encoder;
            Ge_encoder_odometry m_ge_encoder;
    };

}