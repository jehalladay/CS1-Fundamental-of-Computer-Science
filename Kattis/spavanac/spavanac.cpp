#include<iostream>

using namespace std;

int main() {

    int hours = 0, mins = 0;

    cin >> hours >> mins;

    if (mins > 44) {
        cout << hours << " " << mins - 45 << endl;
    } else if (hours == 0) {
        mins = (mins+15);
        hours = 23;
        cout << hours << " " << mins << endl;
    } else {
        mins = (mins+15);
        cout << hours - 1 << " " << mins << endl;

    }



    return 0;
}