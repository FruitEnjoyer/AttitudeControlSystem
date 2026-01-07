#pragma once


namespace RW{
    class RW{
    public:
        double j;             // moment of inertia [kg * m^2]
        double w;             // speed [rad / sec]

        RW(double m_j);
        double recvSpeed();
        void sendAccel(double accel);
    };
};


