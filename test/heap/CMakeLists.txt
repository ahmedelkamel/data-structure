cmake_minimum_required(VERSION 3.14)

add_executable(heap_test
    ${PROJECT_SOURCE_DIR}/test/heap/heap_test.cpp
)

target_include_directories(heap_test PRIVATE
    ${PROJECT_SOURCE_DIR}/impl/heap/inc
    ${PROJECT_SOURCE_DIR}/test/test-utils/inc
)

target_link_libraries(heap_test PUBLIC
    gtl
    test-utils
)
