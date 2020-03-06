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

    The template for this program originally 
    written by James Halladay on 1/24/20 for 
    the FizzBuzz and Warehouse Kattis submissions
    in Javascript. On 3/3/2020 the template was 
    adapted to C++ by James Halladay.

**************************************************************************
Steps:
Step 1: Include necessary libraries, declare namespace, and declare 
        substitutions, globals, and function prototypes
Step 2: Create inputF function
Step 3: Create processor function
Step 4: Create repackager function
Step 5: Create output function
Step 6: Create a launch function
Step 7: Create Unit Test Function
Step 8: Create Main function with instructions to run the program 
        normally or run the tests based on the given arguments
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


// Step 1: Include necessary libraries, declare namespace, declare 
//         substitutions, Globals, and function prototypes

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;
typedef vector<string> vs;

vs inputF();
vs processor(vs);
vs repackager(vs);
vs output(vs);
int launch();
int unittest();


// Step 2: Create input function

vs inputF() {
    vs out;
    string sentinal = "00";
    int count = 0;


    cin >> sentinal;

    for(count = 0; count < 3; count++) {
        out.push_back(sentinal);
        cin >> sentinal;
    }
    
    return out;
}


// Step 3: Create processor function

vs processor(vs input) {

    int count = 0;
    int end = static_cast<int>(input[2]);
    cout << "input 3: " << input[2] << endl;

    // for (count=0; count<static_cast<int>(input[2]) ; count++) {

    // }
    

    return input;
}


// Step 4: Create repackager function

vs repackager(vs input) {
    return input;
}


// Step 5: Create output function

vs output(vs input){
    // int o = 0;

    if (input.empty()) {
        cout << "No input" << endl;
    } else {
        for (int o = 0; o < input.size(); o++) {
            cout << input[o] << endl;
        }
    }
    
    return input;
}


// Step 6: Create a launch function

int launch() {
    vs input;

    input = inputF();
    input = processor(input);
    input = repackager(input);
    output(input);
    
    return 0;
}


// Step 7: Create Unit Test Function

int unittest(){
    cout << "unittest" << endl;
    return 0;
}


// Step 8: Create Main function with instructions to run the program 
//         normally or run the tests based on the given arguments

int main(int argc, char* argv[]) {
    if (argc > 1 && strncmp(argv[1], "test", 4) == 0) {
        // cout << argc << " " << argv[1] << endl;
        unittest();
    } else {
        launch();
    }
    return 0;
}