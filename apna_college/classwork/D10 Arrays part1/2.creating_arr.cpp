#include <iostream>
using namespace std ;

int main () {
    // create an array 
    int marks [50] ; // just declare kiya h  , recently garbage value is stored
    cout << marks [0] << " ";// in all these garbage value gets stored
    cout << marks [1] << " " ;
    cout << marks [2] << " " ;
    cout << marks [3] << " " ;
    cout << marks [4] << endl ;

    int mark [50] = { 1 , 2 ,3};//second way , just telling values of first few elements 
    cout << mark [0] << " " ;//1
    cout << mark [1] << " " ;//2
    cout << mark [2] << " " ;//3
    cout << mark [3] << endl ;// from here all values will be 0 ;


    int marks_ [ ] = {1 , 2 , 3} ;// here 3 elements , hence size is 3 
    cout << marks_ [0] << " " ;//1
    cout << marks_ [1] << " " ;//2
    cout << marks_ [2] << "\n";//3
    //cout << marks_ [3] << endl ; // warning ayega

    int _marks [5] ={ 1 , 2 , 3 , 4, 5} ;
    cout << sizeof(_marks)  << endl ; // array kitne bytes le rha h , yeh bolega
    cout << "length = " << sizeof(_marks)/sizeof(int) << endl ;

    return 0 ;
}