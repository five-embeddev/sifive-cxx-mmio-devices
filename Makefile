EXTERN_PATH=extern
UTILS_PATH=${EXTERN_PATH}/development-utils/
SCRIPTS_PATH=${UTILS_PATH}/generators/
SDK_PATH=${EXTERN_PATH}/freedom-e-sdk
CMAKE_PATH=${EXTERN_PATH}/riscv-scratchpad/cmake/cmake/riscv.cmake
OUT_PATH=src

TARGET_DEVICE=sifive-hifive1-revb
BSP_PATH=${SDK_PATH}/bsp/${TARGET_DEVICE}
BUILD_DIR=build/${TARGET_DEVICE}
SRC_DIR=${OUT_PATH}/${TARGET_DEVICE}

all : \
		${SRC_DIR}/device.hpp \
		${SRC_DIR}/metal.default.lds \


#		build

clean : \
		${BUILD_DIR}/Makefile
	${MAKE} -C build clean

realclean :
	rm -f ${BUILD_DIR}/Makefile
	rm -rf ${BUILD_DIR}/CMakeFiles
	rm -r ${BUILD_DIR}/CMakeCache.txt
	rm -r ${BUILD_DIR}/cmake_install.txt

build : ${BUILD_DIR}/Makefile
	${MAKE} -C ${BUILD_DIR}/

# Generate build scripts with Cmake
${BUILD_DIR}/Makefile : ${CMAKE_PATH} src/${TARGET_DEVICE}/CMakeLists.txt
	if [ ! -d ${@D} ] ; then mkdir ${@D} ; fi
	cd ${@D}; cmake \
	    -G "Unix Makefiles" \
		-DCMAKE_TOOLCHAIN_FILE=../../${CMAKE_PATH} \
	    ../../${SRC_DIR}


# Generate SIFIVE and RISCV peripheral interface classes
${SRC_DIR}/device.hpp : ${SDK_PATH}/bsp/${TARGET_DEVICE}/design.svd
	if [ ! -d ${@D} ] ; then mkdir -p ${@D} ; fi
	${SCRIPTS_PATH}/svd_jinja.py \
		--out-path ${@D} \
	    --device device.hpp \
		--device test_device.cpp \
	    --peripheral peripheral_mmio_param.hpp \
	    --peripheral peripheral_mmio_regs.hpp \
	    --peripheral peripheral_mmio_dev.hpp \
	    --templates ${UTILS_PATH}/cxx17_mmio_interface/template/ \
	    ${SDK_PATH}/bsp/${TARGET_DEVICE}/design.svd

# Generate Sifive linker script
${BSP_PATH}/metal.default.lds : 
	${SDK_PATH}/scripts/ldscript-generator/generate_ldscript.py \
		freedom-e-sdk/

${SRC_DIR}/metal.default.lds : ${BSP_PATH}/metal.default.lds
	cp $< $@


.PHONY: all clean realclean build
.SUFFIXES:
