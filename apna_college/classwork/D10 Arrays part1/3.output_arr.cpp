#include <iostream>
using namespace std ;

int main () {
    // output
    //array1 -
    int arr [5]= {7 , 5 , 2 , 1 , 3} ;  // index= length-1
    int n = sizeof(arr)/sizeof(int) ;

    for ( int i= 0 ; i<=n-1 ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;
    //array 2 -

    int arr_ [25]= {7 , 5 , 2 , 1 , 3} ;  // index= length-1
    int n_ = sizeof(arr_)/sizeof(int) ;

    for ( int i= 0 ; i<=n_-1 ; i++){
        cout << arr_[i] << " " ;
    }
    cout << endl ; 
}