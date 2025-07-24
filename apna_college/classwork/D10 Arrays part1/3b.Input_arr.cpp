#include <iostream>
using namespace std ; 

//dynamically creating array
int main (){

    int n ;
    cout << " enter length of array : " ;
    cin>> n ;

    int arr [n];
    n = sizeof(arr)/sizeof(int) ;

    //input 
    for (int i = 0 ; i< n ; i++){
        cin>>arr[i]  ;
    }
     cout << "your array is : " ;
    //output
    for (int i= 0 ; i< n ; i++){
        cout << arr[i] <<" " ;
    }
    cout <<endl ;
    return 0 ;

}


