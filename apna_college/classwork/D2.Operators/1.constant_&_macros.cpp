#include <iostream>
//symbolic constants
#define X 25
#define ll long long
using namespace std ;

int main () {
    const int num = 25 ; // pure code mei yeh value update nhi hone wali

    int num2 = 25 ;
    num2=35 ;
    //num=35 ;// error aa gya 
    const float PI = 3.14 ;
    const float g = 9.8  ; 

    //const int n ; // requires an initializer

    const int Y = 35 ; 
    cout << X ; //25 
    // code execute hone se peheli hi , X ka value lake ya de diya jayega

    cout << Y ; // execute krte  waqt , memory se fetch krke laya jayega and then runtime yeh print karwaya jayega 


    long long x ; // long long likhne mei alas aa rha 
    ll y ;// so macro use krke long long ka symbol ll bana diya 

    return 0 ;
    
}