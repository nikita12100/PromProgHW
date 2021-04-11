cmake_minimum_required(VERSION 2.8)

include_directories(.)

find_package (Python3 REQUIRED)

execute_process(COMMAND ${Python3_EXECUTABLE} preparing.py WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/A)
add_executable(main C/main.cpp)
add_subdirectory(B)
target_link_libraries(main lib)	
