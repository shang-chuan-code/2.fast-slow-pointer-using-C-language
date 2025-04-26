cmake_minimum_required(VERSION 3.20.0)
project(data_structure)

include_directories(${CMAKE_SOURCE_DIR}/include)
aux_source_directory(${CMAKE_SOURCE_DIR} SRC_LIST)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

add_executable(inverse ${SRC_LIST})
