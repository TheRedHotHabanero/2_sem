cmake_minimum_required(VERSION 3.17)
project(project)

set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(project zoo.cpp zoo_map.h)
target_link_libraries(project sfml-graphics sfml-audio)