#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct studentType {
  string studentsFName[20];
  string studentsLname[20];
  int testScore[20];
};


studentType read(string);
void assign();
void top();
void output();

int main() {
    studentType data;

    data = read("data.txt");
  
  
  
     return 0;
};


studentType read(string fname) {
    studentType data;
    int inc = 0;
    ifstream file;
    file.open(fname);
    while (true) {
        if (inc < 20) {
            file >> data.studentsFName[inc] >> data.studentsLname[inc] >> data.testScore[inc];

            cout << inc << data.studentsFName[inc] << data.studentsLname[inc] << data.testScore[inc] << endl;

        } else {
            break;
        };
        inc++;
    };
  
  file.close();


  return data;
};
