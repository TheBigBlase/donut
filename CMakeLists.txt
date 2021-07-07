cmake_minimum_required (VERSION 3.8)

project(donut)
set(CMAKE_CXX_STANDARD 17)
file(GLOB SOURCES src/*.cpp src/matrix/*.cpp)
add_executable(a.out ${SOURCES})
