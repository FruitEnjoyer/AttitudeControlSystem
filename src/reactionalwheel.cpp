#include <reactionalwheel.h>

RW::RW::RW()
{
    j = 0.0;
    w = 0.0;
    e = {1, 0, 0};
}

RW::RW::RW(double m_j, Eigen::Vector3d m_e)
{
    j = m_j;
    w = 0.0;
    e = m_e;
    e.normalize();
}

double RW::RW::recvSpeed()
{
    // TODO: implement receive speed function via CAN
    return this->w;
}

void RW::RW::sendAccel(double accel)
{
    // TODO: implement transfer to RW via CAN
}