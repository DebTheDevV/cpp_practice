#include <iostream>
using namespace std ; 

void reverse_arr(char arr[] , int n){
    int start = 0 ;
    int end=  n-1 ;

    while(start<end){
        swap(arr[start] ,arr[end]);
        start++ ;
        end-- ;
    }
    cout << arr <<endl ;
}

int main () {
    char word[]="abcde" ;
    reverse_arr(word , strlen(word));

    return 0 ;
}

// time complexity - O(n/2) = O(nanf)