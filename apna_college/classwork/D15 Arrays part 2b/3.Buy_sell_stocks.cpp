#include <iostream>
using namespace std ; 

void maxProfit(int * price , int n){
    int bestBuy[100000]  ; //max possible size ka arr bana liya acc to ques
    bestBuy[0]=INT_MAX;
    for(int i = 1 ; i<n ; i++){
        bestBuy[i]=min(bestBuy[i-1] , price[i-1]);
        // cout << bestBuy[i]<<",";
    }
        int max_profit=0;
        for(int i= 0 ; i<n ; i++){
            int curr_Profit=price[i]-bestBuy[i];
            max_profit = max(max_profit , curr_Profit);
        }
    cout << "Max profit: " << max_profit << endl;
    
}

int main () {
    int price[]={7 , 1 , 5 , 3, 6, 4};
    int n= sizeof(price)/sizeof(int);
    maxProfit(price , n);

    return 0 ;
}

// time complexity is 0(n)+ 0(n)= 0(2n)= 0(n) as  constants are ignored 
