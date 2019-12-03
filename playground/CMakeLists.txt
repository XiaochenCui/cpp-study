cmake_minimum_required(VERSION 3.14)
project(cpp_study)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(bcc bcc.c)
