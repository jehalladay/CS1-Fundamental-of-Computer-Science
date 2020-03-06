#include<iostream>

float smallerF(float, float);
using namespace std;


int main(void){
    float first = 0, second = 0;

    cout << "Enter value 1: ";
    cin >> first;
    cout << endl << "enter value 2: ";
    cin >> second;
    


    cout << "The lowest value is: " << smallerF(first, second) << endl;

    return 0;
}

float smallerF(float first, float second) {

    if (first > second) {
        first = second;
    }
    return first;

}
