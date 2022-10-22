# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

cmake_minimum_required(VERSION 3.22)
project(practice)

set(CMAKE_CXX_STANDARD 20)
include(/home/valery/projects/cache/vcpkg/scripts/buildsystems/vcpkg.cmake)

add_subdirectory(templates)