cmake_minimum_required(VERSION 3.17)
project(OpenCVPractice)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(main.cpp map.h)
target_link_libraries(${OpenCV_LIBS})

add_custom_command(
        OUTPUT ${CMAKE_SOURCE_DIR}/source/map.h
        COMMAND python3 ${CMAKE_SOURCE_DIR}/create_map.py
)
