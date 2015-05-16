#include <cstdlib> 
#include <vector> 
#include <list>
#include <iostream> 
#include <iterator>
#include <algorithm>
#include <map>

int main()
{
  std::list<unsigned int> list1(100);

  for (std::list<unsigned int>::iterator i = list1.begin(); i != list1.end(); ++i) {
    *i = std::rand() % 51;
  }

  std::vector<unsigned int> vec1(100);
  std::copy(list1.begin(), list1.end(), vec1.begin());

  std::copy(vec1.begin(), vec1.end(), std::ostream_iterator<unsigned int>(std::cout, "\n"));
  std::cout << "-------------------" << std::endl;

  std::map<unsigned int,int> ints{};
  for (int i = 0; i <= 50; ++i) {
    ints.insert(std::pair<unsigned int, int>(i, 0));
  }

  for (int i : vec1) {
    ints.at(i) += 1;
  }

  unsigned int numbersCount = 0;
  for (auto it = ints.cbegin(); it != ints.cend(); ++ it) {
    if (it->second != 0) ++numbersCount; 
  }

  std::cout << "not in list: " << std::endl;
  for (int i = 0; i <= 50; ++i) {
    if (ints[i] == 0) std::cout << i << std::endl;
  }

  std::cout << "-------------------" << std::endl;

  std::cout << "number of list members: " << numbersCount << std::endl;

  return 0;
}