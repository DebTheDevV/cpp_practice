#include <iostream>
using namespace std;

// Passing arguments by value
void changeA_by_value(int a) {
    a = 20;  // Changing the value inside the function
    cout << "Inside function (a changed) = " << a << "\n";
}

//passing argument by pointers
void changeA_by_pointers(int *pointer){
    *pointer = 20 ;//dereference operator
    cout << " inside function(a changed ) = " << *pointer << "\n" ;
}

//passing argument by reference
void changeA_by_ref(int &para){
    para = 30 ;
    cout << "inside function ( a changed ) = " << para << "\n" ;
}

int main() {
    int a = 10;
    
    cout << "Before function call, a = " << a << "\n";
    changeA_by_value(a);
    cout << "After value function call, a = " << a << "\n\n";  // Value of 'a' remains unchanged


    changeA_by_pointers(&a);
    cout <<"After pointer function call , a = " << a <<"\n\n";// value of 'a" gets modified as pointers target the address of a directly 

    changeA_by_ref(a);
    cout << "After reference function call , a =  " << a <<  "\n\n" ; //  a and &para are same , hence they target the same address




    return 0;
}