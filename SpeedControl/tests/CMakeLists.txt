cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)

include_directories(./tools)

file(GLOB sources_ "tests_*.cpp")

add_subdirectory(fakes)
add_subdirectory(fakes/libraries)
add_subdirectory(mocks_gen)
add_subdirectory(mocks_man)

add_executable(speed_control_tests tmain.cpp ${sources_} tests_speed_control.cpp)

target_link_libraries(speed_control_tests LINK_PUBLIC Arduino)
target_link_libraries(speed_control_tests LINK_PUBLIC generated_mocks)
target_link_libraries(speed_control_tests LINK_PUBLIC manual_mocks)
target_link_libraries(speed_control_tests LINK_PUBLIC speed_control_impl)
