#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <algorithm>
#include <vector>

bool is_even(unsigned int n) {
  return ((n % 2) == 0);
}

bool is_odd(unsigned int n) {
  return !is_even(n);
}

TEST_CASE("all_of", "[aufgabe5]")
{
  std::vector<unsigned int> v(100);

  for (auto i = v.begin(); i != v.end(); ++i) {
    *i = std::rand() % 51;
  }

  v.erase(std::remove_if(v.begin(), v.end(), is_odd), v.end()); //STL-algorithm
  REQUIRE(std::all_of(v.begin(), v.end(), is_even));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}