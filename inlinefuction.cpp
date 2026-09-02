#include<iostream>
using namespace std;
int product(int a, int b){
// static int c=0;  this execues only onces
//c=c+1;   next time this function is run , the value of c will be retainded
//return a*b+c;
return a*b;

}

int main(){
int a,b;
cout<<"enter the number of a and b "<<endl;
cin>>a>>b;
cout<<"the product of a and b "<<product(a,b)<<endl;
cout<<"the product of a and b "<<product(a,b)<<endl;
cout<<"the product of a and b "<<product(a,b)<<endl;
cout<<"the product of a and b "<<product(a,b)<<endl;
cout<<"the product of a and b "<<product(a,b)<<endl;
cout<<"the product of a and b "<<product(a,b)<<endl;
cout<<"the product of a and b "<<product(a,b)<<endl;
return 0;
}

