//print the sum of first n natural numbers

#include <iostream>
using namespace std ;

int main () {
    int num ;
    cout << " enter you num : " ;
    cin >> num;

    int sum = 0 ;
    for (int i = 1 ; i <= num ; i++){
        sum += i ;
    }
    cout<<endl ;
    cout << "sum = " << sum << endl ;
    return 0 ;
}