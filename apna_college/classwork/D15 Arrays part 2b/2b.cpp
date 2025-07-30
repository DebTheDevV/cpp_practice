// Optimized Brute force approach
#include <iostream>
using namespace std ; 
void op_max_sum(int *arr  , int n ){
    int  max_sum=INT_MIN ;
    for ( int start = 0 ; start<=n-1 ; start++ ){
        int sum = 0 ;
        for (int end = start ; end <=n-1 ; end++){
            sum+=arr[end] ; 
            max_sum= max(max_sum , sum);
        }
    }
    cout << "maximum subarray sum = " << max_sum <<endl ;
 
}

int main () {
    int arr[]={2 , -3 , 6 , -5 , 4, 2};
    int n=sizeof(arr)/sizeof(int);
    op_max_sum(arr , n) ;

    return 0 ;
    // here , the time complexity is O(n square)
}