// wap where user can keep entering numbers till they enter a multiple of 10 


#include <iostream>
using namespace std ;

int main () {
    int n ;
    do{
        cout << " enter number = " ;
        cin >> n ;
        if( n % 10 == 0){
            break ;
        }
        cout<< " you enetered : " << n << endl ;
    }while(true);// while (1>0);
    return 0 ;
}