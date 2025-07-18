#include <iostream>
using namespace std ; 

int main () {

    cout << "what can you people do : \n" ;
    int age  ;
    cout << " enter you age : " ;
    cin>>age ;

    if (age>=18){
        cout <<" Can vote " << endl;
    if(age>45){
        cout << " Can contest for election" << endl ;
    }
    }else{
        cout << " Cannot vote "<< endl ;
    }
    cout<< " let's see of you passed the exam : " << endl ;
    float marks ;
    cout<< " enter your marks : " ;
    cin>>marks ;

    if(marks>=33){
        cout<< " You Passed !! yayyyy "<< endl ;
    }else{
        cout<< " you failed !! Oopsie" << endl ;
    } 

    return 0 ;
}