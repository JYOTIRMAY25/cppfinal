#include<iostream>
using namespace std;
int main(){

int a =3;

int * b =&a;

// & --> (address of) refrence operator
cout<<"the addrress of a is "<<&a<<endl;
cout<<"the addrress of a is "<<b<<endl;

// * --> (value at) derefrence operator
cout<<"the value of address a is "<<a<<endl;
cout<<"the value of addrress of a is "<<*b<<endl;


// pointer to pointer(double pointer)
int ** c=&b;
cout<<"the vlaue of b is "<<&b<<endl;
cout<<"the value of b is "<<c<<endl;
cout<<"the value of address value_at(vlaue_ar(c)) "<<**c<<endl;

return 0;
}
