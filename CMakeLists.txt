cmake_minimum_required(VERSION 3.21)
project(cmake_glob_test)

set(CMAKE_CXX_STANDARD 14)

file(GLOB GLOBBED_HEADERS "${CMAKE_CURRENT_LIST_DIR}/src/*.h")
file(GLOB GLOBBED_SOURCES "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")

add_subdirectory(lib)

add_executable(cmake_glob_test main.cpp ${GLOBBED_HEADERS} ${GLOBBED_SOURCES})

target_link_libraries(cmake_glob_test glob_test_lib)
