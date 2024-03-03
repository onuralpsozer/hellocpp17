# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Set CPP standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Project name
project(HelloCpp)

# Add the executable target from source files in the "src" directory
add_executable(hellocpp src/hello.cpp)
