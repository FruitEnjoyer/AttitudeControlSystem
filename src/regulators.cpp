#include "regulators.h"

Regulators::PropRegulator::PropRegulator()
{
    k = 0;
    u = Eigen::MatrixXd::Zero(WHEEL_NUM, 1);
}

Regulators::PropRegulator::PropRegulator(double m_k, RW_system m_rwsys, Satellite m_sat)
{
    k = m_k;
    rwsys = m_rwsys;
    sat = m_sat;
    u = Eigen::MatrixXd::Zero(WHEEL_NUM, 1);
}

