cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

# create project
project(NarrateEngine)

# add executable
add_executable(NarrateEngineLauncher NarrateEngine.cpp)

# add dependencies
include(cmake/CPM.cmake)

CPMAddPackage("gh:fmtlib/fmt#7.1.3")
CPMAddPackage("gh:pulseaudio/pulseaudio")

# link dependencies
target_link_libraries(NarrateEngineLauncher fmt::fmt pulseaudio::pulseaudio)
