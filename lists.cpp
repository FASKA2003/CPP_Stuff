#include <iostream>
#include <list>
#include <string>

int main(int argc, char *argv[]) {
  std::list<std::string> names;
  names.push_front("AYOUB");
  names.push_front("ANASS");
  names.push_front("AMINE");
  names.push_front("ILYAS");

  names.pop_front();

  std::cout << "List : " << std::endl;
  for (auto i : names) {
    std::cout << i << std::endl;
  }
  return 0;
}
