cmake_minimum_required(VERSION 3.0.0)
project(hello VERSION 0.1.0)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE hello::UtilsLib)

############################################################
# Install
############################################################

install(TARGETS ${PROJECT_NAME}
            RUNTIME DESTINATION bin
            LIBRARY DESTINATION lib
            ARCHIVE DESTINATION lib
            PUBLIC_HEADER DESTINATION include
)