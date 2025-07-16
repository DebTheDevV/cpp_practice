#include <iostream>
#include <iomanip> // for setprecision function

using namespace std ;

int main ( ) {
    cout << "Apna college \n" ;
    cout << "is for preogrammers \n" ;
    cout <<"how have you been \n\n ";

    //print pattern

    cout << "****\n***\n**\n*";

    int a = 10 ; 
    int b= 5 ;
    cout << "a" << endl ; //it prints the character
    cout << "a = " << a <<endl ; // we dont write in double quotes for variables
    cout << " b = " << b << endl ;

    int c ; // rn , stores a garbage value 
    cout << " c = " << c << endl ; 
    c=15 ; // now we assign a value 
    cout<< "c = "<< c <<endl ;

    //1age=25 ; will give error as variables names cannot start with one

    //Data-types -

    int age_= 25;
    int marks = 200 ;
    cout << " size of int " << sizeof(int) <<endl ;

    char grade = 'A' ;//written in single quotes
    cout << " size of char " << sizeof(char) <<endl ;

    bool isAdult = true ;
    cout << " size of bool" << sizeof(bool) <<endl ;

    cout << age_ << " " << marks << " " << isAdult << " " << endl ;

    float cgpa =9.9;
    cout << " size of float" << sizeof(float) <<endl ;

    double price =99.99 ;// bigger float numbers 



    // let's understand the difference between float and double 

    float PI = 3.14159265359;
    double PI2 =3.14159265359;

    cout<< "pi ="<<PI<<endl;
    cout<<"pi2 = "<<PI2<<endl;
    //cout has a default precision of 5 numbers aFter decimal , so we will see no difference in the above float and double

    //but if we go on and increase the precision of cout then , we will be able to notice the difference . 

    cout<<"after set precision \n\n";// WE USE IOMANIP TO SET PRECISION
    cout<<setprecision(12)<< "pi ="<<PI<<endl;//value yaha change ho jaa rha h piche ki taraf
    cout<<setprecision(12)<< "pi2 ="<<PI2<<endl;


    // inputs in c++
    int age ; // garbage value 
    cout << " enter your age : " ;
    cin >> age ;
    cout << " your age is : " << age << endl ;


    int a_ ;
    int b_ ;
    cout << "enter a : " ;
    cin >> a_ ;
    cout << "enter b : " ;
    cin >> b_ ;

    cout << "sum is = " << a_+ b_ << endl ;
    cout << "difference is = " << a_ - b_ << endl ;
    cout << "product is = " << a_ * b_ <<endl ;

    // print average marks : 
    float science;
    cout<<"your science marks : ";
    cin>>science;

    float maths;
    cout<<"your maths marks : ";
    cin>>maths;

    float eng;
    cout<<"your english marks : ";
    cin>>eng;

    float avg=(eng + science + maths)/3; // to get a answer in decimal only changing the data type of avg to float is not enough , we need to change the data type of the 3 marks , as int/int is int , so the answer will be given as an integer and not as a float if we  dont change the data type of the marks to float
    cout<<"your average marks ="<<avg<<endl;

    return 0;



    
}
