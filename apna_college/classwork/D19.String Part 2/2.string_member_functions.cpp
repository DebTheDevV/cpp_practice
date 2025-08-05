#include <iostream>
using namespace std ; 

int main () {
    string str = "apna college";

    cout << str.length() <<endl ;
    cout << str.at(3)  <<endl ;//same as str[3]
    cout << str.substr(0 , 4) <<endl ;
    //(startidx , size)---> subarray where the starts from an index ,
    
    string strr = " i love coding in cpp and cpp, i don't like python " ;

    cout << strr.find("cpp" )<<endl ; // idx of first occurence of c++
    cout << strr.find("cpp" , 20)<<endl ; // to check ki idx 20 ke baad cpp kagha likha h
    cout << strr.find("java" )<<endl ;
    // returns a badi si value which is the equivalent of -1 as find returns an usigned value
    int idx= strr.find("java" );
    cout << idx << endl ;// here it sgoes -1 
    
    
    return 0 ;
}