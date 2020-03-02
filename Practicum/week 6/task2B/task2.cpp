#include <iostream>
using namespace std;


int main()
{    	
	int num = 0, stop = 0;

    cin >> stop;
	cout << "Number\tSquare\tCube" << endl
  		<< "------\t------\t----" << endl;

  	for(num = 1; num <= stop; num++)
  		cout << num << '\t' 
			<< num * num << '\t' 
			<< num * num * num << endl;

	return 0;
}
