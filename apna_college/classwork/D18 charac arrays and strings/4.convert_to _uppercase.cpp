#include <iostream>
using namespace std ; 

void toUpper(char  word[] , int n) {
    for (int i=0 ; i<n  ; i++){
        char ch = word[i];
        if(ch>='A' && ch<='Z'){ //already uppercase
            continue ;
        }else { // lowercase
            word[i]=ch-'a'+'A' ;
            // we wont write ch = ch-'a'+'A' as then it  will only change the variable and not the actual array
        }
    }
}

int main () {

    char word[]="abcde";
    toUpper(word, strlen(word));
    cout << word <<endl ;

    return 0 ;
}