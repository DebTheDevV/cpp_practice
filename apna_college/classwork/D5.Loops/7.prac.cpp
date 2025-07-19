#include <iostream>
using namespace std ;

int main () {

    // print the sum of digits of a no. using while loop 
    int n = 10829 ;
    int sum = 0;
    int i , j = n ;

    while (n > 0){
        int dig= n % 10;
        cout << dig << " " ;  // it will print all the difits
        sum += dig ;
        n /= 10 ;
    }
    cout << " sum of all digits = " << sum << endl ;
    cout<< endl ;

    // print the sum of odd digits of the number 

    int sum_odd = 0 ;
    while (i > 0){
        int dig= i % 10;
        
        if( dig % 2 != 0){
            cout << dig << " " ; 
            sum_odd += dig ;
        }
        i /= 10 ;
    }
    cout << " sum of odd digits = " << sum_odd << endl ;
    cout<< endl ; 

    // reverse  a given number and print 

    int result =0 ;
    while (n>0){
        int last_dig= n % 10 ;
        result = result * 10 + last_dig ;

    }
    cout << " reversed number =  " << result << endl ;
    return 0 ;


    return 0 ;
}