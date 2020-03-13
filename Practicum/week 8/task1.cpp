#include<iostream>

using namespace std;

// const int SIZE = 5;

int main()
{
    int SIZE = 0;

    cout << "How many values would you like to calculate the max value for?" << endl;
    cin >> SIZE;
    cout << endl;

    int score[SIZE], max;

    cout << "Enter " << SIZE << " scores: \n";

    for (int i = 0; i < SIZE; i++) 
        cin >> score[i];

    max = score[0];

    for(int i = 1; i < SIZE; i++)
    {
        if (score[i] > max) {
            max = score[i];
        }
    }

    cout << "Max score is: " << max << endl;

    return 0;
}