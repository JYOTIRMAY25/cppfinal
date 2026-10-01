// Friend Functions in C++

#include<iostream>
using namespace std;

class mycomplex{

int a,b;

public:
void setnumber(int n1, int n2){
a=n1;
b=n2;
}

//below line means that non member-sumcomplex function is allowed to do anything with my private members
friend mycomplex sumcomplex(mycomplex o1, mycomplex o2);

void printnumber(){
cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
}

};


mycomplex sumcomplex(mycomplex o1, mycomplex o2){
mycomplex o3;
o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
return o3;
}

int main(){
mycomplex c1,c2,sum;
c1.setnumber(1,2);
c2.setnumber(5,4);

c1.printnumber();
c2.printnumber();

sum= sumcomplex(c1,c2);
sum.printnumber();
return 0;
}

