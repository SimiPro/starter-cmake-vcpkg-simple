cmake_minimum_required(VERSION 3.28)


# fetch content
include(FetchContent)
FetchContent_Declare(vcpkg
    GIT_REPOSITORY https://github.com/microsoft/vcpkg/
    GIT_TAG 2024.03.25
)
FetchContent_MakeAvailable(vcpkg)

set(CMAKE_TOOLCHAIN_FILE "${vcpkg_SOURCE_DIR}/scripts/buildsystems/vcpkg.cmake" CACHE FILEPATH "")

project(starter-cmake-vcpkg)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # for clangd

if (BUILD_TESTS) 
    find_package(Catch2 CONFIG REQUIRED)
    enable_testing()
endif(BUILD_TESTS)

add_subdirectory(libs)
add_subdirectory(apps)