#include<iostream>

using namespace std; 

void printPattern(int, char);


int main() {
    int n = 15;
    char symbol = '^';



    return 0;
}



void printPattern(int n, char symbol){


    for (int r = 0; r < n; r++) {
        for (int c = r; c < n; c++) {
            cout << symbol;
        }
        for (int c = n-r; c < n; c++){
            cout << ' ';
        }
        for (int c = n-r; c < n; c++){
            cout << ' ';
        }
        for (int c = r; c < n; c++) {
            cout << symbol;
        }
        cout << endl;
    }
    cout << endl;
}