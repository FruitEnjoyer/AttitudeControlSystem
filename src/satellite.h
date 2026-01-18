#pragma once

#include <Eigen/Core>
#include <Eigen/Geometry>

class Satellite{
public:
    Eigen::Matrix<double, 3, 3> I; // inertia tensor
    Eigen::Matrix<double, 3, 1> omega; // satellite's angular velocity
    Eigen::Quaternion<double> q;    // quaternion for orientation
    
    Satellite();
    Satellite(Eigen::Matrix<double, 3, 3> m_I);
    void setQuaternionToInit();
};