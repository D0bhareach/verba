cmake_minimum_required(VERSION 3.27.0)

# Project name
project(verba VERSION 0.1.0 LANGUAGES CXX)

# Create executable
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED )
qt_standard_project_setup()

# add all subdirectories of the Project including src/
add_subdirectory(src)

# set directory to executable
set_target_properties(verba PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin"
)
