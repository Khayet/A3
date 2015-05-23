#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <deque>
#include <list>
#include <vector>

template<typename T>
T concatenate(T const& first, T const& second) {
  T res;
  res.insert(res.begin(), first.begin(), first.end());
  res.insert(res.end(), second.begin(), second.end());

  return res;
}

TEST_CASE("concatenate", "[aufgabe10]") {
  std::vector<char> v{'a', 'b', 'c'};
  std::vector<char> l{'d', 'e', 'f'};

  std::vector<char> v2 = concatenate<std::vector<char>>(v, l);
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}