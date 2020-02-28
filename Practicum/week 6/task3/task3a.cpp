#include <iostream>
using namespace std;

int main()
{
    double x, sum = 0;


    while (!cin.eof())
    {   
        cin >> x;
        sum += x;
    }
    
    cout << sum << endl;

    return 0;
}
