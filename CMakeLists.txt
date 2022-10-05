cmake_minimum_required(VERSION 3.7)
project(qmlsink-multisink VERSION 1.0 LANGUAGES CXX)

# for unix platform, define install directories.
include(GNUInstallDirs)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Qt5
find_package(Qt5 COMPONENTS Core Qml Gui Widgets Quick REQUIRED)

include(FindPkgConfig)
if (!${PKG_CONFIG_FOUND})
    MESSAGE(FATAL_ERROR "pkg-config required. Please install it")
    return("Error - pkg-config not found")
endif ()

# GStreamer
set(PKG_CONFIG_USE_CMAKE_PREFIX_PATH ON)
pkg_check_modules(GSTREAMER_GL gstreamer-gl-1.0 REQUIRED)



qt5_add_resources(RESOURCES qmlsink-multi.qrc)
add_executable(qmlsink-multisink main.cpp ${RESOURCES} videoitem/videoitem.cpp)
target_link_libraries(
        qmlsink-multisink
        PRIVATE

        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Quick
)
target_include_directories(qmlsink-multisink PRIVATE ${GSTREAMER_GL_INCLUDE_DIRS} videoitem)
target_link_libraries(qmlsink-multisink PRIVATE ${GSTREAMER_GL_LIBRARIES})

