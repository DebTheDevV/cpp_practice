// 🚫 No extra space used → We will reverse the array in-place

// 🔄 Strategy:
// - Swap first and last elements
// - Then swap second and second last, and so on...

// 👣 Approach:
// - Use two pointers:
//   👉 start = 0 (beginning of array)
//   👉 end = n - 1 (last index of array)

// 🔁 Keep swapping until start crosses end:
// while (start < end):
//   - swap(arr[start], arr[end])
//   - start++
//   - end--

#include <iostream>
using namespace std ; 

int main () {
    int arr[]={5 , 4 , 3 , 9 ,  2}; 

    // 🧠 Find the total number of elements in the array
    int n = sizeof(arr) / sizeof(int);

    // 🔁 Actual reversing loop using the two-pointer approach
    int start = 0 , end = n-1 ; 

    while(start<end){
        //swap
        // int temp = arr[start] ; 
        // arr[start]=arr[end];
        // arr[end]=temp ;

        swap(arr[start] , arr[end]) ; // using inbuilt fucntion

        start++;
        end-- ;
    }

    return 0 ;
}

// 📊 Time Complexity: O(n/2) → simplified to O(n)
// 📦 Space Complexity: O(1) → in-place (no extra array used)
