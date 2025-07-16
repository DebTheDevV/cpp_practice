#include <iostream>
using namespace std ;

int main (){
    cout << (int)('A')<<endl; //65

    float pi = 3.14 ;
    cout << (int)(pi) << endl ; // 3

    cout << 10/3 <<endl ; //3
    //par mujhe to answer decimal mei chahiye 
    cout << ((float)10/3) << endl ; //3.3333 -> here we type casted 10 to a floating datatype

    cout << 'A' + 1 << endl ; // 66 - int pe type caste ho jayega
    //but we want a char 
    cout << (char)('A' + 1) << endl ; // 66 -> B




    return 0;
}