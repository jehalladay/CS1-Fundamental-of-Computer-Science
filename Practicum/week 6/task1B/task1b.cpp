#include<iostream>

using namespace std;

int main(){
    int grade = 0;

    cout << "Enter the Grade: ";
    cin >> grade;
    cout << endl;

    while (grade <= 100 && grade >= 0)
    {
        cout << "The grade entered was: " << grade << endl << endl;
        cout << "Enter the Grade: ";
        cin >> grade;
        cout << endl;
    }


    return 0;
}