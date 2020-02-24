/* ******************************************************************
* Filename: task3.cpp                                               *
* By. James Halladay                                                *
* Project: task3/week 5 practicum                                   *
* Login: jehalladay                                                 *                                                  *
* File Description: gives numbers in a month denoted by an integer  *
*                                                                   *
*                                                                   *
*                                                                   *
*                                                                   *
* I declare that all material in this assessment task is my work    *
* except where there is clear acknowledgement                       *
* or reference to the work of others. I further declare that I      *
* have complied and agreed to the CMU Academic Integrity Policy     *
* at the University website.                                        *
*                                                                   *
* Author’s Name: James Halladay UID(700#): 700425363                *
* Date: 2/19/2020                                                   *
*                                                                   *
* Date Last Modified: 2/19/2020                                     *
******************************************************************* */


#include <iostream>

using namespace std;

int main()
{

	int numOfDays = 0, month = 0;
	cout << "Enter month: ";

	cin >> month;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		numOfDays = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		numOfDays = 30;
	else // February
		numOfDays = 28;
	cout << "There are " << numOfDays << " days in this month\n";
	
	
	return 0;
}