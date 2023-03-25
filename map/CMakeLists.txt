
cmake_minimum_required(VERSION 3.5)

# Set the compiler 
set(CMAKE_CXX_STANDARD 17)

# Set the project name
project (map_project)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    map_part_4.cpp
)

# Add an executable with the above sources
add_executable(map4 ${SOURCES})

