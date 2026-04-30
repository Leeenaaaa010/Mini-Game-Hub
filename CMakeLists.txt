cmake_minimum_required(VERSION 3.10)

project(MiniGameHub)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable testing
enable_testing()

# Create main executable
add_executable(game_hub
    src/main.cpp
)