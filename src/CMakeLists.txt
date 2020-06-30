cmake_minimum_required(VERSION 3.17)
project(Vivaria VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)
find_package(SDL2 REQUIRED)

add_executable(${PROJECT_NAME} vivaria.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2)