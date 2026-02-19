cmake_minimum_required(VERSION 3.5)

project(tux-chat-client LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


find_package(Qt5 REQUIRED COMPONENTS Widgets Network Sql)

set(SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

add_executable(tux-chat-client ${SOURCES} file.qrc)

target_link_libraries(tux-chat-client PRIVATE
    Qt5::Widgets
    Qt5::Network
    Qt5::Sql
)
