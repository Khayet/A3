#include <iostream>
#include <algorithm>
#include <map>
#include <utility> //pair

int main(int argc, char* argv[]) {
  
  std::string name = "";
  std::string addr = "";
  std::map<std::string, std::string> persons;

  while(true) {
    std::cout << "please enter name:" << std::endl;
    std::cin >> name;
    std::cout << "please enter address:" << std::endl;
    std::cin >> addr;

    //TODO: finish input
    persons.insert(std::make_pair(name, addr));
  }

  return 0;
}