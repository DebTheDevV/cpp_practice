// 📌 Pointer arithmetic: Adding or subtracting integers from pointers

#include <iostream>
using namespace std;

// 🔁 Function to print elements of an array using pointer arithmetic
void printArr(int *ptr ,int  n){
    for(int i = 0; i < n; i++) {
        cout << *(ptr + i) << ",";  // Access element at index i using pointer
        // same as: cout << ptr[i];
    }
    cout << endl;
}

int main () {
    int a = 5;
    int *ptr = &a;

    // 🧠 Prints the memory address of variable 'a'
    cout << ptr << endl;

    // ➕ Adding 3 to pointer moves it 3 ints ahead in memory (3 * 4 bytes = 12 bytes ahead)
    int *c = ptr + 3;
    cout << c << endl;

    // ➖ Subtracting 3 from c should bring us back to ptr's address
    cout << c - 3 << endl;

    // 📦 Define an integer array
    int arr[] = {1, 2, 3, 4, 5};

    // 🔢 Find number of elements in the array
    int n = sizeof(arr) / sizeof(int);

    // 🖨️ Print all array elements using pointer-based function
    printArr(arr, n);

    return 0;
}