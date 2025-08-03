#include <iostream>
#include <string>

using namespace std ; 

int main () {
    string str = "hello" ;
    cout << str << endl ;
    str ="yellow"  ; // this wasnt allowed in char string
    cout << str << endl ;

    cout << str[0] <<endl ;
    cout << str[1] <<endl ;
    cout << str[2] <<endl ;
    


    string strn;
    getline(cin , strn , '$');
    cout << str << endl ;





    return 0 ;
}