// this sortin algo has a time complexity of Bi O of n^2...
//0(n*logn { aane wale future mei algos} wali time complexity is better than o(n^2)
#include <iostream>
using namespace std ; 

void print(int *Arr , int n){
    for (int i = 0 ; i <n ; i++){
        cout << Arr[i] << " ";
    }
    cout <<endl ;
}

void selectionsort( int arr[]  , int n){
    for (int i = 0 ; i<n-1 ; i++){
         int Minidx=i;
        for(int j =i+1 ; j<n ; j++){
            if (arr[j]<arr[Minidx]){
                Minidx=j ;
            }
        }
        swap(arr[i] , arr[Minidx]);
    }
    print(arr , n);

}

int main () {

    int arr[5]={ 3 , 5 , 2 , 6 ,1};
    int n = sizeof(arr)/sizeof(int);

    return 0 ;
}