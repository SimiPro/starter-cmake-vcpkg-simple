project(lib1)

find_package(Eigen3 CONFIG REQUIRED)

add_library(lib1 SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/my_header.cpp)

target_include_directories(lib1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(lib1 PUBLIC Eigen3::Eigen)

if (BUILD_TESTS)
    add_subdirectory(tests)
endif()


