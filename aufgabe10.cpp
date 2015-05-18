#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <deque>
#include <list>
#include <vector>

//can only return vector, deque and list:
/*template<typename TFirst, typename TSecond>
TFirst concatenate(TFirst const& lhs, TSecond const& rhs) {
  auto endIt = lhs.end();

  TFirst res;
  auto it = res.begin();

  for (auto iter = lhs.begin(); iter != lhs.end(); ++iter) {
    res.insert(it, iter);
    ++it;
  }

  it = res.back();

  for (auto iter = rhs.begin(); iter != rhs.end(); ++iter) {
    res.insert(it, iter);
    ++it;
  }

  return res;
}*/

template<typename T>
T concatenate(T const& first, T const& second) {
  T res;
  auto it = res.begin();

  for (auto iter = first.begin(); iter != first.end(); ++iter) {
    res.insert(it, iter);
    ++it;
  }

  it = res.back();

  for (auto iter = second.begin(); iter != second.end(); ++iter) {
    res.insert(it, iter);
    ++it;
  }

  return res;
}

TEST_CASE("concatenate", "[aufgabe10]") {
  std::vector<char> v{'a', 'b', 'c'};
  std::vector<char> l{'d', 'e', 'f'};

  //TODO: fix
  //std::vector<char> v2;
  std::vector<char> v2 = concatenate<std::vector<char>>(v, l);
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}