#include <iostream>
using namespace std ; 

int main () {
    char a= 'a';
    char A= 'A';
    char c = '&';
    char d ='9';
    char e = '\n'; // here \ and n are considered to be together , named " next line character"

    char ch = 'f';
    int  pos = ch -'a' ;


    cout << int(a) <<endl ;
    cout << int(A) <<endl ; 
    cout << pos << endl ;

    return 0 ;
}
