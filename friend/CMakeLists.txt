
cmake_minimum_required(VERSION 3.5)

# Set the compiler 
set(CMAKE_CXX_STANDARD 17)

# Set the project name
project (friend_project_part_1)

set(SOURCES
    src/friend_class_part_1.cpp
    src/main.cpp
    include/friend_class_part_1.h
)

# Add an executable with the above sources
add_executable(friend_project_part_1 ${SOURCES})

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(friend_project_part_1
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)