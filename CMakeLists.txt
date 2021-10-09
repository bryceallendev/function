# @file CMakeLists.txt
# 
# CMake files for functional decomposition examples

cmake_minimum_required(VERSION 3.14)

# project info
project(Functions)

# force release debug since used for demonstration
set(CMAKE_BUILD_TYPE Debug)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Turn on warnings
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # standard warnings
    add_compile_options(-Wall)
endif()

# Assume each *_d.cpp file is a separate application with an
# associated *.hpp and *.cpp, e.g., average.hpp, average.cpp, average_d.cpp
file(GLOB APPLICATIONS "*.hpp")

# Generate executable for each application
foreach(APP ${APPLICATIONS})

    # Use basename (no path, no extension) of .cpp file for application name
    get_filename_component(APPBASENAME "${APP}" NAME_WLE)

    # Application is based on .cpp file only
    add_executable(${APPBASENAME} ${APPBASENAME}_d.cpp ${APPBASENAME}.cpp)

endforeach()

# Setup a run command that runs all applications
add_custom_target(run DEPENDS run-cmd)
add_custom_command(OUTPUT run-cmd COMMAND date)
set_source_files_properties(run-cmd PROPERTIES SYMBOLIC "true")

# Add each application to the run command
foreach(APP ${APPLICATIONS})
    get_filename_component(APPBASENAME "${APP}" NAME_WLE)
    add_custom_command(OUTPUT run-cmd APPEND
        # applications called with file both on stdin and command line
        COMMAND echo ${APPBASENAME}
        COMMAND ./${APPBASENAME}
    )
endforeach()
