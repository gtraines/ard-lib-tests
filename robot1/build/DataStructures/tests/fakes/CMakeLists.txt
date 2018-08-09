

include_directories(../tools/)
include_directories(avr util)

file(GLOB headers_ "*.h")
file(GLOB sources_ "*.cpp")

add_library(Arduino ../tools/fff.h Arduino.h Arduino.cpp ${headers_} ${sources_})

target_include_directories(Arduino PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})