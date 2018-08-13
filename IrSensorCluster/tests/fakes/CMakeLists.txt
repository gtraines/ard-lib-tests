cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)

include_directories(../tools)
include_directories(avr util)

file(GLOB headers_ "*.h")
file(GLOB sources_ "*.cpp")

add_library(Arduino Arduino.h Arduino.cpp ${headers_} ${sources_} libraries/IrReceiver.cpp)

target_include_directories(Arduino PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})