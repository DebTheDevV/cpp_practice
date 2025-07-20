//done on papar , lastly i=5 tak aaya , let's verify it here 

#include <iostream>
using namespace std ; 

int main () {
    int n ;
    cout<< "Enter no. of rows : " ;
    cin>>n ;

    int i ;
    //outer loop
    for(i= 1 ; i <=n ; i++){
        //inner loop
        for(int j=1 ; j<=n ; j++){
            //work
            cout<< i<<" ";
        }
        cout<<endl ;
    }
    cout <<"i = " << i <<endl ;
    return 0 ;
}