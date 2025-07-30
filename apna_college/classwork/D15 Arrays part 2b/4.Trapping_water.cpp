#include <iostream>
using namespace std ; 

int trap ( int * height , int n ){
    int leftMax[20000];
    leftMax[0]=height[0];
    // leftMax[0]=20000 , yeh lena h toh , int  , same for right_max...total_water_trapped = 0 ;
    // for (int i = 0 ; i<=n-1 ;i++)  , yaga 1 to n-2 lena padhega  ,
    for (int i = 1 ; i<=n-1 ;i++){
        leftMax[i]= max(leftMax[i-1] , height[i-1]) ; 
        // cout << leftMax[i]<< " , ";
    }
    int rightMax[20000];
    rightMax[n-1]=height[n-1] ;
    for (int i = n-2 ; i>=0 ;i--){
        rightMax[i]= max(rightMax[i+1] , height[i+1]) ; 
        // cout << rightMax[i]<< " , ";
    }
    int total_water_trapped = 0 ;
    for (int i = 0 ; i<=n-1 ;i++){//ignore the extreme values ie. 0 and n-1
       int mini=min(leftMax[i] , rightMax[i]);
       int water_trapped= mini-height[i];
        if(water_trapped>0){
            total_water_trapped+=water_trapped;
        }else{
            water_trapped=0;
            continue;
        }
    }
     cout << " total_water_trapped  = "<<  total_water_trapped <<endl ;
     return total_water_trapped ;
}
int main () {
    int height[]= {4 , 2 , 0 ,  6, 3 , 2, 5 } ;
    int  n = sizeof(height)/sizeof(int);
    int heights[]= {5 ,4 , 3, 2, 1} ;

    trap(height , n);
    trap(heights , n);
    return  0;
}

// total complexity = 0(3n)=O(n)