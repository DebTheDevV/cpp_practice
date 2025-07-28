// ✅ Pre-requisite: The array must be sorted for binary search to work

#include <iostream>
using namespace std ; 

// 🔍 Binary Search Function:
// - Returns the index of the key if found
// - Else, returns -1
// - Works only on sorted arrays
int bin_search (int *arr , int n , int key ){
    // 🧠 How binary search works:
    // - Start with the whole array
    // - Find the middle element
    // - If it's equal to the key → return index
    // - If key is smaller → search in left half
    // - If key is greater → search in right half
    // - Repeat until start > end
    int st =0 , end = n-1 ;
    while(st<=end ){
        int mid=(st+end)/2 ;
        if(arr[mid]==key){
            return mid ;
        }
        else if (arr[mid]<key){//secomd half
            st=mid+1 ;
        }
        else{ //first half
            end=mid-1 ;
        }
    }
    return -1 ;
}

int main () {
    // 🔽 Test case: Search for key = 12 in the array

    int arr[]={2 , 4 , 6 , 8 , 10 , 12 , 14 , 16};
    // 📏 Calculate number of elements in the array
    int n =sizeof(arr)/sizeof(int) ; 

    // 🖨️ Print result (index of key if found)
    cout << bin_search(arr , n , 12) <<endl ;

    // ⏱️ Binary Search Time Complexity:
    // - Best case: O(1) → key is in the middle
    // - Worst case: O(log n) → divide array in half each step

    return 0 ;
}