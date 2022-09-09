cmake_minimum_required(VERSION 3.21)
project(sfml_template)

set(CMAKE_CXX_STANDARD 14)

add_executable(sfml_template main.cpp)
target_link_libraries(sfml_template sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)