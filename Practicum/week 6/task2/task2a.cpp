#include <iostream>
using namespace std;

int main()
{
    double x, sum = 0;

    while (x != -1)
    {
        cin >> x;
        sum += x;
    }
    cout << sum << endl;

    return 0;
}
