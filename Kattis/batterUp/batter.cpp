#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int bats = 0, counter = 0, batsFinal = 0;
    double average = 0, bases = 0, top = 0;

    cin >> bats;

    batsFinal = bats;

    for (counter = 0; counter < bats; counter++) {
        cin >> bases;
        if (bases == -1) {
            batsFinal--;
            continue;
        }
        top += bases;
    }

    average = top/batsFinal;

    cout << fixed << setprecision(7) << average << endl;
    return 0;
}