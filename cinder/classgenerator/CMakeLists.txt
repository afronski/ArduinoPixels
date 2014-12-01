#
#  ClassGenerator
#  CMakeLists.txt
#
#  Created on: 2014/12/01
#      Author: Hans Robeers (https://github.com/hrobeers)
#

cmake_minimum_required(VERSION 2.8.11)


#
# Project settings
#

project(ClassGenerator)


#
# Build flags & compiler settings
#

# Define the Build flags
option(CINDER_INCLUDE_DIR "Cinder's include dir.")
option(CINDER_LIB_DIR "Cinder's lib dir.")
option(CCache "Build using ccache." OFF)

# Optionally enable ccache
if(CCache)
    SET_PROPERTY(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
endif()

# Set the compilation flags
set(CMAKE_VERBOSE_MAKEFILE OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3 -fomit-frame-pointer -finline-functions -ffast-math")


#
# Find and include external dependencies
#

# Boost
find_package(Boost REQUIRED COMPONENTS system filesystem)
if(Boost_FOUND)
  message(STATUS "Including Boost from: ${Boost_INCLUDE_DIRS}")
  include_directories(${Boost_INCLUDE_DIRS})
endif()

# Curl
find_package(CURL REQUIRED)
if(CURL_FOUND)
  message(STATUS "Including Boost from: ${CURL_INCLUDE_DIRS}")
  include_directories(${CURL_INCLUDE_DIRS})
endif()

# OpenGL
find_package(OpenGL REQUIRED)
if(OPENGL_FOUND)
  message(STATUS "Including Boost from: ${OPENGL_INCLUDE_DIRS}")
  include_directories(${OPENGL_INCLUDE_DIRS})
endif()

# Zlib
find_package(ZLIB REQUIRED)
if(ZLIB_FOUND)
  message(STATUS "Including Boost from: ${ZLIB_INCLUDE_DIRS}")
  include_directories(${ZLIB_INCLUDE_DIRS})
endif()


#
# Source files
#

# Sources
set(SRC
    src/classgeneratorApp.cpp
)

# Headers
set(HDR
)


#
# The executable
#

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_executable(ClassGenerator WIN32 ${SRC} ${HDR})


#
# Linking
#

INCLUDE_DIRECTORIES(${CINDER_INCLUDE_DIR})
target_link_libraries(ClassGenerator
    ${Boost_LIBRARIES}
    ${CURL_LIBRARIES}
    ${OPENGL_LIBRARIES}
    ${ZLIB_LIBRARIES}
    ${CINDER_LIB_DIR}/libcinder.a
)
