#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> userInts;
  int size, value;
  std::cout << "Enter the number of elements that you want to process :"
            << std::endl;
  std::cin >> size;
  for (int i = 0; i < size; i++) {
    std::cin >> value;
    userInts.push_back(value);
  }
  std::cout << "The vector before processing : ";
  for (auto i : userInts) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::sort(userInts.begin(), userInts.end());

  std::cout << "The vector After processing : ";
  for (auto i : userInts) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
