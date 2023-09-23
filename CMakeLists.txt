cmake_minimum_required(VERSION 3.12)

set(PICO_SDK_FETCH_FROM_GIT on)
set(PICO_BOARD pico_w)

include(pico_sdk_import.cmake)

project(PurdueHackersSignPi C CXX ASM)

set(CMAKE_CXX_STANDARD 11)

pico_sdk_init()

add_executable(sign
        main.cpp
        )

# pull in common dependencies
target_link_libraries(sign pico_stdlib pico_cyw43_arch_none hardware_pwm)

# create map/bin/hex file etc.
pico_add_extra_outputs(sign)

# add url via pico_set_program_url
# example_auto_set_url(blink)