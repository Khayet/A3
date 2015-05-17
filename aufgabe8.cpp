#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <algorithm>
#include <vector>
#include "circle.hpp"


bool operator<(Circle const& lhs, Circle const& rhs) {
  return (lhs.radius() < rhs.radius());
}

bool operator==(Circle const& lhs, Circle const& rhs) {
  return (lhs.radius() == rhs.radius());
}

bool operator>(Circle const& lhs, Circle const& rhs) {
  return (lhs.radius() > rhs.radius());
}

TEST_CASE("container", "[aufgabe8]") {
  //generate vector "container" with a 100 circles with a radius of 0-100:
  std::vector<Circle> container;

  for (unsigned int i=0; i < 100; ++i) {
    container.push_back( Circle{static_cast<double>(std::rand() % 100)} );
  }

  std::sort(container.begin(), container.end());

  REQUIRE(std::is_sorted(container.begin(), container.end()));
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}