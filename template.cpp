#include <iostream>
#include <vector>

using namespace std;
template <typename T> class Container {
private:
  vector<T> data;

public:
  void add(T value) { data.push_back(value); }
  T get(int index) { return data[index]; }
};

int main(int argc, char *argv[]) {
  Container<int> intcontainer;
  intcontainer.add(10);
  intcontainer.add(20);
  cout << intcontainer.get(0) << endl;
  return 0;
}
