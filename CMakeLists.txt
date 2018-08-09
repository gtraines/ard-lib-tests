cmake_minimum_required(VERSION 3.10)
project(ard_lib_tests)

set(CMAKE_CXX_STANDARD 11)

add_executable(ard_lib_tests main.cpp robot1/DataStructures/tests/tests_decode_results.cpp robot1/DataStructures/tests/tests_decode_results.h)