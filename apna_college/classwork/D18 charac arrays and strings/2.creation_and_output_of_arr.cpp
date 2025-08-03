#include <iostream>
using namespace std ; 

int main () {
    char work []= "code" ;
    char works[5]= "code" ;
    char workss[]= {'c' , 'o' , 'd' , 'e' , '\0'};
    char worksss[50]={'c' , 'o' , 'd' , 'e' , '\0' };
     
    // if we dont  use \0 in worksss then , in all the other position garbage value will be stored and the compiler  will try to convert them into strings


    cout << work << endl ;
    cout << works << endl ;
    cout << workss << endl ;
    cout << worksss << endl ;

    cout << strlen(work)<<endl ; //4 , here \0 count nhi hoga
    return 0 ;
}
