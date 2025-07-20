#include <iostream>
using namespace std ; 

int main () {

    //my logic -
    int n = 4 , a = 65 ;
    for(int i =1 ; i<=n ; i++){
        for(int j= 1 ; j<= i ; j++){
            cout<< char(a)<<" ";
            a++ ;
        }
        cout<<endl ;
    }

    // ma'am's logic-- dono ek hi baat h
    n = 4 ;
    char ch = 'A' ;
    for(int i =1 ; i<=n ; i++){
        for(int j= 1 ; j<= i ; j++){
            cout<< ch++ <<" "; // cout krke , increment
        }
        cout<<endl ;
    }
    return 0 ;
}