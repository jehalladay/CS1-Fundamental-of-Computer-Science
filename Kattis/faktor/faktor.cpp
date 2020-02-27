#include<iostream>

using namespace std;

int main (){
    int published = 0, impact = 0, bribes = 0;

    cin >> published >> impact;

    bribes = impact - 1;
    bribes = bribes * published;
    bribes ++;

    cout << bribes << endl;


    return 0;
}