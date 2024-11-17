cmake_minimum_required(VERSION 3.5)

project(H2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H2 main.cpp
    H2_h.h
    Vaihe_1.cpp
    Vaihe_2.cpp
    Vaihe_3.cpp)

include(GNUInstallDirs)
install(TARGETS H2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
