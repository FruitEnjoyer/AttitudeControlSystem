#pragma once

#include <Eigen/Core>

namespace RW{
    class RW{
    public:
        double j;             // moment of inertia [kg * m^2]
        double w;             // speed [rad / sec]
        Eigen::Vector3d e;

        RW();
        RW(double m_j, Eigen::Vector3d m_e);
        double recvSpeed();
        void sendAccel(double accel);
    };
};


