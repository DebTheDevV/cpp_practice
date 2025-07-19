#include <iostream>
#include <cmath>
using namespace  std ;
int main (){
    int n = 9 ;
    bool isPrime = true ;

    for (int i = 2 ; i<=sqrt(n) ; i++){ // we can also write -> i<=n-1
        if (n % i == 0){
            isPrime = false ;
            break ;
        }
    }
    if (isPrime){
        cout << n << " is a prime no " << endl ;
    }else {
        cout << n << " is a composite no " << endl ;
    }
    return 0;
}