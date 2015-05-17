#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <deque>
#include <list>
#include <vector>

//can only return vector, deque and list:
template<typename TRet, typename TFirst, typename TSecond>
TRet concatenate(TFirst const& lhs, TSecond const& rhs) {
  auto endIt = lhs.end();

  TRet res;
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
}

TEST_CASE("concatenate", "[aufgabe10]") {
  std::vector<char> v{'a', 'b', 'c'};
  std::list<char> l{'d', 'e', 'f'};

  //TODO: fix bug
  std::vector<char> v2;
  v2 = concatenate(v, l);
}

int main(int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}