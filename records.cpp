#include <iostream>
#include <list>
#include <string>

using namespace std;
class Record {
private:
  int RollNo, PIN;
  string Name, Father_S_Name, DateBirth, AdmissionYear, TentYearPassing, Branch,
      State, Country;

public:
  Record(int R, int P, string N, string F, string D, string A, string T,
         string T, string B, string S, string C) {
    this->RollNo = R;
    this->PIN = P;
    this->Name = N;
    this->Father_S_Name = F;
    this->DateBirth = D;
    this->AdmissionYear = A;
    this->TentYearPassing = T;
    this->State = S;
    this->Country = C;
    this->Branch = B;
  }
  Record(Record &record) {
    this->RollNo = record.RollNo;
    this->PIN = record.PIN;
    this->Name = record.Name;
    this->Father_S_Name = record.Father_S_Name;
    this->DateBirth = record.DateBirth;
    this->AdmissionYear = record.AdmissionYear;
    this->TentYearPassing = record.TentYearPassing;
    this->State = record.State;
    this->Country = record.Country;
    this->Branch = record.Branch;
  }
};

void getInfo(Record &r) {
  int R, P;
  string N, F, D, A, T, S, C, B;
  cout << "Enter record info" << endl;
  cout << "Enter Roll Number : ";
  cin >> R;
  cout << "Enter PIN : ";
  cin >> P;
}

int main(int argc, char *argv[]) {
  list<Record> records;

  return 0;
}
