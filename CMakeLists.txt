cmake_minimum_required(VERSION 2.8)

project(fgal)

include_directories("include")

add_library(fgal_operations "src/operations/operations.cpp")

add_executable(test_fgal "src/main.cpp")
target_link_libraries(test_fgal fgal_operations)