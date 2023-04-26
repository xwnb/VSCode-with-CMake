
cmake_minimum_required(VERSION 3.0.0)
project(testTop VERSION 0.1.0)

include_directories(${CMAKE_SOURCE_DIR}/3rdParties/Catch2)

add_executable(${PROJECT_NAME} UtilsTest.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain hello::UtilsLib)

include(CTest)
include(Catch)
catch_discover_tests(${PROJECT_NAME})