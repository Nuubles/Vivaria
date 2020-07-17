# BITSIZE=[x86, x64]
cmake_minimum_required(VERSION 3.17)
project(Vivaria VERSION 1.0.0)

#set(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/../deploy")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT BITSIZE)
    set(BITSIZE "x86")
endif()

set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/../includes")
set(SDL2_DIR "${INCLUDE_DIR}/SDL2/SDL2-2.0.12")

set(SDL2_INCLUDE_DIRS "${SDL2_DIR}/include")

#set(CMAKE_BINARY_DIR "${CMAKE_SOURCE_DIR}/../deploy")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../deploy/${CMAKE_SYSTEM_NAME}_${BITSIZE}_${CMAKE_BUILD_TYPE}/")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../deploy/${CMAKE_SYSTEM_NAME}_${BITSIZE}/lib")
set(SDL2_LIBRARIES "${SDL2_DIR}/lib/${BITSIZE}/SDL2main.lib;${SDL2_DIR}/lib/${BITSIZE}/SDL2.lib")

# link dependencies
include_directories(${SDL2_INCLUDE_DIRS})

include_directories("${CMAKE_SOURCE_DIR}")
#link_directories(${SDL2_LIBRARIES})

# Project files and linking
set(SOURCES
	vivaria.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE ${SDL2_LIBRARIES})
