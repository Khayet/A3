#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <vector>

template<typename T>
void swap(T& lhs, T& rhs) {
  T copy{lhs};
  lhs = rhs;
  rhs = copy;
}

TEST_CASE("template", "[aufgabe9]") {
  std::vector<char> v{'a', 'b'};

  swap(v.at(0), v.at(1));

  REQUIRE(v.at(0) == 'b');
  REQUIRE(v.at(1) == 'a');
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}