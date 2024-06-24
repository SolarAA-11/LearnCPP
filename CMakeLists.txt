cmake_minimum_required(VERSION 3.15)

project(LearnCPP CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(ZLIB)
find_package(GTest)

add_subdirectory(Leetcode)

