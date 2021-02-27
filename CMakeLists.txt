cmake_minimum_required(VERSION 3.17)
project(artronics)

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(lib)
add_subdirectory(tests)
include_directories(lib/inc)

set(SOURCES
        src/main.cpp
        )
add_executable(artronics src/main.cpp)

target_link_libraries(artronics connector)