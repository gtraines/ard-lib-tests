include_directories(../tools)
include_directories(../fakes/avr ../fakes/util)

file(GLOB headers_ "*.h")
file(GLOB sources_ "*.cpp")

add_library(mocks_man ${headers_} ${sources_})

target_include_directories(mocks_man PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
