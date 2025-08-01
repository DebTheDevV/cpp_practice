#include <iostream>
using namespace std ; 

// using O(n^2) time complexity
int diagonal_sum(int mat[][4] , int n){
    int sum = 0 ;
    for (int  i= 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){

            // primary diagonal
            if (i==j){
                sum+=mat[i][j];
            }
            else if(j==n-i-1){//else lagane pe, common wala case issue aayega hi nhi , cuz , common wala agar i==j mei check ho gyi to else if block mei ghusega hi nhi
                sum+=mat[i][j];
            }   

        }
    }
    cout  << " sum = " << sum <<endl ;
    return sum ;
}

// using 0(n)
int diagonal_sum_op(int mat[][3] , int n){
    int sum = 0 ;
     for (int i = 0 ; i<n ;i++){//pd
        sum+=mat[i][i];
        if(i != n-i-1){//sd
            sum+=mat[i][n-i-1];
        }
     }   
    cout  << " sum = " << sum <<endl ;
    return sum ;
}




int main () {
    int arr[4][4] = {{1 , 2 , 3 , 4 } ,
                     {5 , 6 , 7 , 8 } ,
                     { 9 , 10 , 11, 12},
                     {13 , 14 , 15, 16}} ;
    int n = 4 ;
    
    int arrr[3][3] ={{1 , 2 , 3 } ,
                    {4 , 5 , 6 }, 
                    {7 , 8 , 9 }};

    int m=3 ;
    diagonal_sum(arr , 4);
    diagonal_sum_op(arrr , 3);
    return 0 ;
}