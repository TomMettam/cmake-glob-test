project(cmake_glob_lib)

set(CMAKE_CXX_STANDARD 14)
file(GLOB GLOBBED_HEADERS "${CMAKE_CURRENT_LIST_DIR}/src/*.h")
file(GLOB GLOBBED_SOURCES "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")
add_library(glob_test_lib ${GLOBBED_HEADERS} ${GLOBBED_SOURCES})