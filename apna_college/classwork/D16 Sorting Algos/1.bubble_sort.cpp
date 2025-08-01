#include <iostream>
using namespace std ; 

void print(int *Arr , int n){
    for (int i = 0 ; i <n ; i++){
        cout << Arr[i] << " ";
    }
    cout <<endl ;
}

void bubblesort(int arr[] , int n ){
    for (int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ;   j<n-i-1 ; j++){
            if (arr[j]>arr[j+1]){ // arr ko asc ya desc order mei change kr ne ke liye bas , yaha sign ulta kr dena h , baki sab sahi h
                swap(arr[j] , arr[j+1]);
            
            }
        }
    }
    print(arr , n );
}

int main () {

    int arr[5]={5 , 4 , 3, 2 ,1 };
    int n = sizeof(arr)/ sizeof(int) ;
    
    bubblesort(arr , n);
    return 0 ;
}