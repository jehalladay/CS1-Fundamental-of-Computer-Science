/* 
**************************************************************************
Filename:
By. James Halladay
Project: task1/week 5 practicum
Login: jehalladay
Assignment No:
File Description:
CS1 - Foundations of Computer Science: C++
Date: 

**************************************************************************

I declare that all material in this assessment task is my work
except where there is clear acknowledgement                   
or reference to the work of others. I further declare that I  
have complied and agreed to the CMU Academic Integrity Policy 
at the University website.                                    
                                                    
Author's Name: James Halladay UID(700#): 700425363            
Date:                                               
                                                    
Date Last Modified:                                
**************************************************************************
*/



#include<iostream>

using namespace std;

void printStars();

int main() {

    cout << "before function call. \n" << endl;
    printStars();
    cout << "\n after function call" << endl;
    return 0;
}

void printStars() {
    int stars;
    cout << "Inside print stars. \n" << endl;
    cout << "How many stars to print?: ";
    cin >> stars;
    cout << endl;
    for (int i = 0; i < stars; i++) {
        cout << '*';
    }
    cout << endl;
}