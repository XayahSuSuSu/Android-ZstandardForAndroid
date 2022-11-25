cmake_minimum_required(VERSION 3.18.1)

project("zstandard")

add_library(
        zstandard
        SHARED
        zstandard.cpp)

add_library(
        zstd
        STATIC
        IMPORTED)


find_library(
        log-lib
        log)

set_target_properties(
        zstd
        PROPERTIES IMPORTED_LOCATION
        ${CMAKE_CURRENT_SOURCE_DIR}/libzstd/${ANDROID_ABI}/libzstd.a)


target_link_libraries(
        zstandard
        zstd
        ${log-lib})
