#include<iostream>

using namespace std;

void swap(int&, int&);

int main(){

    int first = 0, second = 0;

    cout << "Enter value 1: ";
    cin >> second;
    cout << endl;

    cout << "Enter value 2: ";
    cin >> second;
    cout << endl;

    cout << "Before the swap:" << endl;
    cout << "\tValue 1: " << first << endl;
    cout << "\tValue 2: " << second << endl;

    swap(first, second);

    cout << "After the swap:" << endl;
    cout << "\tValue 1: " << first << endl;
    cout << "\tValue 2: " << second << endl;
    
    return 0;
}



void swap(int& first, int& second) {

    int third = 0;

    third = second;
    second = first;
    first = third;
}