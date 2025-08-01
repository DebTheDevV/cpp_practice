#include <iostream>
using namespace std ; 
// 🧠 Function to print matrix in spiral order (clockwise)
// mat: 2D array input
// n: number of rows
// m: number of columns
void spiralMatrix(int mat[][4], int n, int m) {
    // These four variables define the current "boundary box"
    // srow = starting row, scol = starting column
    // erow = ending row, ecol = ending column
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;

    // We keep printing layers in a spiral as long as there are rows and columns left
    // We use <= instead of < because we want to include the last single row/column in odd dimensions
    while (srow <= erow && scol <= ecol) {

        // 👉 Step 1: Print the top row from left to right
        // We fix the row at srow and move column from scol to ecol
        for (int j = scol; j <= ecol; j++) {
            cout << mat[srow][j] << " ";
        }

        // 👉 Step 2: Print the right column from top to bottom
        // We fix the column at ecol and move row from srow+1 to erow
        for (int i = srow + 1; i <= erow; i++) {
            cout << mat[i][ecol] << ' ';
        }

        // 👉 Step 3: Print the bottom row from right to left
        // We only do this if srow != erow (i.e., we are not already on the same row)
        // This avoids printing the same row twice in matrices with odd number of rows
        for (int j = ecol - 1; j >= scol; j--) {
            if (srow == erow) break; // break avoids duplicate row printing
            cout << mat[erow][j] << " ";
        }

        // 👉 Step 4: Print the left column from bottom to top
        // We only do this if scol != ecol (i.e., we are not already on the same column)
        // This avoids printing the same column twice in matrices with odd number of columns
        for (int i = erow - 1; i >= srow + 1; i--) {
            if (scol == ecol) break; // break avoids duplicate column printing
            cout << mat[i][scol] << ' ';
        }

        // After completing one full spiral layer, move inward
        // Shrink the boundary box inward for the next layer
        srow++; scol++;
        erow--; ecol--;
    }
}


int main () {
    int arr[4][4] = {{1 , 2 , 3 , 4 } ,
                     {5 , 6 , 7 , 8 } ,
                     { 9 , 10 , 11, 12},
                     {13 , 14 , 15, 16}} ;
    int n = 4 , m = 4;

    spiralMatrix(arr , 4 ,4 );

    return 0 ;
}