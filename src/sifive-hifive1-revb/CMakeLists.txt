
cmake_minimum_required(VERSION 3.10)

# set the project name
project(test CXX)

# specify the C++ standard
set ( CMAKE_CXX_FLAGS "-Os -std=c++17  -g -Wall -ffunction-sections")
set ( STACK_SIZE 0xf00 )
set ( TARGET test )
set ( SRC_MODULES test_sifive_hifive1_revb )

# add the executable

add_executable(${TARGET}.elf test_sifive_hifive1_revb.cpp) 
SET(LINKER_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/metal.default.lds")

set_target_properties(${TARGET}.elf PROPERTIES LINK_DEPENDS "${LINKER_SCRIPT}")
target_include_directories(${TARGET}.elf PRIVATE ../../extern/development-utils/cxx17_mmio_interface/include/ )

# Linker control
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -nostartfiles   -fno-exceptions  -Xlinker --defsym=__stack_size=${STACK_SIZE} -T ${LINKER_SCRIPT} -Wl,-Map=${TARGET}.map")

# Post processing command to create a disassembly file 
add_custom_command(TARGET ${TARGET}.elf POST_BUILD
        COMMAND ${CMAKE_OBJDUMP} -S  ${TARGET}.elf > ${TARGET}.disasm
        COMMENT "Invoking: Disassemble")

# Post processing command to create a hex file 
add_custom_command(TARGET ${TARGET}.elf POST_BUILD
        COMMAND ${CMAKE_OBJCOPY} -O ihex  ${TARGET}.elf  ${TARGET}.hex
        COMMENT "Invoking: Hexdump")

# Pre-processing command to create disassembly for each source file
foreach (SRC_MODULE ${SRC_MODULES})
  add_custom_command(TARGET ${TARGET}.elf 
                     PRE_LINK
                     COMMAND ${CMAKE_OBJDUMP} -S CMakeFiles/${TARGET}.elf.dir/${SRC_MODULE}.cpp.obj > ${SRC_MODULE}.s
                     COMMENT "Invoking: Disassemble ( CMakeFiles/${TARGET}.elf.dir/${SRC_MODULE}.cpp.obj)")
endforeach()


SET(DCMAKE_EXPORT_COMPILE_COMMANDS ON)


