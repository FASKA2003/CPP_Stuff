#include <iostream>
#include <map>
#include <string>

int main(int argc, char *argv[]) {
  std::map<std::string, int> maps;

  maps["AYOUB"] = 20;
  maps["ADNANE"] = 21;
  maps["KHALID"] = 23;

  std::cout << "MAP: " << std::endl;
  for (auto i : maps) {
    std::cout << i.first << "=" << i.second << std::endl;
  }
  return 0;
}
