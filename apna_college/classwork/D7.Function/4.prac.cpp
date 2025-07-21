#include <iostream>
using namespace std ; 

// to find out product of 2 numbers 
int prod(int a , int b){
    return a*b ;
}
//WAF to find a number is odd or even 
bool isEven(int n){
    if(n%2==0){
        return true ;
    }else{
        return false ;
    }
}

int main (){
    cout<<prod(10 , 5)<<endl ;

    cout << isEven(20)<<endl;
    cout << isEven(15)<<endl;
    return 0 ;
}