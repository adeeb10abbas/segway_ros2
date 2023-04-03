//Author: Adeeb Abbas

#ifndef GE_ENCODER_ANSYS_GE_ENCODER_ODOMETRY_H
#define GE_ENCODER_ANSYS_GE_ENCODER_ODOMETRY_H

#include <rclcpp/rclcpp.hpp>

#include <fstream>
#include <queue>
#include <sstream>
#include <string>
#include <vector>

#include "Ge_encoder_sensordata.h"

class ImuRecord {
 public:
  std::vector<SensorData::BaseImu> imu_buffer_;
  bool first = true;
  
  // Calculates the average IMU data based on the timestamp
  SensorData::BaseImu getAverageImu(int64_t ts) {
    std::vector<SensorData::BaseImu>::reverse_iterator i = imu_buffer_.rbegin();
    while (i != imu_buffer_.rend() && i->TimeStamp > ts) {
      ++i;
    }
    double yaw_sum_ = 0;
    int64_t time_gap_ = 0;
    SensorData::BaseImu imu_after = *i;
    if (i != imu_buffer_.rend()) ++i;
    for (; i != imu_buffer_.rend(); ++i) {
      yaw_sum_ += (i->baseYaw + imu_after.baseYaw) / 2 *
                  (imu_after.TimeStamp - i->TimeStamp);
      time_gap_ += imu_after.TimeStamp - i->TimeStamp;
    }
    if (i != imu_buffer_.rend() && ts != i->TimeStamp) {
      std::vector<SensorData::BaseImu>::reverse_iterator j = i;
      j--;
      SensorData::BaseImu imu_suanz = i->Interpolation(ts, *i, *j);
      yaw_sum_ += (i->baseYaw + imu_suanz.baseYaw) / 2 *
                  (imu_suanz.TimeStamp - i->TimeStamp);
      time_gap_ += imu_suanz.TimeStamp - i->TimeStamp;
    }
    if (time_gap_ == 0) return imu_buffer_.back();
    SensorData::BaseImu res_imu(ts, yaw_sum_ / time_gap_);
    imu_buffer_.clear();
    imu_buffer_.push_back(res_imu);
    return res_imu;
  }
};

class Ge_encoder_odometry {
 public:
  Ge_encoder_odometry();
  ~Ge_encoder_odometry() {}

  // Interface function called when IMU data is obtained
  // If the function returns true, call GetOdometry() function
  bool add_imubase(SensorData::BaseImu &imudata);

  // Interface function called when ticks data is obtained
  // If the function returns true, call GetOdometry() function
  bool add_ticks(SensorData::Ticks &ticksdata);

  // Interface function that returns the odometry of the robot
  Odometry GetOdometry();

  SensorData *created(SensorData::BaseImu &imudata,
                      SensorData::Ticks &ticksdata);

  int m_num_out = 0;

 private:
  void estimate(SensorData *rawdata);
  void init();

  double m_omegaImu_bias = -0.00016859;
  int m_num_static = 0;
  const int m_num_ignore_static = 5;
  double m_imu_static_sum = 0;
  int64_t m_current_ts;
  bool m_isInit = false;
  bool m_initial = true;
  int64_t m_prev_t_read;
  int64_t m_current_t_read;
  int64_t m_prev_right_count;
  int64_t m_prev_left_count;

  double m_count_to_right_rot_;
  double m_count_to_left_rot_;
  double m_distance_per_count_;
  double m_wheels_distance;
  Odometry m_odometry_;

  bool m_if_record = false;
  std::ofstream m_record_file;
  std::string m_record_file_path;

  ImuRecord m_imu_record_;
  std::queue<SensorData::Ticks> m_futureTicks_;
};

#endif  // GE_ENCODER_ANSYS_GE_ENCODER_ODOMETRY_H
