CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(camera_interface CXX)

SET(CMAKE_VERBOSE_MAKEFILE ON)
SET(PREFIX ${CMAKE_INSTALL_PREFIX})
SET(EXEC_PREFIX "\${prefix}")
SET(INCLUDEDIR "\${prefix}/include")
SET(CMAKE_BUILD_TYPE Debug)
SET(ARCH "i386")

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include/)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/local/include/)
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${EXTRA_CFLAGS} -Werror -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wdeclaration-after-statement -Wmissing-declarations -Wredundant-decls -Wunused-variable -Wunused-but-set-variable -Wreturn-type")

SET(SRCS
	src/CameraMain.cpp
	src/CameraBasic.cpp
	src/CameraAdvanced.cpp
	src/main.cpp
	#src/PyCppCamera.cpp
)

#add_subdirectory(pybind11)

# binary build
ADD_EXECUTABLE(camera_interface ${SRCS})
TARGET_LINK_LIBRARIES(camera_interface ${pkgs_LDFLAGS} "-ldl")
#TARGET_LINK_LIBRARIES(camera_interface pybind11)

#pybind11_add_module(camera_interface ${SRCS})
