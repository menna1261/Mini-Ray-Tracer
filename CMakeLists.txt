cmake_minimum_required(VERSION 3.10)

project(MinRayTracer)

set(CMAKE_CXX_STANDARD 17)

# Find OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS} headers)

# Find SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Executable
add_executable(ray_tracer src/main.cpp)

# Link libraries
target_link_libraries(ray_tracer ${OpenCV_LIBS} sfml-graphics sfml-window sfml-system)
