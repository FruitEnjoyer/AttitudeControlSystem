#include "satellite.h"

Satellite::Satellite()
{
    I = Eigen::Matrix3d::Identity();
    omega << 0, 0, 0;
    q = Eigen::Quaternion<double>(1, 0, 0, 0);
}

Satellite::Satellite(Eigen::Matrix<double, 3, 3> m_I)
{
    I = m_I;
    omega << 0, 0, 0;
    q = Eigen::Quaternion<double>(1, 0, 0, 0);
}

/**
 * @brief This operation sets satellite's 
 *        attitude to initial/desired state
 */
void Satellite::setQuaternionToInit()
{
    q = Eigen::Quaternion<double>(1, 0, 0, 0);
}