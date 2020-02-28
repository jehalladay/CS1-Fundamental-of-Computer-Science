#include<iostream>

using namespace std;

int main() {

    int k = 0, n = 0, b = 0, a = 0, sum = 0, p = 0, counter = 0;

    cin >> p;

    for (counter = 0; counter < p; counter++) {
        cin >> k >> b >> n;
        
        while(n != 0) {
            a = n % b;
            n = n / b;
            sum += (a*a);
        }


        cout << k << " " << sum << endl;
        sum = 0;
        b = 0;
        k = 0;
        n = 0;
    }
    

    return 0;
}