cmake_minimum_required(VERSION 3.28)

project(AttitudeControlSystem)

# Eigen library requires C++14
set(CMAKE_CXX_STANDARD 14)

# User path to Eigen library
set(LIBEIGEN_PATH ~/work/libs/eigen)

include_directories(${LIBEIGEN_PATH}
                    src/
                    third_party/Riccati_Solver/
                    )

add_executable(controlsystem 
                src/main.cpp 
                src/regulators.cpp 
                src/reactionalwheel.cpp
                src/reactionalsystem.cpp
                src/satellite.cpp
                third_party/Riccati_Solver/riccati_solver.cpp
                )