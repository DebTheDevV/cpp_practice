#include <iostream>
using namespace std ; 

int main () {

    // check grade 

    int marks ; 
    cout << "enter your marks : " ; 
    cin >> marks ; 
    
    if (marks>=90){
        cout << "A" << endl ; //A print hoga
    }if (marks>=80) {
        cout << "B"  << endl ;// B bhi print hoga 
    }else{
        cout << "C"  << endl ;
    }
    // yaha , A bhi print ho rha , B bhi ,  same marks ke liye 
    //to avoid this

    if (marks>=90){//True , after exwcuting this block ,else if or else check bhi nhi honge
        cout << "A" << endl ;  // A
    }else if (marks>=80) {
        cout << "B"  << endl ;
    }else{
        cout << "C"  << endl ;
    }

    return 0 ;
}