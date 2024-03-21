cmake_minimum_required(VERSION 3.28)


# fetch content
include(FetchContent)
FetchContent_Declare(vcpkg
    GIT_REPOSITORY https://github.com/microsoft/vcpkg/
    GIT_TAG 2024.01.12
)
FetchContent_MakeAvailable(vcpkg)

set(CMAKE_TOOLCHAIN_FILE "${vcpkg_SOURCE_DIR}/scripts/buildsystems/vcpkg.cmake" CACHE FILEPATH "")

project(starter-cmake-vcpkg)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # for clangd

# find cudatoolkit
find_package(CUDAToolkit REQUIRED)
message(STATUS "Found CUDA: ${CUDAToolkit_LIBRARY_DIR}")


add_subdirectory(libs)
add_subdirectory(apps)