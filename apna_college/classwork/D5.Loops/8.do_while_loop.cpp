#include <iostream>
using namespace std;

int main() {
    // ✅ Print numbers from 1 to 5 using do-while
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);

    cout << endl;

    // ✅ Difference between do-while and while loop
    int val = 1;

    // This will run once even though val > 5 is false
    do {
        cout << "apna - college in do while loop" << endl;
    } while (val > 5);

    // This will not run at all because condition is false
    while (val > 5) {
        cout << "apna - college in while loop" << endl;
    }

    return 0;
}
