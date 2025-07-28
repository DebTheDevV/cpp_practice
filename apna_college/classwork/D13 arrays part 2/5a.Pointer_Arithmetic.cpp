/*
📌 Pointer Arithmetic:
We can use increment (++) and decrement (--) operators with pointers.
This moves the pointer forward or backward in memory based on the data type.
*/

#include <iostream>
using namespace std;

int main () {
    int a = 10;
    int *aptr = &a;

    // 🧠 aptr points to variable 'a'
    cout << aptr << endl;   // Prints the address of 'a'

    aptr++;  // ➕ Moves forward by 4 bytes (since int = 4 bytes)
    cout << aptr << endl;   // Prints new (increased) address

    aptr--;  // ➖ Moves backward by 4 bytes
    cout << aptr << endl;   // Back to original address

    char ch = 'a';
    char *chptr = &ch;

    // 🧠 chptr points to character 'a'
    cout << chptr << endl;  // Prints address of 'ch'

    chptr++;  // ➕ Moves forward by 1 byte (since char = 1 byte)
    cout << chptr << endl;  // New address (1 byte ahead)

    return 0;
}