#include<iostream>

using namespace std;

int main () {
    int first = 0, second = 0, term = 0, count = 0, result = 0;

    cin >> first >> second >> term;

    while (count < (term - 2)) {
        result = first + second;
        first = second;
        second = result;
        count++;
    }

    cout << result << endl;
    return 0;


}