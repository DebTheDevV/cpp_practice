#include <iostream>
using namespace std ; 

void toLower(char word[] , int n ){
    for (int i = 0 ; i <n ; i++){
        char ch = word[i];
        if(ch>='a' && ch<='z'){//already lowercase
            continue ;
        }else{
            // is in uppercase
            word[i]=ch-'A'+'a';
        }
    }
    cout << word <<endl ;
}

int main () {

    char word[]="APPLE";
    toLower(word , strlen(word));

    return 0 ;
}