
file(GLOB headers_under_test "*.h")
file(GLOB sources_under_test "*.cpp")
add_library(data_structures ${headers_under_test} ${sources_under_test})

target_include_directories(data_structures PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(data_structures LINK_PUBLIC Arduino)