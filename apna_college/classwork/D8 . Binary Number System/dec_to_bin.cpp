#include <iostream>
using namespace std ; 

void dec_to_bin(int decNum ){
    int n = decNum ;
    int bin_num = 0 ;
    int pow = 1 ;

     while (n>0){
        int rem = n % 2 ;
        bin_num += rem * pow ;
        n /= 2 ;
        pow *= 10 ;
     }
    cout << bin_num << endl ;
}

int main () {
    dec_to_bin(10);
    dec_to_bin(7) ;
    return 0 ;
}