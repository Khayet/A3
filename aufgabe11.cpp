#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <algorithm>
#include <vector>


TEST_CASE("filter", "[aufgabe11]")
{
  REQUIRE(std::all_of(v.begin(), v.end(), is_even));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}