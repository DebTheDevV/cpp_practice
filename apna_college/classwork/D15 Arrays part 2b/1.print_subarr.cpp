// subarr is continuous part of an arr 
// subsequence is  non - continuous but ordered 

// for  size n , the no. of subarrays will be n(n+1)/2

#include <iostream>
using namespace std ; 

void print_subarr(int *arr  , int n ){
    for ( int start = 0 ; start<=n-1 ; start++ ){
        for (int end = start ; end <=n-1 ; end++){
            // cout << "(" << start << "  , "<<end <<")"   ;
            for ( int i = start ; i<=end ; i++){
                cout << arr[i] << "," ;
            }cout <<"  " ;
        }
        cout << endl ;
    }

}

int main () {
    int arr [5]= { 1 , 2 , 3, 4, 5};
    int n = sizeof(arr)/sizeof(int) ; 
    
    print_subarr(arr , n);

    return 0 ;
}

// here , the time complexity is O(n cube) but  we can change it to O(n square) using  strings , which will be studied later 