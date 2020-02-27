#include<iostream>
#include<iomanip>

using namespace std;

int main (){
    int iter = 0, counter = 0;
    double b = 0, p = 0, result = 0, abpm = 0;

    cin >> counter;

    for (iter = 0; iter < counter; iter++) {
        cin >> b >> p;
        abpm = 60 / p;
        result = b * 60;
        result = result / p;
        cout << fixed << setprecision(4) << result - abpm << " " << result << " " << result + abpm << endl;

    }
 


    return 0;
}