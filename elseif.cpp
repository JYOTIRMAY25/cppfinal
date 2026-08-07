
#include<iostream>
using namespace std;
int main(){

int age;
cout<<"tell me your age"<<endl;
cin>>age;

if((age<18)&&(age>0)){
cout<<"you are not get pass"<<endl;
}
else if(age==18){
cout<<"you will get the kid pass"<<endl;
}
else if(age<1){
cout<<"you are not yet bone"<<endl;
}
else{
cout<<"you will get audlt pass"<<endl;
}
return 0;
}
