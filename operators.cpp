#include<iostream>

using namespace std;

int main(){

int a = 4, b = 5;

// follwing are the types of operators in c++
// Arithmetic operators
cout<<"follwing are the arithmetic operators in c++"<<endl;
cout<<"the value of a+b ="<<a+b<<endl;
cout<<"the value of a-b ="<<a-b<<endl;
cout<<"the value of a*b ="<<a*b<<endl;
cout<<"the value of a/b ="<<a/b<<endl;
cout<<"the value of a%b ="<<a%b<<endl;
cout<<"the value of a++ ="<<a++<<endl;
cout<<"the value of a-- ="<<a--<<endl;
cout<<"the value of ++a ="<<++a<<endl;
cout<<"the value of --a ="<<--a<<endl;
cout<<endl;

// assignment operators -> to  assign valuee to  variable

//int a= 9,b=6;
// char c='d';

// comprsion operators

cout<<"follwing are the comprion operators in c++"<<endl;
cout<<"the value of a==b ="<<(a==b)<<endl;
cout<<"the value of a!=b ="<<(a!=b)<<endl;
cout<<"the value of a>b ="<<(a>b)<<endl;
cout<<"the value of a<b ="<<(a<b)<<endl;
cout<<"the value of a>=b ="<<(a>=b)<<endl;
cout<<"the value of a<=b ="<<(a<=b)<<endl;
cout<<endl;

//logical operators
cout<<"follwing are the logical operators in c++"<<endl;
cout<<"the value of &&(and) ="<<((a==b)&&(a<b))<<endl;
cout<<"the value of ||(or) ="<<((a==b)||(a<b))<<endl;
cout<<"the value of ! (not) ="<<(!(a==b))<<endl;
return 0;
}

