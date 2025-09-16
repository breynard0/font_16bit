cmake_minimum_required(VERSION 3.31.6)

project(font_16bit)

# Set work directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set Generator
set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "" FORCE)

add_library(font_16bit STATIC
        library/src/font_16.c
        library/inc/font_16.h
)
target_include_directories(font_16bit
        PUBLIC
        src/inc
)

add_executable(font_16bit_tests
        tests/src/main.c
        tests/src/other.c
        tests/inc/main.h
        tests/inc/other.h
)
add_dependencies(
        font_16bit_tests font_16bit
)

add_library(test_lib STATIC IMPORTED)
set_property(TARGET test_lib PROPERTY
        IMPORTED_LOCATION "./lib/libfont_16bit.a")

target_include_directories(font_16bit_tests
        PRIVATE
        tests/inc
)
target_link_libraries(font_16bit_tests PRIVATE test_lib)