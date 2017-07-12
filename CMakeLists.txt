cmake_minimum_required (VERSION 2.8.11)

set (CMAKE_VERBOSE_MAKEFILE 1)

set (CMAKE_C_COMPILER "/usr/bin/gcc")
set (CMAKE_CXX_COMPULER "/usr/bin/g++")

if (CMAKE_BUILD_TYPE MATCHES Debug)
    message ("-- Configuring a Debug build")
    set (CMAKE_C_FLAGS "-std=c99 -g -Wall")
    set (CMAKE_CXX_FLAGS "-std=c99 -g -Waill")
    add_definitions (-DDEBUG)
else (CMAKE_BUILD_TYPE MATCHES Debug)
    message ("-- Configuring a Release build")
    set (CMAKE_C_FLAGS "-std=c99 -Os -g -fdata-sections -ffunction-sections -fvisibility=hidden -Wall -Wl,--gc-sections,--build-id=none")
    set (CMAKE_CXX_FLAGS "-std=c99 -Os -g -fdata-sections -ffunction-sections -fvisibility=hidden -Wall -Wl,--gc-sections,--build-id=none")
endif (CMAKE_BUILD_TYPE MATCHES Debug)

include_directories (.)

add_subdirectory (lib1)
add_subdirectory (lib2)
add_subdirectory (lib3)
add_subdirectory (lib4)
add_subdirectory (test)
