#include <iostream>
using namespace std ; 

int main (){
    int a = 10 ;
    int &b = a ;// reference requires an initialization 
    cout << a  << endl ;
    cout <<  b << endl  ;// a and b refers to the same memory location 
    return 0;

}