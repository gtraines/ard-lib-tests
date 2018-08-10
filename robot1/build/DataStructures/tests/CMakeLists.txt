cmake_minimum_required(VERSION 3.10)
include_directories(./tools)

add_executable(data_structures_tests tmain.cpp tests_decode_results.cpp)

target_link_libraries(data_structures_tests LINK_PUBLIC Arduino)
target_link_libraries(data_structures_tests LINK_PUBLIC data_structures)