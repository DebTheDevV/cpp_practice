// 📌 Comparing two pointers in C++:

#include <iostream>
using namespace std ; 

int main () {
    int arr[20] = {1, 2, 3, 4, 5};  
    int *p1 = arr;                 
    int *p2 = p1 + 3;  

    cout << (p2 > p1) << endl;  // ✅ true (1) → p2 points to a higher index in the array
    cout << (p1 == arr) << endl;  // ✅ true (1) → p1 was set to point at the first element (same as arr)

    return 0 ;
}