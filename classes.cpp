#include<iostream>
using namespace std;

class emp
{
private: // this can be accessed dicrtly
 int a,b,c;
public:
int d,e;

void setData(int a1,int b1,int c1); // declartion
void getData(){
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout<<"the value of c is "<<c<<endl;
cout<<"the value of d is "<<d<<endl;
cout<<"the value of e is "<<e<<endl;
}
};

void emp :: setData(int a1, int b1, int c1){

a=a1;
b=b1;
c=c1;
};

int main(){
emp ram;
ram.setData(7,5,5);
ram.getData();
return 0;
}
