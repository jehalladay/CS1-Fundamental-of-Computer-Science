/* ******************************************************************
* Filename: task34.cpp                                              *
* By. James Halladay                                                *
* Project: task3/week 5 practicum                                   *
* Login: jehalladay                                                 *
* File Description: gives numbers in a month denoted by an integer  *
*                     uses switch statement selector instead of if  *
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


	switch(month)
	{
	case 1:
		numOfDays = 31;
		break;
	case 2:
		numOfDays = 28;
		break;
	case 3:
		numOfDays = 31;
		break;
	case 4:
		numOfDays = 30;
		break;
	case 5:
		numOfDays = 31;
		break;
	case 6:
		numOfDays = 30;
		break;
	case 7:
		numOfDays = 31;
		break;
	case 8:
		numOfDays = 31;
		break;
	case 9:
		numOfDays = 30;
		break;
	case 10:
		numOfDays = 31;
		break;
	case 11:
		numOfDays = 30;
		break;
	case 12:
		numOfDays = 31;	
		break;

	default:
		cout << "Invalid input" << endl;
		return 0;
	}

	cout << "There are " << numOfDays << " days in this month\n";
		
	return 0;
}