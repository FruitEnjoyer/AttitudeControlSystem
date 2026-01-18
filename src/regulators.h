#pragma once

#include <additional.h>
#include <reactionalsystem.h>
#include <satellite.h>
#include <Eigen/LU>

/*
  dx/dt = A * x + B * u
*/

namespace Regulators{
    class PropRegulator{
    public:
        double k; // proportional koefficient
        Eigen::Matrix<double, WHEEL_NUM, 1> u; // control vector
        RW_system rwsys; // system of reactional wheels 
        Satellite sat;   // satellite body model

        PropRegulator();
        PropRegulator(double m_k, RW_system m_rwsys, Satellite m_sat);

        Eigen::Matrix<double, WHEEL_NUM, 1> CalcCtrl();
    };
};