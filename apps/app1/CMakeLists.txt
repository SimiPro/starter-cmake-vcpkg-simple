project(app1)

set(CMAKE_CXX_STANDARD 23)

find_package(spdlog CONFIG REQUIRED)
find_package(effolkronium_random CONFIG REQUIRED)

add_executable(app1 main.cpp)

target_link_libraries(app1 PRIVATE spdlog::spdlog lib1 ${CUDNN_LIBRARIES})