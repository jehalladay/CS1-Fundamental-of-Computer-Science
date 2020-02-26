#include <iostream>
using namespace std;

int main()
{
    double x, sum = 0, sentinal = 0;

    cout << "Enter a sentinal value" << endl;
    cin >> sentinal;

    while (x != sentinal)
    {
        cin >> x;
        sum += x;
    }
    cout << sum << endl;

    return 0;
}
