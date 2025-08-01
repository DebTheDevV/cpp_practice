// time complexity here is also O(n+range) , and for a range which is small , it becomes O(n)
#include <iostream>
using namespace std ; 

void print(int *Arr , int n){
    for (int i = 0 ; i <n ; i++){
        cout << Arr[i] << " ";
    }
    cout <<endl ;
}

void counting_sort(int arr[] , int n){
    int freq[100000] ; // range 
    int min_val=INT_MAX , max_val=INT_MIN ; 
    // loop tp find min and max value to find the range
    for (int i=0 ; i<n ; i++){
        min_val=min(min_val , arr[i]) ;
        max_val=max(max_val , arr[i]) ;
    }

    //1st step -O(n)
    for(int i=0 ; i<n  ; i++){
        freq[arr[i]]++;
    }
    //2nd step -O(range) , where range = max-min
    for (int i= min_val  , j=0 ; i<=max_val ; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }


    print( arr , n);

}

  

int main () {

    int arr[]={1 , 4 , 1, 3 , 2, 4 , 3, 7 };
    int n = sizeof(arr)/ sizeof(int) ;
    
    counting_sort(arr , n);
    return 0 ;
}