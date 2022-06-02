cmake_minimum_required(VERSION 3.22)
project(vam_with_stepping_stone)

set(CMAKE_CXX_STANDARD 23)

add_executable(vam_with_stepping_stone main.cpp SteppingStoneMethod.hpp VogelApproximationMethod.hpp utils.hpp common.hpp)
