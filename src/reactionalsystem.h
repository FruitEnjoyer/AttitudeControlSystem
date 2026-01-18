#pragma once

#include <Eigen/Core>
#include "reactionalwheel.h"
#include <array>

#define WHEEL_NUM 4
#if (WHEEL_NUM < 3)
#error Invalid wheel number (WHEEL_NUM < 3)
#endif

class RW_system{
public:
    std::array<RW::RW, WHEEL_NUM> wheels;
    Eigen::Matrix<double, 3, WHEEL_NUM> Y;

    RW_system();
    RW_system(std::array<RW::RW, WHEEL_NUM> m_wheels);
    Eigen::Matrix<double, WHEEL_NUM, 3> inv();
    void sendAccels(std::array<double, WHEEL_NUM> accels);
    Eigen::Matrix<double, WHEEL_NUM, 1> getSpeeds();
};
