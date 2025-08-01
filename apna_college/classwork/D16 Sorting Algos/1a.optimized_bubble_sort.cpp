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
        bool isSwap = false ;
        cout << " outer loop " ; // to check awei ki loop kitne bar chal rha h
        for(int j = 0 ;   j<n-i-1 ; j++){
            cout << " inner loop " ; // to check awei
            if (arr[j]>arr[j+1]){ 
                swap(arr[j] , arr[j+1]);
                isSwap= true ;
                
            }
        }
        if(!isSwap){
            //arr is already sorted
            return ;
        }
    }
    print(arr , n );
}

int main () {

    int arr[10]={1 , 2, 3, 4,5, 6 , 7 , 8,9,10 };
    int n = sizeof(arr)/ sizeof(int) ;
    
    bubblesort(arr , n);
    return 0 ;
}

// what we did here is isSwap named ek bool le liya ..now agar swapping inner loop mei ek baar bhi ho, to isSwap true return karega aur loop  dubara chalega .... and if there is no swapping , then isSwap remains false and waha se hi return kr lenge