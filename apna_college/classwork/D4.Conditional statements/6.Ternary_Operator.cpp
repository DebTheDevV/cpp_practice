// just a shorter way to write the if-ele statement 

#include <iostream>
using namespace std ;

int main (){
    //voting prob
    int age ;
    cout<< "enter age - " ;
    cin>>age ;

    bool isAdult =(age>=18)?true : false ;

    // largest of 2 nos 
    int a = 10 ;
    int b = 5 ;
    int largest = ( a>b ) ? a : b ;
    cout << largest << endl ;


    // odd or even 
    int num = 14 ;
    bool isEven = (num % 2 == 0 )? true : false ;


    return 0 ;
}