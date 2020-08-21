cmake_minimum_required(VERSION 3.17 FATAL_ERROR)

find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()

project(easy)
include(FetchContent)

set(CMAKE_CXX_STANDARD 20)

# TESTS
find_package(Catch2 CONFIG REQUIRED)

add_executable(tns two_number_sum.cpp)
target_link_libraries(tns Catch2::Catch2)