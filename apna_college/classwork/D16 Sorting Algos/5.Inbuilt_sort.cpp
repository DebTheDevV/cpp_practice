#include <iostream>
using namespace std ; 
void print(int *Arr , int n){
    for (int i = 0 ; i <n ; i++){
        cout << Arr[i] << " ";
    }
    cout <<endl ;
}

int main () {
    int arr[]={1 , 4 , 1, 3 , 2, 4 , 3, 7 };
    int n = sizeof(arr)/ sizeof(int) ;
    // sort is by default asc 

    sort(arr+2 , arr+5) ;// from second index to 5th order
    print(arr , n);

    sort(arr , arr+n) ; // start to end
    print(arr , n);

    // to sort in descending order 
    // sort(start, end ,greater<int>())

    sort(arr , arr+8 , greater<int>());
    print(arr , n);



    return 0 ;
}