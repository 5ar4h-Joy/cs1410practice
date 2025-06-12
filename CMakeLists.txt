cmake_minimum_required(VERSION 3.20)
project(cpp_starter_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp)
add_executable(ex0101 src/example0101.cpp)
add_executable(ex0201 src/example0201.cpp)
add_executable(ex0202 src/example0202.cpp)
add_executable(ex0203 src/example0203.cpp)
add_executable(ex0301 src/example0301.cpp)
add_executable(ex0302 src/example0302.cpp)
add_executable(ex0401 src/example0401.cpp)
add_executable(ex0402 src/example0402.cpp)
add_executable(ex0501 src/example0501.cpp)
add_executable(ex0502 src/example0502.cpp)