#include <iostream>
using namespace std;

int sum(int a,int b){
cout<<"using  2 aruments "<<endl;
return a+b;
}

int sum(int a,int b,int c){
cout<<"using 3 aruments "<<endl;
return a+b+c;
}

int vol(double r, int h){
cout<<"the vol of cliydner is "<<endl;
return (3.14* r *h);
}

int vol(int a){
cout <<" the vol of cube is "<<endl;
return (a*a*a);
}

int vol(int l, int b, int h){
cout<<"the vol of cuboid"<<endl;
return (l*b*h);
}

int main(){
 cout<<"the sum of 3 and 6 "<<sum(3,6)<<endl;
 cout<<"the sum of 3,7 and 6" <<sum(3,7,6)<<endl;
 cout<<"the vol of cyilder 2 and 6"<<vol(2,5)<<endl;
 cout<<"the vol of cube is 3"<<vol(3)<<endl;
 cout<<"the vol of cubodi is 3*4*5"<<vol(3,4,5)<<endl;
return 0;
}
