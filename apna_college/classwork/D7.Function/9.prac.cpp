//waf to find the binomial coefficient for given n and r 

#include <iostream>
using namespace std ;

int factorial(int n){
    int fact = 1 ;
    for (int i = 1 ; i<=n ;i++){
        fact*=i ;
    }
    return fact ;
}

int bi_coeff(int n , int r ){
    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r);

    int result = val1/(val2*val2);
    return result ;

}

int main (){

    cout<< bi_coeff(4 , 2) << endl ;

    return 0 ;
}