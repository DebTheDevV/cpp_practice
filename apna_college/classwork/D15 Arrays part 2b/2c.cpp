// kadane's algorithm- O(n)

#include <iostream>
using namespace std ;

int By_kadanes_algo(int *arr , int n) {
    // 🧠 Kadane's Algorithm:
    // Used to find the maximum sum of a contiguous subarray in O(n) time
    // It works by keeping track of:
    // - current sum of the subarray (sum)
    // - maximum sum found so far (max_sum)
    int sum = 0 , max_sum = INT_MIN ;
    // 🔁 Loop through each element in the array
    for (int i = 0 ; i<n  ; i++){
        // ➕ Add current element to the running sum
        sum+=arr[i];
        // 📈 Update max_sum if current sum is greater
        max_sum=max(max_sum , sum ) ;
        // ❌ If current sum becomes negative, reset it to 0
        // Because a negative sum will reduce future total — better to start fresh
        if(sum<0){
            sum = 0 ;
        }
    }
    return max_sum; // ✅ Return the maximum subarray sum found
}

int main () {
int arr[]={2 , -3 , 6 , -5 , 4, 2};
    int n=sizeof(arr)/sizeof(int);

    cout << "Max subarray sum (Kadane's): " << By_kadanes_algo(arr, n) << endl;

    return 0 ;
}