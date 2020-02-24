/* ******************************************************************
* Filename: main.cpp                                                *
* By. James Halladay                                                *
* Project: task1/week 5 practicum                              *
* Login: jehalladay                                                 *
* Assignment No: 1                                                  *
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



#include <iostream>

using namespace std;

int main()
{
    int iNum = 0;
    float avg = 0;

    cin >> iNum;

    if (iNum % 2 == 0)
    {
        cout << iNum << " Is Even \n";
    } else
    {
        cout << iNum << " Is Odd \n";
    }


    return 0;
}
