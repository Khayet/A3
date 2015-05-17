#include <iostream>
#include <algorithm>
#include <map>
#include <utility> //pair

int main(int argc, char* argv[]) {
  
  std::string name = "";
  std::string addr = "";
  std::map<std::string, std::string> persons;

  while(true) {
    std::cout << "please enter names (or 'finish'): ";
    std::getline(std::cin, name);

    if (name == "finish") break;

    std::cout << "please enter address: ";
    std::getline(std::cin, addr);

    persons.insert(std::make_pair(name, addr));
  }

  std::cout << "search for person: ";
  std::getline(std::cin, name);
  
  auto i = persons.find(name);

  if (i != persons.end()) {
    std::cout << "The address of " << name << " is: " 
              << i->second << "\n";
  } else {
    std::cout << "No persons with name " << name << " found." << "\n";
  }

  return 0;
}