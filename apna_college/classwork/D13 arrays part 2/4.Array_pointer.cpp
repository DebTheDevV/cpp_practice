// 📌 Array name acts like a constant pointer (cannot be changed)

#include <iostream>
using namespace std;

int main () {
    // 🎯 Example with normal pointer:
    // You can change what the pointer points to
    // int x = 10;
    // int *ptr = &x;
    // int y = 25;
    // ptr = &y;  // ✅ Allowed: pointer now points to y

    // cout << *ptr << endl; // Output: 25

    // ❌ This kind of reassignment is NOT allowed with arrays

    int arr[5];
    cout << arr << "\n";  // prints the address of the first element (arr[0])

    int y = 25;
    // arr = &y; ❌ Error: 'arr' is like a constant pointer → cannot be reassigned

    return 0;
}