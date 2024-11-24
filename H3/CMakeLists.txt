cmake_minimum_required(VERSION 3.5)

project(H3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H3 main.cpp




    H3a.h H3a.cpp
    H3b.h
    H3b.cpp )

include(GNUInstallDirs)
install(TARGETS H3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
