cmake_minimum_required(VERSION 3.15)

project(LearnCPP CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(ZLIB REQUIRED)
find_package(GTest REQUIRED)

add_subdirectory(GoogleTest)
add_subdirectory(LearnCPPSerials)
add_subdirectory(Leetcode)

