
cmake_minimum_required(VERSION 3.5)

# Set the compiler 
set(CMAKE_CXX_STANDARD 17)

# Set the project name
project (map_project)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    list_part_3.cpp
)

# Add an executable with the above sources
add_executable(list3 ${SOURCES})

