#include<iostream>
using namespace std;

class c2;

class c1{
int val;
public:
void indata(int a){
val=a;
}
void display(void){
cout<<val<<endl;
}
friend void exchange(c1 &,c2 &);
};

class c2{
int val1;
public:
void indata(int a){
val1=a;
}
void display(void){
cout<<val1<<endl;
}
friend void exchange(c1 &,c2 &);
};

void exchange(c1 & x,c2 &y){
int tmp= x.val;
x.val=y.val1;
y.val1=tmp;
}

int main(){
c1 oc1;
c2 oc2;

oc1.indata(22);
oc2.indata(33);
exchange(oc1,oc2);

cout<<"the value of exchanging becomes: ";
oc1.display();
cout<<"the value of exchanging becomes: ";
oc2.display();

return 0;
}
