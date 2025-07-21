#include <iostream>
using namespace std ;

int sum(int a , int b=1){// b=1 ,when we dont give an argument for b 
    int sum = a+b ;
    return sum ;
}

int diff(int a , int b){
    int diff = a-b ;
    return diff ;
}

int main (){
    int s= sum(2 , 4);
    cout<< "sum = " << s << endl ;//2+4
    
    int d =diff(4 , 2);
    cout<<"difference = " <<d << endl ;//4-2

    s=sum(2);
    cout<< "sum = " << s << endl ;//2+1
    

    return 0 ;
}