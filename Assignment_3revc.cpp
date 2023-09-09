#include <iostream>
using namespace std; 


//  Sorting Orders

// Write a program that uses two identical arrays  of just eight integers. 

// It should display the contents of the first array, then call a function 
// to sort the array using an ascending order bubble sort modified to print 
// out the array contents after each pass of the sort. 

// Next, the program should 
// display the contents of the second array, then call a function to sort the 
// array using an ascending order selection sort modified  to print out the array 
// contents after each pass of the sort.
 
  const int SIZE = 8; 
 
 void swap_(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        } 
        cout << endl;
        cout << "Sorting pass " << i+1 << ": "; 
        for (int l = 0; l < n; l++){
            cout << arr[l] << " ";
        }
        cout << "" << endl;
    }

}

void selectSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        
    }
}

 
 #include <iostream> 
 using namespace std;


 int main(){

int array1[8] = {5,9,2,8,4,11,13,59}; 
int array2[8] = {5,9,2,8,4,11,13,59};


int n = sizeof(array1) / sizeof(array1[0]);

cout << "(Bubble Sort) The origional array is: ";
for (int i = 0; i < SIZE; i++){
    cout << array2[i] << " "; 
}
cout << "" << endl; 

swap_(array1, n);

cout << " \nThe SWAPPED array is ";
for(int i = 0; i < SIZE; i++){
    cout << array1[i] << " "; 
}
cout << "\n" << endl;
cout << "\n" << endl;


cout << "(Selection Sort) The origional array is: ";
for (int i = 0; i < SIZE; i++){
    cout << array2[i] << " "; 
}
cout << "" << endl; 

swap_(array2, n);

cout << " \nThe SORTED array is ";
for(int i = 0; i < SIZE; i++){
    cout << array2[i] << " "; 
}
cout << "\n" << endl;



    return 0; 
 }


