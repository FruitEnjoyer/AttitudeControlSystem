#include <iostream>
#include "satellite.h"

using namespace std;

int main()
{
    double dt = 0.0625;
    Satellite sat;

    for(double t = 0.0; t < 1.0; t += dt)
    {
        //Eigen::Quaterniond dqdt = 0.5 * sat.q;
    }


    return 0;
}