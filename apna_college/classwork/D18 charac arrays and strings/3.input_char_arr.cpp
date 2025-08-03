#include <iostream>
using namespace std ; 

int main () {
    char word[30] ;// ignores the ehitespaces and everything after it
    cin>> word ;
    cout << "your word was : " << word <<endl ;
    cout << "length : " << strlen(word) <<endl ;

    cin.ignore();


    char sentence[30] ;
    cin.getline(sentence , 30 , '*')  ; // this third limiter is called delimiter(optional argument)..which means jab user ne * input mei de diya , tab input lena automatically band ho jayega
    cout << "your SENTENCE : " << sentence <<endl ;
    cout << "length : " << strlen(sentence) <<endl ;

    

    return 0 ;
}