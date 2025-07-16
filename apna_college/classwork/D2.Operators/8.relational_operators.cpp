#include <iostream>
using namespace std ; 

int main () {
    int a = 3 ; 
    int b = 5 ;
    int c = 3 ; 

    cout << (a > b ) << endl ; //False ->0
    cout << (a < b ) << endl ; // True -> 1 
    cout << (a >= b ) << endl ; //False ->0
    cout << (a <= b ) << endl ; // True -> 1 
    cout << (a == c ) << endl ; // True -> 1 
    cout << (a != c ) << endl ; //False ->0
    

    return 0 ;
}