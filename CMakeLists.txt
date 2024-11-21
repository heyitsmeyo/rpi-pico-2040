cmake_minimum_required(VERSION 3.13)

include(${CMAKE_CURRENT_LIST_DIR}/pico_sdk_import.cmake)

project(bootloader_reset)

pico_sdk_init()

add_executable(bootloader_reset
    bootloader_reset.c
)

target_link_libraries(bootloader_reset pico_stdlib)

pico_add_extra_outputs(bootloader_reset)

