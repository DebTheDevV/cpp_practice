#include <iostream>
using namespace std ; 

int main () {
    string str = "apna college";
     for(int i = 0 ; i<= str.length() ; i++ ){
        // in str.length ,  . is the dot operator 
        // and the  length is the member function
        cout << str[i] << " " ;
     }
     cout << "\n" ;

     for(char ch : str ){
        cout << ch << "," ;
     }
     cout << endl ;
    return 0 ;
}
