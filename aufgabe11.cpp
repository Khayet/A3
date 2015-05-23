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

template<typename T, typename A>
T filter(T const& container, A const& pred) {
  container.erase(std::remove_if(container.begin(), container.end(), pred));
}

TEST_CASE("filter", "[aufgabe11]")
{
  std::vector<int> v{1,2,3,4,5,6};
  std::vector<int> alleven = filter(v, is_odd);
  REQUIRE(std::all_of(v.begin(), v.end(), is_even));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}