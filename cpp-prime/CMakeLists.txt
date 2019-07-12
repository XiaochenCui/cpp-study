cmake_minimum_required(VERSION 3.14)
project(cpp_study)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

file(GLOB SOURCES
        RELATIVE ${CMAKE_SOURCE_DIR}
        c*/*.cpp)
foreach (source_name ${SOURCES})
    string(REPLACE ".cpp" "" bin_name ${source_name})
    string(REPLACE "/" "-" bin_name ${bin_name})
    add_executable(${bin_name} ${source_name})
endforeach ()
