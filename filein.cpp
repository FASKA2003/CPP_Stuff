#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  ifstream myfile;
  myfile.open("file.txt");
  string line;
  getline(myfile, line);
  cout << line << endl;
  myfile.close();
  return 0;
}
