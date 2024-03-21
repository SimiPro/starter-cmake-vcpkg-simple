
#include <catch2/catch_all.hpp>

#include <lib1/my_header.h>

TEST_CASE("MyHeader", "[lib1]") {
  SECTION("add") {
    REQUIRE(lib1::add(1, 2) == 3);
  }
}



