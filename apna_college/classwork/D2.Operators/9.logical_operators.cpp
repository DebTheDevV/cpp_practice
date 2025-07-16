#include <iostream>
using namespace std ; 

int main () {
    // && and || are binary , while ! is unary
    cout << ((3 < 5 ) && (10 > 5 )) << endl ; // True ->1 
    cout << ((3 < 5 ) && (10 == 5 ))<< endl ; // False -> 0
    cout << ((3 == 5 ) || (10 == 5 ))<< endl ; // False -> 0

    cout << (! (3>5)) << endl ; // !(False) = True -> 1
    return 0 ;
}