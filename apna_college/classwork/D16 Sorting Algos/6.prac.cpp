// sort this arr using insertion sort in descending order ... char ch []={'f' , 'b' , 'a', 'e' , 'c' , 'd'}

#include <iostream>
using namespace std ;

void print(char *Arr , int n){
    for (int i = 0 ; i <n ; i++){
        cout << Arr[i] << ",";
    }
    cout <<endl ;
}

void sort_char(char arr[] , int n){
    
    for (int i = 1 ; i<n ; i++){
        int curr = arr[i];
        int prev = i-1 ;
        while(prev>=0 && arr[prev] < curr){
            swap(arr[prev] , arr[prev+1]);
            prev-- ;
        }
        arr[prev+1]= curr ;
    }
    print( arr , n);

}


int main () {
    char ch []={'f' , 'b' , 'a', 'e' , 'c' , 'd'};
    int n = 6 ;

    sort_char(ch , 6);
    return 0 ;
}
