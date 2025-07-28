#include <iostream>
using namespace std;

int main() {
    int a = 5; 
    int *ptr = &a;

    // Adding an integer to a pointer is valid: moves pointer ahead by that many elements
    int *ptr2 = ptr + 3;

    // Prints the memory address 3 ints ahead of 'a'
    cout << "ptr2 (ptr + 3) = " << ptr2 << "\n";
    cout << "ptr (address of a) = " << ptr << endl;

    cout << ptr2-ptr << endl ; // no of elemnts between them tht can be there

    // Note: Adding two pointers like ptr1 + ptr2 is invalid in C++
    // Only pointer + int or pointer - pointer is allowed
    int arr[20] = {1, 2, 3, 4, 5};  // ✅ Create an array of integers (rest default to 0)

    int *p1 = arr;                 // 📌 p1 points to the first element of the array (arr[0] = 1)

    int *p2 = p1 + 3;              // 📌 p2 points to the 4th element (arr[3] = 4)

    cout << p2 - p1 << endl;       // outputs 3 
    //p2 - p1 = 3 → means p2 is 3 elements ahead of p1
}
