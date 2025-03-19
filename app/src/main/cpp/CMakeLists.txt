cmake_minimum_required(VERSION 3.22.1)

project("cpp_project")

add_library(${CMAKE_PROJECT_NAME} SHARED
        # List C/C++ source files with relative paths to this CMakeLists.txt.
        native-lib.cpp)

add_subdirectory(dependencies/libzip)

target_link_libraries(${CMAKE_PROJECT_NAME}
        android
        log
        libzip::zip
)