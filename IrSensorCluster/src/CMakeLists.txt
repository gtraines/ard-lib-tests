set(CMAKE_CXX_STANDARD 11)

add_subdirectory(commando)

file(GLOB headers_under_test "*.h")
file(GLOB sources_under_test "*.cpp")

include_directories("../tests/tools")
add_library(ir_sensor_cluster_impl ${headers_under_test} ${sources_under_test})

target_include_directories(ir_sensor_cluster_impl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ir_sensor_cluster_impl LINK_PUBLIC Arduino)
target_link_libraries(ir_sensor_cluster_impl LINK_PUBLIC arduino_libs)
target_link_libraries(ir_sensor_cluster_impl LINK_PUBLIC generated_mocks)
target_link_libraries(ir_sensor_cluster_impl LINK_PUBLIC manual_mocks)
target_link_libraries(ir_sensor_cluster_impl LINK_PUBLIC commando)
