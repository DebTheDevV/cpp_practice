//staircase seach

// time complexity O(n+m)
// if n>>>m , then O(n)
// if m>>>n , then O(m)

#include <iostream>
using namespace std ; 

bool staircase_search(int arr[][4], int n, int m, int key) {  
    int i = 0 , j = m-1 ;
    while(i<n && j>=0){
        if(arr[i][j]==key){
            cout << "found at cell (" << i <<"," << j << ")\n"  ;
            return true ;
        }
        else if(arr[i][j]<key){
            i++;
        }
        else{
            j--;

        }
    }
    cout << " not found \n" ;
    return false ;
    
}

int main () {
    int arr[4][4]={{10 , 20 , 30 , 40},
                   {15 , 25 , 35 ,45} ,
                   {27 , 29 , 37 , 48},
                   {32 , 33 , 39, 50}
                };
    int n=4 , m= 4 ;

    int key = 33;
            
    staircase_search(arr , 4 , 4, key);



    return 0 ;
}
