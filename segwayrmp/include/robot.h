#pragma once

#include <ros/ros.h>
#include "std_msgs/String.h"
#include <geometry_msgs/Twist.h>
#include <nav_msgs/Odometry.h>
#include <sensor_msgs/Imu.h>
#include "comm_ctrl_navigation.h"
#include "segway_msgs/Bmsfb.h"
#include "segway_msgs/Chassisctrlsrcfb.h"
#include "segway_msgs/Chassismileagemeterfb.h"
#include "segway_msgs/Chassismodefb.h"
#include "segway_msgs/Errorcodefb.h"
#include "segway_msgs/Motorworkmodefb.h"
#include "segway_msgs/Speedfb.h"
#include "segway_msgs/Ticksfb.h"
#include "Ge_encoder_odometry.h"
#include "segway_msgs/RosGetSwVersionCmd.h"
#include "segway_msgs/RosGetVelMaxFeedbackCmd.h"
#include "segway_msgs/RosSetChassisBuzzerCmd.h"
#include "segway_msgs/RosSetChassisEnableCmd.h"
#include "segway_msgs/RosSetChassisPoweroffCmd.h"
#include "segway_msgs/RosSetLoadParamCmd.h"
#include "segway_msgs/RosSetVelMaxCmd.h"
#include "segway_msgs/ChassisSendEvent.h"
#include "segway_msgs/RosClearChassisErrorCodeCmd.h"
#include "segway_msgs/RosEnableChassisRotateCmd.h"
#include "segway_msgs/RosGetChassisRotateSwitchCmd.h"
#include "segway_msgs/RosGetChassisSnCmd.h"
#include "segway_msgs/RosGetLoadParamCmd.h"
#include "segway_msgs/RosGetRotateFunctionCfgCmd.h"
#include "segway_msgs/RosSetCfgRotateFunctionCmd.h"
#include "segway_msgs/RosGetHostAndChassisMatchCmd.h"
#include "segway_msgs/RosResetHostPowerCmd.h"
#include "segway_msgs/RosStartChassisLeftRotateCmd.h"
#include "segway_msgs/RosStartChassisRightRotateCmd.h"
#include "segway_msgs/RosStopChassisRotateCmd.h"
#include <actionlib/server/simple_action_server.h>
#include <actionlib/client/simple_action_client.h>
#include <actionlib/client/terminal_state.h>
#include "segway_msgs/RosSetIapCmdAction.h"
#include "tf/transform_broadcaster.h"

#define IAP_STATE_COMPLETE  3
#define IAP_STATE_FAIL      4
#define IAP_STATE_ABORT     5
typedef actionlib::SimpleActionServer<segway_msgs::RosSetIapCmdAction> iapActionServer;
typedef actionlib::SimpleActionClient<segway_msgs::RosSetIapCmdAction> iapActionClient;
namespace robot
{

    class Chassis : public rclcpp::Node
    {
        public:
            Chassis();
            static void chassis_send_event_callback(int event_no);
        private:
            void cmd_vel_callback(const geometry_msgs::msg::Twist::SharedPtr vel);
            void TimeUpdate1000Hz();
            void TimeUpdate1Hz();
            void PubOdomToRosOdom(Odometry odom_data);
            void PubImuToRosImu(void);

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