#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
  ofstream myfile;
  myfile.open("file.txt");
  myfile << "This is a test.\n";
  myfile.close();
  return 0;
}
