#include <iostream>
#include <cstring> // header file where these functions are defined
using namespace std ; 

int main () {
    char str1[100]; 
    char str2[100]= "hello world"; 
    // str="apna college" -- error- array type 'char[100]' is not assignable
    strcpy(str1 , str2) ;
    cout << str1 << endl ;
    strcpy(str1 ,"apna college");
    cout << str1 << endl ;

    // to add str2 to the start of str1 , in str1 
    strcat(str1,str2);
    cout << str1 << endl ;

    //compares 2  strings based on their values (+ve ,0 ,  -ve).. isme first char .. of str1 will get compared to str2 ... 2ns char get's compared ... third...

    char str3[]= "abc";
    char str4[]= "abc";
    char str5[]="xyz" ;

    cout << strcmp(str3 , str4)  <<endl ; 
    // a=a , b=b , c=c ///0
    cout <<strcmp(str3 , str5) <<endl ;
    //a<x , b<y , c<z ///-ve
    cout <<strcmp(str5 , str4) <<endl ;
    //x>a , y>b , z>c//+ve

    cout <<strcmp(str1 , str2) <<endl ;
    

    cout << strcmp( "mango" , "x") <<endl ;
    // m<x..-ve


    return 0 ;
}