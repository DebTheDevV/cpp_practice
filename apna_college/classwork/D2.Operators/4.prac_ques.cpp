//predict output of cout << (bool)3+2

//(bool)3->1 , boolean of only 0 is 0  , baki koi bhi cheez ka boolean true hi hoga hamesha
//1+2 = 3
//ans->3 




// predict output of cout << (23.5 + 2 + 'A')
// here largest datatype is double , so baki bhi double mei change ho jayega 
// 23.5 + 2 + 65 = 90.5
// Ans-> 90.5

#include <iostream>
using namespace std ; 

int main () { 
    cout << (bool)3+2 << endl;//3

    cout << (23.5 + 2 + 'A') << endl ; //90.5

    return 0 ; 
}

