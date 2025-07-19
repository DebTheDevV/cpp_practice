//print the square pattern using the for loop 

#include <iostream>
using namespace std ;

int main (){
    for(int i = 1 ; i <= 4 ; i++){
        cout << " * * * * " << endl ;
    }

    cout << endl ;

    // print the numbers from n to 1 using for loop
    int n ;
    cout << " enter num : " ;
    cin >> n ;

    for(int j = n ; j >=1 ; j--){
        cout << j << " " ;
    }cout << endl ;

    return 0;
}