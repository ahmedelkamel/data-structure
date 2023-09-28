cmake_minimum_required(VERSION 3.14)

add_executable(sort_test
    ${PROJECT_SOURCE_DIR}/test/sort/sort_test.cpp
)

target_include_directories(sort_test PRIVATE
    ${PROJECT_SOURCE_DIR}/impl/sort/inc
    ${PROJECT_SOURCE_DIR}/test/test-utils/inc
)

target_link_libraries(sort_test PUBLIC
    gtl
    test-utils
)
