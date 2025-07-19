#include <iostream>
using namespace std ;

int main (){
    // for( initialization , condition , updation ) {
    //do some work 
    //}
    for( int num = 1  ; num <=5 ; num++){
        cout<< num << " " ;
    }
    cout<< endl ;
    //cout << "last num " << num << endl  ; lopp ka variable sirf loop mein kaam karta
    // to get this we need to declare the variable  outside loop

    int i ;
    for (i=1 ; i<=5 ; i++){
        cout << i << " " ;
    }
    cout<<endl ;
    cout<< "last num = " << i << endl ;
        return 0 ;
}