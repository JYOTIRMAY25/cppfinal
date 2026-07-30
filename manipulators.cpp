#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int a = 5,b = 55,c = 555;
cout<<"the value of the a without setw is : "<<a<<endl;
cout<<"the value of the b without setw is : "<<b<<endl;
cout<<"the value of the c without setw is : "<<c<<endl;

cout<<"the value of the a with setw is : "<<setw(3)<<a<<endl;
cout<<"the value of the b with setw is : "<<setw(3)<<b<<endl;
cout<<"the value of the c with setw is : "<<setw(3)<<c<<endl;

return 0;
}
