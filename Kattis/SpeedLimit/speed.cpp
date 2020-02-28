#include<iostream>

using namespace std;

int main() {

    // tt is total time, ct is current time
    int in = 0, counter = 0, s = 0, t = 0, tt = 0, distance = 0, ct = 0;

    cin >> in;

    while(in != -1) {
        
        for (counter = 0; counter < in; counter ++) {
            cin >> s >> t;
            ct = t-tt;
            tt = t;
            distance += ct*s;

        }

        cout << distance << " miles" << endl;
        ct = 0;
        tt = 0;
        distance = 0;
        cin >> in;

    }

    


    return 0;
}