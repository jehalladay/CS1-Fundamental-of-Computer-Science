#include<iostream>

using namespace std;

bool totalCups(int);

void printConversion(int);

int main() {

    int cups = 0;
    bool totCups = false;

    while (!totCups) 
    {
    cout << "Please enter the number of cups: ";
    cin >> cups;
    cout << endl;
    totCups = totalCups(cups);
    if (totCups)
        {
            printConversion(cups);
        } else 
        {
            cout << "error: wrong input format" << endl;
        }
    }
    return 0;
}



bool totalCups(int cups) {
    bool enough = false;

    if (cups > 0) {
        enough = true;
    }

    return enough;
}

void printConversion(int cups) {
    int gals = 0, quarts = 0, pints = 0;

    cout << "Units:\tGallons:\tQuarts\tPints" << endl;
    cout << "---\t-----\t\t-----\t-----\t" << endl;

    gals = cups/16;
    cups = cups%16;
    quarts = cups/4;
    cups = cups%4;
    pints = cups/2;
    cups = cups%2;

    cout << "Units:\t" << gals << "\t\t" << quarts << "\t" << pints << endl;

}
