/* 
These two function declarations are basically the same:
void printArr(int arr[]) {...}
void printArr(int *arr) {...}
Both mean: "I'm accepting an array of integers as input."
*/

#include <iostream>
using namespace std;

// Function that changes the first element of the array
void func(int arr[]) {
    arr[0] = 100;  // This will change the original array's first value
}

// Function that changes the second element of the array using a pointer
void func2(int *ptr) {
    ptr[1] = 2000;  // This sets arr[1] = 2000
}

int main() {
    int a = 5;
    int *ptr = &a;

    // This prints the memory address of variable 'a'
    cout << ptr << endl;

    // Create an array of 5 elements
    int arr[] = {1, 2, 3, 4, 5};

    // Find number of elements in the array
    int n = sizeof(arr) / sizeof(int);

    // Printing 'arr' shows the address of the first element (arr[0])
    cout << arr << endl;

    // Dereferencing the pointer to access values
    cout << *arr << endl;       // Prints arr[0] = 1
    cout << *(arr + 1) << endl; // Prints arr[1] = 2
    cout << *(arr + 2) << endl; // Prints arr[2] = 3

    // Arrays are passed by reference in functions (no copy is made)

    func(arr);  // Changes actual arr[0] to 100
    cout << arr[0] << endl;

    func2(arr); // Changes actual arr[1] to 2000
    cout << arr[1] << endl;

    return 0;
}
