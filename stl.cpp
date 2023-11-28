#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> v;
  v.push_back(5);
  v.push_back(4);
  v.push_back(300);
  v.push_back(200);
  v.push_back(45);
  v.push_back(30);

  sort(v.begin(), v.end());

  cout << "Sorted vector" << endl;
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
