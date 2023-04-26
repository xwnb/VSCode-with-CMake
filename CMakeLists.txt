cmake_minimum_required(VERSION 3.0.0)
project(hello VERSION 0.1.0)

enable_testing()

add_subdirectory(3rdParties/Catch2)

add_subdirectory(src)
add_subdirectory(test)


if( CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT )
  set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE STRING "The path to use for make install" FORCE)
endif()