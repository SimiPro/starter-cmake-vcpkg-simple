include(CTest)
include(Catch)

set(TEST_BUNDLE ${PROJECT_NAME}_test)

file(GLOB SOURCES *.cpp)

# Compile all source files in this folder into one target--test bundle
add_executable(${TEST_BUNDLE} ${SOURCES})

# Specify which targets the test bundle depends on
target_link_libraries(${TEST_BUNDLE} PRIVATE
        Eigen3::Eigen
        Catch2::Catch2WithMain
        lib1
)

target_compile_definitions(${TEST_BUNDLE} PRIVATE
        TEST_DATA_DIR="${CMAKE_CURRENT_LIST_DIR}/data/")

# Register tests
catch_discover_tests(${TEST_BUNDLE})