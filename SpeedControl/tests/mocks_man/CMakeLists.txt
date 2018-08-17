cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)

include_directories(../)

file(GLOB headers_ "*.h")
file(GLOB sources_ "*.cpp")

add_library(manual_mocks ${headers_} ${sources_})

target_include_directories(manual_mocks PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
