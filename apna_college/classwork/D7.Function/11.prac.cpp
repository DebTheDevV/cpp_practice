// prinmt all prime numbers in the range 1 to n :

#include <iostream>
using namespace std ;

bool isPrime(int n){
    if(n==1){
        return false ;
    }
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            return false ;
        }
    }return true ;
}
void allPrime(int n){
    for(int i=2 ; i<=n ; i++ ){
        if(isPrime(i)){
            cout << i << endl ;
        }
    }cout<<endl ;
}

int main (){
    allPrime(13);

    return 0 ;
}