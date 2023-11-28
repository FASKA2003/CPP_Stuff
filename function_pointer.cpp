#include <iostream>

int add(int a, int b) { return a + b; }

int main(int argc, char *argv[]) {
  int (*p)(int, int);
  p = &add;
  int result = (*p)(5, 20);
  std::cout << result << std::endl;
  return 0;
}
