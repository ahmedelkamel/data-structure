project(test-utils CXX)

cmake_minimum_required(VERSION 3.14)

add_library(test-utils STATIC
    ${PROJECT_SOURCE_DIR}/src/test_utils.cpp
)

target_include_directories(test-utils PUBLIC 
    ${PROJECT_SOURCE_DIR}/inc
)
