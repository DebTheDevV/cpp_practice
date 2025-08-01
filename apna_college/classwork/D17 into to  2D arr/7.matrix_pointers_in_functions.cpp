#include <iostream>
using namespace std ; 

void func(int mat[][4] , int n  , int m){
    cout << "0th row ptr = " <<mat <<endl ;
    cout << "1th row ptr = " <<mat+1 <<endl ;

    cout << "0th row value = " <<*mat <<endl ;
    cout << "1th row value = " <<*(mat+1) <<endl ;
}
void funct(int (*mat)[4] , int n  , int m ){
     cout << *(mat +2) << endl ; 
    // *(mat + 2) → gives the address of the 3rd row (row index 2)
    // *(mat + 2) + 2 → moves 2 columns ahead in the 3rd row (i.e., points to mat[2][2])
    // *(*(mat + 2) + 2) → dereferences the address to get the actual value at mat[2][2]
    // This is the same as writing mat[2][2] directly

    cout << *(mat+2)+2 <<endl ;

    cout << *(*(mat+2)+2 ) <<endl ; // same as writing mat[2,2]

}


int main () {
    int mat[4][4] = {{1 , 2 , 3 , 4 } ,
                     {5 , 6 , 7 , 8 } ,
                     { 9 , 10 , 11, 12},
                     {13 , 14 , 15, 16}} ;
    int n = 4 , m = 4 ;

    func(mat , 4, 4);
    funct(mat , 4 ,4 );

     
    return 0 ;
}