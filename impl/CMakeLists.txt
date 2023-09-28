project(GenericTemplateLibrary CXX)

cmake_minimum_required(VERSION 3.14)

add_library(gtl STATIC
    ${PROJECT_SOURCE_DIR}/heap/src/heap.cpp
    ${PROJECT_SOURCE_DIR}/algorithm/src/algorithm.cpp
    ${PROJECT_SOURCE_DIR}/utils/src/utils.cpp
)

target_include_directories(gtl PUBLIC
    ${PROJECT_SOURCE_DIR}/heap/inc
    ${PROJECT_SOURCE_DIR}/algorithm/inc
    ${PROJECT_SOURCE_DIR}/utils/inc    
)
