#include <iostream>
using namespace std ; 

bool is_Palindrome(char arr[] , int n ){
    int start = 0 ;
    int  end = n-1 ; 
    while(start<end){
        if(arr[start]!= arr[end]){
            cout << arr << " is NOT a valid palindrome\n" ;
            return false ;
        }
        start++ ;
        end-- ;
        
    }
    cout << arr << " is a valid palindrome \n" ;

    return true ;
}

int main () {

    char word[]="Apple" ;
    is_Palindrome(word , strlen(word))  ;

    char wordd[]="madam" ;
    is_Palindrome(wordd , strlen(wordd));

    return 0 ;
}

