// Example program
#include <iostream>
#include <string>

//class Fish{};
//class Woman{};
//class Mermaid: public Womain, pubilc Fish{};

int main()
{
  std::string name;
  
  std::cout << "What is your name? ";
  
  getline (std::cin, name);
  
  std::cout << "Hello, " << name << "!\n";
}
