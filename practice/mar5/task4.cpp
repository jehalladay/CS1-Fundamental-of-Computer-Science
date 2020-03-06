#include<iostream>

void smallerF(float&, float&);
using namespace std;
// void passByVal(int, int);


int main(void){
    float first = 0, second = 0;
    int a = 0, b = 1;

    cout << Enter value 1: ;
    cin >> first;
    cout << endl << enter value 2: ;
    cin >> second;
    smallerF(first, second);


    cout << The lowest value is:  << first << endl;

    return 0;
}

void smallerF(float& first, float& second) {

    if (first > second) {
        first = second;
    }

}
