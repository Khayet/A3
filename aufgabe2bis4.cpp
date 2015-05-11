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
    *i = std::rand() % 50;
  }

  std::vector<unsigned int> vec1(100);
  std::copy(list1.begin(), list1.end(), vec1.begin());

  std::copy(vec1.begin(), vec1.end(), std::ostream_iterator<unsigned int>(std::cout, "\n"));
  std::cout << "-------------------" << std::endl;

  std::map<unsigned int,int> ints{};
  for (unsigned int i{0}; i < vec1.size(); ++i) {
    ints.insert(std::pair<unsigned int, int>(vec1[i], 0));
  }

  int numbersCount{0};
  std::cout << ints.size() << std::endl;

  return 0;
}