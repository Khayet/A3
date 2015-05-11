#include <cstdlib> 
#include <vector> 
#include <list>
#include <iostream> 
#include <iterator>
#include <algorithm>

int main()
{
  std::list<unsigned int> list1(100);

  for (std::list<unsigned int>::iterator i = list1.begin(); i != list1.end(); ++i) {
    *i = rand() % 50;
  }

  std::vector<unsigned int> vec1(100);
  std::copy(list1.begin(), list1.end(), vec1.begin());

  std::copy(vec1.begin(), vec1.end(), std::ostream_iterator<unsigned int>(std::cout, "\n"));
  std::cout << "-------------------" << std::endl;

  for (int i = 0; i <= 50; ++i) {
    for (int j : vec1) {
      if (vec1[j] == i) vec1.erase(vec1.begin() + i); //TODO: FIX BUG PLOX
    }
  }

  std::copy(vec1.begin(), vec1.end(), std::ostream_iterator<unsigned int>(std::cout, "\n")); 

  return 0;
}