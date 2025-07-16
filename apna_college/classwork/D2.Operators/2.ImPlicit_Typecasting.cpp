// implicit conversion is done by compiler - type promotion to avoid data loss 

#include <iostream>
using namespace std ;

int main (){
    cout << ( 10 / 3 ) <<endl ; // 3  - int/int -> int
    cout << ( 10 / 3.0 ) <<endl ; // 3.333 - int/double -> double
    cout << 'A' + 1 << endl ; // 66 , as char ka typecasting ho gya to int

    cout << 'A'-0 << endl ; //65
    cout << 'a'-0 << endl ; //97
}