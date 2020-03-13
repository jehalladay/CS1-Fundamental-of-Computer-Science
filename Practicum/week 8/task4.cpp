#include<iostream>

using namespace std;

int main(){

    // const int arraySize1 = 4;
    // const int arraySize2 = 5;

    // int array1[arraySize2] = {2, 3, 56, 7, 8};
    // int array2[arraySize1] = {8, 7, 6, 0};
    // int array3[arraySize1] = {8, 7, 60, 0};

    // float array4[arraySize1] = {8.5, 7.33, 6, 0};

    const int SZ = 10; 
    int iArray[SZ]; 

    for (int index = 1; index <= SZ; index++) {
        iArray [index - 1] = 3*index;
        cout << index << " " << iArray << endl;
    }

    return 0;
}