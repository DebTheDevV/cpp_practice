#include <iostream>
using namespace std ; 

int main () {
    // we need to taverse array ie. , complete array ke upar iterate krna 

    //MAKING ARRAY->
    int n ;
    cout << "Enter length of array : " <<endl ;
    cin>>n ; 
    int arr[n] ;
    int length=sizeof(arr)/sizeof(int);
    cout << "Enter the elements of Array : " << endl ; 
    for(int i = 0 ; i<=length-1 ;i++){
        cin >> arr[i] ;
    }
    //LARGEST IN ARRAY -
    int max=arr[0];
    for(int i=0 ; i<=length-1 ; i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }cout << "max in arr = " <<  max<<endl;

    //Smallest in arr :
    int min=arr[0];
    for(int i=0 ; i<=length-1 ; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout << "min is : " << min << endl ;

    return 0 ;
}