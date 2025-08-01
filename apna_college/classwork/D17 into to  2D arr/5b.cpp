// row wise binary search approach , column wise can be done too .. 0(mlogn) or O(nlogm)

#include <iostream>
using namespace std ; 

int row_wise_bs(int arr[][4], int n, int m, int key) {  
    for (int i = 0 ; i<n ; i++){
        int st= 0 , end= m-1 ;
        while( st<=end){
            int mid = (st+end)/2 ; 
            if(arr[i][mid]==key){
                cout << key << " found at " << i <<","<<mid << endl ;
                return mid;
            }
            else if(arr[i][mid]<key){
                st=mid+1;
            }
            else{
                 end = mid-1 ;
            }

        }
    }
    cout << key << " not found" << endl ;
    return -1;  
}

int main () {
    int arr[4][4]={{10 , 20 , 30 , 40},
                   {15 , 25 , 35 ,45} ,
                   {27 , 29 , 37 , 48},
                   {32 , 33 , 39, 50}
                };
    int n=4 , m= 4 ;

    int key = 33;

    row_wise_bs(arr , 4, 4, key);



    return 0 ;
}