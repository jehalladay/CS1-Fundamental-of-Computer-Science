#include<iostream>
#include<cstring>

using namespace std;

int main() {

    int t = 0, c = 0, g = 0, count = 0, points = 0, len = 0, T = 0, C = 0, G = 0;
    string st = "";

    cin >> st;
    len = st.length();
    for (count = 0; count < len; count++) {
        if (st[count] == 'T' ) {
            t++;
            T++;
        } else if (st[count] == 'C' ) {
            c++;
            C++;
        } else if (st[count] == 'G' ) {
            g++;
            G++;
        }

        if (t>0&&c>0&&g>0) {
            points += 7;
            t--;
            c--;
            g--;
        }

    }

    points += (T*T) + (C*C) + (G*G);
    cout << points << endl;

    return 0;
}