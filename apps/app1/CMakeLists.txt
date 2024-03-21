project(app1)

set(CMAKE_CXX_STANDARD 23)

find_package(spdlog CONFIG REQUIRED)
set(CMAKE_FIND_DEBUG_MODE TRUE)

find_path(VCPKG_FIND_CUDA vcpkg_find_cuda.cmake)
set(CMAKE_FIND_DEBUG_MODE FALSE)

message(STATUS "VCPKG_FIND_CUDA: ${VCPKG_FIND_CUDA}")

add_executable(app1 main.cpp)



target_link_libraries(app1 PRIVATE spdlog::spdlog lib1 ${CUDNN_LIBRARIES})