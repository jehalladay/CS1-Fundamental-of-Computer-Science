/* ******************************************************************
* Filename: task2.cpp                                               *
* By. James Halladay                                                *
* Project: task2/week 5 practicum                                   *
* Login: jehalladay                                                 *                                                  *
* File Description:                                                 *
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


#include<iostream>

using namespace std;

int main()
{

	char ch = '0';

	cin >> ch;

	if (ch == 'm')
	{
		cout << "Individual is married." << endl;
	} else if (ch == 's')
	{
		cout << "Individual is single." << endl;
	} else if (ch == 'd')
	{
		cout << "Individual is divorced." << endl;
	} else if (ch == 'w')
	{
		cout << "Individual is widowed." << endl;
	} else 
	{
		cout << "An invalid code was entered." << endl;
	}


	return 0;


}