//Write a function to print if a number is prime or not 

#include <iostream>
using namespace std ;

bool isPrime(int n){
    if(n==1){
        return false ;
    }
    for (int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            return false ;
        }
    }
    return true ;
}

int main (){
    cout << isPrime(33)<< endl;
    cout << isPrime(23) <<endl;

    return 0 ;
}



