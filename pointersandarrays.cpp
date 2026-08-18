
#include<iostream>
using namespace std;
int main(){
int marks[4]={200,522,365,254};

int*p=marks;

cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

cout<<"the value at marks[0]"<<*p<<endl;
cout<<"the value at marks[0]"<<*(p+1)<<endl;
cout<<"the value at marks[0]"<<*(p+2)<<endl;
cout<<"the value at marks[0]"<<*(p+3)<<endl;

return 0;
}
