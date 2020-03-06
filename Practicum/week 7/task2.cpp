
#include<iostream>

using namespace std;

int getAge();

int main() {
    int age = 0;
    // if (getAge () > 0) {
    //     cout << "\nAre you really THAT old?" << endl;  
    // } else {
    //     cout << "You entered an invalid age!" << endl;  return 0; 
    // } 

    // cout << "Are you really " << getAge() << " years old or did you make a mistake?" << endl;

    do {
        age = getAge();
    } while (age < 1 || age > 120);


    return 0;
}

int getAge() {
    int age;
    cout << "Please enter your age: ";

    cin >> age;

    if (age > 0 && age < 121) {
        cout << "\nAre you really THAT old?" << endl;  
    } else {
        cout << "You entered an invalid age!" << endl;  return 0; 
    } 

    return age;
}

