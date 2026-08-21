#include<iostream>
using namespace std;


// type function-name(argument)
int sum(int a,int b);//-->accpectable
// int sum(int a,b);-->not accpectable
// int sum(int ,int);-->accpectable

// void  g()-->accectable
void g(void);

int main()
{
// actual parmeter
int num1, num2;
cout<<"enter the first number "<<endl;
cin>> num1;
cout<<" enter the second number"<<endl;
cin>>num2;
cout<<"the sum is "<<sum(num1,num2);

g();
return 0;
}
// formal parameter
int sum(int a, int b){
int c = a+b;
return c;
}

void g(){
cout<<"hello world";
}
