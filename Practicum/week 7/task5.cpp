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

void passByVal(int);
void passByRef(int&);

int main(){
    int x = 10;

    passByVal(x);
    cout << "Afer calling passByVal\nx= " << x << endl;

    passByRef(x);
    cout << "Afer calling passByVal\nx= " << x << endl;

    return 0;
}

void passByVal(int x) 
{
    cout << "In passByVal\nx= " << x << endl;
    x++;
    cout << "In passByVal\nx= " << x << endl;
}

void passByRef(int& x) 
{ 
  x++; 
  cout << "In passByRef\nx = " << x << endl; 
  
} 
