#include <iostream>
using namespace std;

const int MAXI = 5;
const int MAXJ = 4;

int main()
{
	int i, j;
	for(i = 0; i <= MAXI; i++)
	{
		cout << i;
		for (j = 0; j <= MAXJ; j++)
			cout << j;
			cout << endl;
	}

	return 0;
}