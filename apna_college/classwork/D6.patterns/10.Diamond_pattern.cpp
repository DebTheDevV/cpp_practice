#include <iostream>
using namespace std ;

int main(){
    int n = 4 ;
    //upper half
    for(int i=1; i<=n ; i++){
        //spaces
        for(int j=1 ; j<=n-i ; j++){
            cout << "  ";
        }
        //star
        for(int j=1 ; j<=2*i-1 ; j++){
            cout<<"* ";
        }cout<<endl ;
    }
    //lower half
    for(int i=n ;i>=1 ; i--){
        //spaces
        for(int j=1 ; j<=n-i ; j++){
            cout<<"  ";
        }
        //star
        for(int j=1 ;j<=2*i-1 ; j++){
            cout<<"* ";
        }
        cout<<endl ;

    }return 0;
}