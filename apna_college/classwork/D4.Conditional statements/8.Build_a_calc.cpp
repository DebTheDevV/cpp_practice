//build a  calculator using switch for the 4 basic arithmetic operator (+ , - , * , /)

#include <iostream>
using namespace std ; 

int main (){
    int a , b ;

    cout << " enter a : " ;
    cin >> a ;

    cout << " enter n : " ;
    cin >> b ;

    char op ; 
    cout << " enter arithmetic operator : ";
    cin>> op ;

    switch(op){
        case '+' : cout << " a + b = " << a + b << endl ;
            break ;
        case '-' : cout << " a - b = " << a - b << endl ;
            break ;
        case '*' : cout << " a * b = " << a * b << endl ;
            break ;
        case '/' : cout << " a / b = " << a / b << endl ;
            break ;
        default : cout << "Invalid operator "<< endl ;  
    }
    return 0 ;
