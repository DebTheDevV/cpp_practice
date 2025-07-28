#include <iostream>
using namespace std ; 

// 🔍 Linear Search:
// We go through the array one element at a time.
// If we find the key, we return the index where it was found.
// If the key is not present, we return -1.

int linear_search (  int *arr , int n , int key ){
    for (int i = 0 ; i<=n-1 ;i++) {
        if(arr[i]==key){
            return i ;
        }
    }
    return -1;
}
int main () {
    //search for key = 20 
    int arr[]={2 ,4 ,6 , 8 , 10 , 12 , 14, 16} ;
    int n = sizeof(arr)/sizeof(int) ;
     cout << linear_search(arr , n , 10) << endl ;
    return 0 ;
}

/*
📊 Time Complexity of Linear Search:
- Best case: O(1) → if the key is at the first index
- Worst case: O(n) → if the key is at the last index or not present at all
- Average case: O(n)
*/