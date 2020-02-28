#include<iostream>
#include<cmath>


using namespace std;

int main() {
    double miles = 0, temp = 0;
    int result = 0;

    cin >> miles;
    
    temp = miles * 1000 * 5280;
    temp /= 4854;
    result = round(temp);

    cout << result << endl;


    return 0;
}