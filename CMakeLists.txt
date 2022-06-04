cmake_minimum_required(VERSION 3.10)

# set the project name
project(CPP_STUDY)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PROJECT_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

set(TARGET_LIST pointer_to_pointer_arg)
foreach (TARGET ${TARGET_LIST})
    add_executable(${TARGET} src/pointer_and_reference/${TARGET}.cpp)
endforeach()