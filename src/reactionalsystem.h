#pragma once

#include <Eigen/Core>
#include "reactionalwheel.h"
#include <array>

#define WHEEL_NUM 3

class RW_system{
public:
    std::array<RW::RW, WHEEL_NUM> wheels;
    std::array<Eigen::Vector3d, WHEEL_NUM> Y;

    
};
