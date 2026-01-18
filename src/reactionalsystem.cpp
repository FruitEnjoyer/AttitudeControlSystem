#include "reactionalsystem.h"
#include <Eigen/LU>

RW_system::RW_system()
{
}

RW_system::RW_system(std::array<RW::RW, WHEEL_NUM> m_wheels)
{
    wheels = m_wheels;

    for(int i = 0; i < WHEEL_NUM; ++i)
    {
        Y.col(i) = m_wheels[i].j * m_wheels[i].e;
    }
}

Eigen::Matrix<double, WHEEL_NUM, 3> RW_system::inv()
{
#if (WHEEL_NUM == 3)
    return Y.inverse();
#else
    // TODO: implement proper matrix inversion
    return Eigen::MatrixXd::Zero(WHEEL_NUM, 3);
#endif
}

void RW_system::sendAccels(std::array<double, WHEEL_NUM> accels)
{
    for(int i = 0; i < WHEEL_NUM; ++i)
    {
        wheels[i].sendAccel(accels[i]);
    }
}
