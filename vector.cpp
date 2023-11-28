#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::string> names;
  names.push_back("Amine");
  names.push_back("Ayoub");
  names.push_back("Khalid");
  names.push_back("Anass");

  names[1] = "Adnane";

  std::cout << "Vector" << std::endl;
  for (auto i : names) {
    std::cout << i << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
