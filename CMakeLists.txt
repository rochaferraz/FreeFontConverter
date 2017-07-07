cmake_minimum_required(VERSION 3.6)
project(freeFontConverter)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c inc/fontHeader.h)

find_package(Freetype REQUIRED)
include_directories(${FREETYPE_INCLUDE_DIRS} inc/)

SET(CMAKE_CXX_FLAGS "-O2 -std=c++11 -DCMAKE_OSX_DEPLOYMENT_TARGET:STRING=10.9")
# -DCMAKE_OSX_ARCHITECTURES:STRING=x86_64
SET(CMAKE_EXE_LINKER_FLAGS "-v")

include_directories(/Users/douglasrochaferraz/CLionProjects/freetype-2.7/include/)
include_directories(/Users/douglasrochaferraz/CLionProjects/freetype-2.7/include/freetype/)

add_executable(freeFontConverter ${SOURCE_FILES})

target_link_libraries(freeFontConverter ${FREETYPE_LIBRARIES})
