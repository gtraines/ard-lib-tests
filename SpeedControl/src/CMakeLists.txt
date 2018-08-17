set(CMAKE_CXX_STANDARD 11)

file(GLOB headers_under_test "*.h")
file(GLOB sources_under_test "*.cpp")

include_directories("../tests/tools")
add_library(speed_control_impl ${headers_under_test} ${sources_under_test})

target_include_directories(speed_control_impl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(speed_control_impl LINK_PUBLIC Arduino)
target_link_libraries(speed_control_impl LINK_PUBLIC arduino_libs)
target_link_libraries(speed_control_impl LINK_PUBLIC generated_mocks)
target_link_libraries(speed_control_impl LINK_PUBLIC manual_mocks)
