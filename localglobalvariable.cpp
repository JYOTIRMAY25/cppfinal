// local variable is a variable declared inside a function or a block of code enclosed by curly braces "{ }"
// global variable is a variable declared outside of all functions, classes, or blocks

#include<iostream>
using namespace std;

int glo=7;
void sum(){
int a;
cout<<glo<<endl;
}
int main(){
int glo=8;
glo=55;
sum();

cout<<glo<<endl;
return 0;
}

