#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  std::string item1 = "Hamburger";
  double price1 = 9.99;
  std::string item2 = "Pizza";
  double price2 = 11.99;

  std::stringstream menu;

  menu << item1 << "- $" << std::setprecision(2) << price1 << endl;
  menu << item2 << "- $" << std::setprecision(2) << price2 << endl;

  cout << menu.str();

  return 0;
}
