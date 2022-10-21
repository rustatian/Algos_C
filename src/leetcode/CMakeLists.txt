cmake_minimum_required(VERSION 3.22)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)
include(/home/valery/projects/cache/vcpkg/scripts/buildsystems/vcpkg.cmake)

find_package(Catch2 CONFIG REQUIRED)

add_subdirectory(easy)