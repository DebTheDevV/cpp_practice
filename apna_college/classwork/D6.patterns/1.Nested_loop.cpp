#include <iostream>
using namespace std ; 

int main () {
    int n ;
    cout<< "Enter no. of rows : " ;
    cin>>n ;
    //outer loop
    for(int i= 1 ; i <=n ; i++){
        //inner loop
        for(int j=1 ; j<=n ; j++){
            //work
            cout<< i<<" ";
        }
        cout<<endl ;
    }
    return 0 ;
}