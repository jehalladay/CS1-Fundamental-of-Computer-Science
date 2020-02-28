#include<iostream>

using namespace std;

int main() {
    int g = 0, s = 0, c = 0, bp = 0;

    cin >> g >> s >> c;

    bp = (g * 3) + (s * 2) + c;

    if (bp < 2) {
        g = 0;
    } else if (bp < 5) {
        cout << "Estate or ";
    } else if (bp < 8) {
        cout << "Duchy or " ;
    } else {
        cout << "Province or ";
    }

    if (bp < 3) {
        cout << "Copper" << endl;
    } else if (bp < 6) {
        cout << "Silver" << endl;
    } else {
        cout << "Gold" << endl;
    }

    

    return 0;
}