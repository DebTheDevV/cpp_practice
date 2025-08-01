// time complexity here is also O(n^2)
#include <iostream>
using namespace std ; 

void print(int *Arr , int n){
    for (int i = 0 ; i <n ; i++){
        cout << Arr[i] << " ";
    }
    cout <<endl ;
}

void Insertion_sort(int arr[] , int n){
    
    for (int i = 1 ; i<n ; i++){
        int curr = arr[i];
        int prev = i-1 ;
        while(prev>=0 && arr[prev]> curr){
            swap(arr[prev] , arr[prev+1]);
            prev-- ;
        }
        arr[prev+1]= curr ;
    }
    print( arr , n);

}



int main () {

    int arr[5]={5 , 4 , 3, 2 ,1 };
    int n = sizeof(arr)/ sizeof(int) ;
    
    Insertion_sort(arr , n);
    return 0 ;
}