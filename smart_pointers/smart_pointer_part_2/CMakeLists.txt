
cmake_minimum_required(VERSION 3.5)

# Set the compiler 
set(CMAKE_CXX_STANDARD 17)

# Set the project name
project (smart_pointer_project)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/smart_pointer_part_2.cpp
    src/main.cpp
)

# Add an executable with the above sources
add_executable(smart_pointer_part_2 ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(smart_pointer_part_2
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)