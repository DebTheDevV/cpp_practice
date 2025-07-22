#include <iostream>
using namespace std ;

void bin_to_dec (int binNum){
    int n = binNum ;
    int decNum = 0 ;
    int pow = 1 ; // 2^0 ,2^1 , 2^2 ..
    while(n>0){
        int dig = n % 10 ;
        decNum+= dig * pow ;
        n/=10 ;
        pow*=2 ;
    }
    cout << decNum << endl ;
}

int main (){
        bin_to_dec(1010) ;
        bin_to_dec(111) ;
    return 0 ;
}