#include <iostream>
using namespace std;

int main ()
{
    int num = 0, i = 0, sum = 0;

    cout << "Enter a positive integer: ";        
    cin >> num;
    int inc = 2;

    // for (i = 0; i<=num; i = inc)
    // {
    //     inc += i;
    //     sum += i;
    // }



    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << "The sum of even numbers is " << sum << endl;

    return 0;
}
