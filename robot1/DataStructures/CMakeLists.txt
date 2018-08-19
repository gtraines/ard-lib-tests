cmake_minimum_required(VERSION 3.5)
project(data_structures_lib)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(tests/fakes)
add_subdirectory(tests/mocks_gen)
add_subdirectory(tests/mocks_man)
add_subdirectory(tests)
add_subdirectory(src)
