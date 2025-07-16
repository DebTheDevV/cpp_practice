#include <iostream>
using namespace std ; 

int main () {
    int a = 3 ; 
    // a = a + 1 ; //a++ -> increment operator
    // a = a - 1 ; //a-- ->decrement operator

    a++ ; //4 or ++a bhi likh sakte the in this case
    cout << " a = " << a << endl ;
    a-- ; //3 or --a bhi likh sakte the in this case
    cout << " a = " << a << endl ;

    // the difference can be seen only when  we use the assignment operator

    int b = a++ ;
    cout << " a = " << a << endl ;//4
    cout << " b = " << b << endl ;//3
  
    a = 3 ; 
    // eg -
    int c ;
    c = a++ ; // 3 //pehele a ka value b mei save hoga and then increment hoge 4 hoga
    cout << b << endl ;
    c = ++a ; // 5  // 4 se pehele increment hoke 5 banega and then the value will get saved in b
    cout << c << endl ;

    return 0 ;
}