#include<iostream> 

using namespace std; 

const int SZ = 5; 

void FillArray(int a[], int size); 
void DisplayArray(int a[], int size); 
int FindLargest(const int a[], int size);



int main() 
{ 
 	int array[SZ];
    
    FillArray (array, SZ);
    DisplayArray (array, SZ);
    
    cout << "the largest value in the array is: " << FindLargest(array, SZ) << endl;
    
    return 0; 
} 



void FillArray(int a[], int size) 
{ 
    for (int i = 0; i < size; i++) 
    { 
        cout << "Enter element number ‘" << i+1 << "’: "; 
        cin >> a[i]; 
    } 
} 


void DisplayArray(int a[], int size) {

    for(int i = 0; i < size; i++) {
        cout << "The value stored in element " << i << " is: " << a[i] << endl;
    }

}; 


int FindLargest(const int a[], int size) {

    int largest = 0;

    for(int i = 0; i < size; i++) {
        if(a[i]>largest) {
            largest = a[i];
        }
    }


    return largest;
};
