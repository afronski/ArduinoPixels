#
#  PixelApp
#  CMakeLists.txt
#
#  Created on: 2014/12/01
#      Author: Hans Robeers (https://github.com/hrobeers)
#

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

# Sources
set(SRC
    main.cpp
)

# Headers
set(HDR
)

if (EMSCRIPTEN)
    set(CMAKE_EXECUTABLE_SUFFIX ".html")

    option(EMSCRIPTEN_SDL2_DIR "SDL-emscripten root dir." OFF)
    if (EMSCRIPTEN_SDL2_DIR)
        INCLUDE_DIRECTORIES("${EMSCRIPTEN_SDL2_DIR}/include")
    else()
        MESSAGE(FATAL_ERROR "Variable EMSCRIPTEN_SDL2_DIR is not defined")
    endif()
endif()

#
# The executable
#

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_executable(PixelApp WIN32 ${SRC} ${HDR})


#
# Subdirectories
#

add_subdirectory(../libraries/PixelShared "${CMAKE_SOURCE_DIR}/libraries/PixelShared")


#
# Linking
#

target_link_libraries(PixelApp
    PixelShared
    PixelGame
)
