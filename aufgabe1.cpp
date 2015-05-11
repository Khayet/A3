#include <cstdlib> // std::rand()
#include <vector> // std::vector<>
#include <list> // std::list<>
#include <iostream> // std::cout
#include <iterator> // std::ostream_iterator<>
#include <algorithm> // std::reverse, std::generate

int main()
{
  std::vector<int> v0(10);

  for (std::vector<int>::iterator i=v0.begin(); i!=v0.end(); ++i) {
      *i = std::rand();
  }
  std::copy(std::begin(v0), std::end(v0), std::ostream_iterator<int>(std::cout, "\n")); 
  //fuellt v0 mit random integers und gibt v0 aus

  std::list<int> l0(v0.size());
  std::copy(std::begin(v0), std::end(v0), std::begin(l0));

  std::list<int> l1(std::begin(l0), std::end(l0));
  std::reverse(std::begin(l1), std::end(l1));
  std::copy(std::begin(l1), std::end(l1), std::ostream_iterator<int>(std::cout, "\n")); 
  //gibt die 10 randoms reversed aus

  l1.sort();
  std::copy(l1.begin(), l1.end(),
            std::ostream_iterator<int>(std::cout, "\n")); 
  //gibt l1 sortiert aus

  std::generate(std::begin(v0), std::end(v0), std::rand);
  std::copy(v0.rbegin(), v0.rend(), 
            std::ostream_iterator<int>(std::cout, "\n"));
  //gibt v0 reversed aus

  return 0;
}