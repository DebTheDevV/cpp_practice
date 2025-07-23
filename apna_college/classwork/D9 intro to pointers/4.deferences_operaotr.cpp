#include <iostream>
using namespace std ;

int main (){
    int a = 10 ;
    int *ptr = &a ;
    cout << &a << "\n" ;
    cout << *(&a) <<"\n" ; // ie. now since ptr = &a 
    cout << *(ptr) << "\n" ; //dereference operator 

    //by dereference operator , we can modify values 

    *ptr = 20 ;
    cout << a << "\n" ;

    return 0 ;
}