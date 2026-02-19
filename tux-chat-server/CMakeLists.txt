cmake_minimum_required(VERSION 3.5)

project(tux-chat-server LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(QT NAMES Qt5 REQUIRED COMPONENTS Core Network Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network Widgets)

set(SOURCES
    main.cpp
    dialog.cpp
    dialog.h
    dialog.ui
    server.cpp
    server.h
)

add_executable(tux-chat-server ${SOURCES}
    resources.qrc)

target_link_libraries(tux-chat-server PRIVATE
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Network
    Qt${QT_VERSION_MAJOR}::Widgets
)
