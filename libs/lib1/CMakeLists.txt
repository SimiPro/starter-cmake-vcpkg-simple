project(lib1)

add_library(lib1 SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/my_header.cpp)

target_include_directories(lib1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


