#include <iostream>
using namespace std;

// Function to print the array elements
void printArr(int num[], int n) {
    // sizeof(num) here gives 8 (on most systems) because 'num' is just a pointer and size of integer pointer = 8
    cout << sizeof(num) << endl;

    // Loop through the array and print each element
    for(int i = 0; i <= n - 1; i++) {
        cout << num[i] << ",";
    }
    cout << endl;
}

/*
📘 What happens when we call a function with an array:
- When main() is called, a stack frame is created where 'arr[]' exists.
- When printArr() is called, another stack frame is created.
- Inside printArr, 'num[]' is just a pointer pointing to the same array in main.
- No new copy of the array is created.
- That's why sizeof(num) gives 8 (size of pointer), not the full array size.
- So we always pass the size of the array separately when sending it to a function.
*/

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(int);

    // Pass array and its size to the function
    printArr(arr, n);

    // sizeof(arr) here gives 20 (5 integers * 4 bytes each)
    cout << "arr size = " << sizeof(arr) << endl;

    return 0;
}