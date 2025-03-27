# Set minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(MinRayTracer)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add source files
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(ray_tracer src/main.cpp)
target_link_libraries(ray_tracer ${OpenCV_LIBS})