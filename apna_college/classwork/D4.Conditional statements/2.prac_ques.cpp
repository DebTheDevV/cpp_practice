#include <iostream>
using namespace std ; 

int main () {

    //print the largest of two numbers

    int a , b  ;
    cout << " enter ur first number : " ;
    cin >> a ;

    cout << " enter ur first number : " ;
    cin >> b ;

    if (a>b){
        cout << "the largest number is : " << a << endl ;
    }else {
        cout << "the largest number is : " << b << endl ;
    }


    //Print a number is odd or even 

    int num ; 
    cout << "enter a num : " ;
    cin>>num ; 

    if(num % 2 == 0){
        cout << num << " is even." << endl ;
    }else{
        cout << num << " is odd. " << endl ;
    }
    return 0 ;
}