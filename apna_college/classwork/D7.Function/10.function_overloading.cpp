#include <iostream>
using namespace std ;

int sum( int a , int b){
    cout << a+b <<endl ;
    return a+b ;
}

double sum(double a , double b){ //type different
    cout << a+b << endl ;
    return a+b ;
}

int sum (int a , int b , int c ){//parameter different
    cout << a+b+c <<endl ;
    return a+b+c ;
}



int main (){
    sum(2 ,3 );
    sum(12 , 13);
    sum(1.5  , 2.5);
    sum(1 ,2 , 3);

    

    return 0 ;
}