cmake_minimum_required(VERSION 3.14)

project(qt_homework2 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql)

add_executable(qt_homework2
  main.cpp
)
target_link_libraries(qt_homework2 Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(qt_homework2 Qt${QT_VERSION_MAJOR}::Network)
target_link_libraries(qt_homework2 Qt${QT_VERSION_MAJOR}::Sql)

install(TARGETS qt_homework2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
