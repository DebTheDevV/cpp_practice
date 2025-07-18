// create an income tax calculator : 
#include <iostream>
using namespace std ; 

int main () {

    float income  , tax ; 
    cout << " Enter you income in Lakhs : " ;
    cin >> income ; 
    
    
    if (income<=5){
        tax = 0 ;
    }else if(income<=10){
        tax = (20 * income)/100 ;
    }else{
        tax = (30 * income)/100 ;
    }

    cout << " amount to be paid as tax :  Rs. " << tax * 100000 << endl ;

    return 0 ;
}