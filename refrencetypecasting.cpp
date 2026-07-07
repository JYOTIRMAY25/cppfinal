#include<iostream>
using namespace std;

int c = 33; // gobal  variable

int main(){

// local variable
int a,b,c;

cout<<"the value of a is "<<endl;
cin>>a;

cout<<"the vlaue of b is "<<endl;
cin>>b;

c = a+b;

cout<<" the sum is "<<c<<endl;
cout<<"the global valur of c is "<<::c<<endl;

// floalting and long double literals

float d = 34.4f;  // we put "f" to dertemine it's is flaot to compiler
long double e = 34.4l;  //// we put "l" to dertemine it's is long double to compiler
// if we no do this the complier will undersatand it like a long double

cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;

cout<<" the size of d is "<<sizeof(34.4)<<endl;
cout<<" the size of d is "<<sizeof(34.4f)<<endl;
cout<<" the size of d is "<<sizeof(34.4F)<<endl;
cout<<" the size of d is "<<sizeof(34.4l)<<endl;
cout<<" the size of d is "<<sizeof(34.4L)<<endl;

// refrence variable
float j = 55;
float & k = j;

cout<<" the value of j is "<<j<<endl;
cout<<" the value of k is "<<k<<endl;


// type casting

int v = 55;
float w = 44.45;

cout<<" the of v is "<<float(v)<<endl;
cout<<" the of v is "<<(float)v<<endl;

cout<<" the of w is "<<int(w)<<endl;
cout<<" the of w is "<<(int)w<<endl;

cout<<" v + w "<<v+w<<endl;
cout<<" v + w "<<v+(int)w<<endl;
cout<<" v + w "<<v+int(w)<<endl;



return 0;
}
