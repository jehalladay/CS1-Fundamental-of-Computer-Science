#include<iostream>

using namespace std;

enum direction {
    North = 1,
    South = 2,
    East = 3,
    West = 4
};

void printDirection(direction);

int main(){

    direction dir = North;
    direction control = North;

    cout << "The current value of dir is: " << dir << endl;

    dir = static_cast<direction>(dir + 1);
    cout << "The current value of dir is: " << dir << endl;

    for(control = North; control <= 5; control = static_cast<direction>(control + 1))
        printDirection(control);


    return 0;
}


void printDirection(direction dir) {
    switch(dir) {
        case 1:
        cout << "North" << endl;
        break;
        case 2:
        cout << "South" << endl;
        break;
        case 3:
        cout << "East" << endl;
        break;
        default:
        cout << "West" << endl;
        break;

    }
}