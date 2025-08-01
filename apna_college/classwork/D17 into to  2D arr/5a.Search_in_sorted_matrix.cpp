// here time complexity is O(n*m)
#include <iostream>
using namespace std ; 

int Brute_force(int arr[][4], int n, int m, int key) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == key) {
                cout << key << " is Found\n";
                return 1;
            }
        }
    }
    cout << key << " is Not Found\n";
    return 0;  
}

int main () {
    int arr[4][4]={{10 , 20 , 30 , 40},
                   {15 , 25 , 35 ,45} ,
                   {27 , 29 , 37 , 48},
                   {32 , 33 , 39, 50}
                };
    int n=4 , m= 4 ;

    int key = 47;

    Brute_force(arr , 4, 4, key);



    return 0 ;
}