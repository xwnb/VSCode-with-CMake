cmake_minimum_required(VERSION 3.0.0)
project(UtilsLib VERSION 0.1.0)

set(CMAKE_DEBUG_POSTFIX d)

add_library(${PROJECT_NAME} SHARED Utils.cpp)

add_library(hello::UtilsLib ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER Utils.h)

############################################################
# Install
############################################################

install(TARGETS ${PROJECT_NAME}
            RUNTIME DESTINATION bin
            LIBRARY DESTINATION lib
            ARCHIVE DESTINATION lib
            PUBLIC_HEADER DESTINATION include
)