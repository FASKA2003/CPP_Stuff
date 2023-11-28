#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  ifstream inputFile;
  inputFile.open("student.txt");
  string line, highestScorer;
  int highScore = -1;

  while (getline(inputFile, line)) {
    istringstream stringStream(line);
    string firstName, lastName;
    int score;
    stringStream >> firstName;
    stringStream >> lastName;
    stringStream >> score;
    if (score > highScore) {
      highScore = score;
      highestScorer = firstName + " " + lastName;
    }
  }

  inputFile.close();

  if (highScore != -1) {
    cout << "Highest Score: " << highScore << " by " << highestScorer << endl;
  } else {
    cout << "No valid data in the file." << endl;
  }
  return 0;
}
