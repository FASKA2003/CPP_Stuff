#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
  int rows = 3, cols = 4;
  int **arr;

  arr = new int *[rows];
  for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; i < cols; i++) {
      arr[i][j] = i * j;
    }
  }

  std::cout << *(*(arr + 1) + 2) << std::endl;
  return 0;
}
