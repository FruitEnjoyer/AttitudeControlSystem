#include <reactionalwheel.h>

RW::RW::RW(double m_j)
{
    j = m_j;
    w = 0.0;
}

double RW::RW::recvSpeed()
{
    // TODO: implement function to get speed via CAN
    return this->w;
}

void RW::RW::sendAccel(double accel)
{
    // TODO: implement transfer to RW via CAN
}