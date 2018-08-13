
include_directories(../)

file(GLOB headers_ "*.h")
file(GLOB sources_ "*.cpp")

add_library(generated_mocks ${headers_} ${sources_})

target_include_directories(generated_mocks PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
