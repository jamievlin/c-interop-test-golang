cmake_minimum_required(VERSION 3.21)

project(golang_c_component)

set(CMAKE_C_STANDARD 11)

add_library(c_component SHARED)
add_executable(c_component_test)

target_compile_definitions(c_component PUBLIC C_COMPONENT_EXPORT)
target_compile_definitions(c_component_test PUBLIC C_COMPONENT_NODLL)

set(srcs ${srcs}
    src/c_component.c)

set(test_srcs ${test_srcs}
    tests/test_main.c)

target_include_directories(
    c_component
    PUBLIC include/
)

target_include_directories(
    c_component_test
    PUBLIC include/
)

target_sources(c_component PRIVATE ${srcs})
target_sources(c_component_test PRIVATE ${srcs} ${test_srcs})


