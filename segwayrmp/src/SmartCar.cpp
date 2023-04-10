#include "rclcpp/rclcpp.hpp"
#include "segwayrmp/robot.h"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto n = std::make_shared<rclcpp::Node>("SmartCar");

    std::string serial;
    n->declare_parameter<std::string>("segwaySmartCarSerial", "ttyUSB0");
    n->get_parameter("segwaySmartCarSerial", serial);
    
    printf("segwaySmartCarSerial: %s\n", serial.c_str());
    set_smart_car_serial(serial.c_str());

    // Before calling init_control_ctrl, need to call this function to set whether the communication port is a serial port or a CAN port, "comu_serial":serial; "comu_can":CAN.;Others: Illegal
    set_comu_interface(comu_serial); 
    if(init_control_ctrl() == -1){
        printf("init_control failed\n");
    } else {
        printf("init success!\n");
    }  

    robot::Chassis sbv(n);

    rclcpp::spin(n);
    rclcpp::shutdown();
    return 0;
}
