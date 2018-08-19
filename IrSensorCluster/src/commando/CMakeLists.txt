cmake_minimum_required(VERSION 3.5)
project(commando)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        examples/commands/commands.ino
        commando.cpp
        commando.h
        keywords.txt
        library.properties)
include_directories("../../tests/tools")
add_library(commando ${SOURCE_FILES})

target_include_directories(commando PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(commando LINK_PUBLIC Arduino)