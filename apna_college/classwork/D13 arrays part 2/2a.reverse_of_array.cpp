// 🧠 Method 1: Reverse using extra space (new array)

// 📝 Step 1: Make a new array of the same size.
// We'll fill it with the original array's elements in reverse order.
// For example: arr = [5, 4, 3, 9, 2] → copyArr = [2, 9, 3, 4, 5]

#include <iostream>
using namespace std ; 

void print_arr(int *arr , int n ){
    for (int i= 0 ; i<=n-1 ; i++){  
        cout << arr[i] <<" ";
    }
    cout << endl ;
}

int main () {

    // ✅ Original array we want to reverse
    int arr[]={5 , 4 , 3 , 9 ,  2};
    // 📏 Get total number of elements in the array
    int n =sizeof(arr)/sizeof(int) ; 

    int copyArr[n] ;

    // 🔁 Step 1: Fill copyArr with reversed values from arr
    for (int i= 0 ; i<=n-1 ; i++){ 
         int j=n-i-1 ;
        
        copyArr[i]=arr[j];
    }
    // 🔁 Step 2: Copy reversed values from copyArr back to arr
    for (int i= 0 ; i<=n-1 ; i++){
        
        arr[i]=copyArr[i];
    }

    
    return 0 ;
}

// 🧠 Note: This uses extra space (size n).
// If the array is very large (like 1 lakh elements), it doubles memory usage.
// This affects space complexity → O(n)