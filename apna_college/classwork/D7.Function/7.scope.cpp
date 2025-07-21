#include <iostream>
using namespace std ;

int y= 3; //global variable

void sum(int a , int b){
    if(a>=1){
        int x = 25 ;//local variable
    }
    //cout <<x ; error ayega as x was defined within the if -else vlock , uske bahar x se kaam nhi kar sakte
    cout << y ;//can be used anywhere
    int s = a+b ;//local variable
    cout << s ;
}

int main (){
    sum(1 , 2);
    cout << y ;//can be used anywhere
    //cout<<s ;  s was in the sum function block , hence cant be used here
    return 0 ;
}