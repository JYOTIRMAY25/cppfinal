#include<iostream>
using namespace std;
int main(){

int marks[4]={20,33,37,28};
int engmarks[4];


engmarks[0]=22;
engmarks[1]=34;
engmarks[2]=38;
engmarks[3]=29;

cout<<"this are marks"<<endl;
cout<<marks[0]<<endl;
// you can change the value of array
marks[1]=11;

cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;

cout<<"this are engmarks"<<endl;
cout<<engmarks[0]<<endl;
cout<<engmarks[1]<<endl;
cout<<engmarks[2]<<endl;
cout<<engmarks[3]<<endl;

// using  for loop to print  array

for(int i=0;i<4;i++){
cout<<"the value of marks "<<i<<"is"<<marks[i]<<endl;
}

// uisng while loop
// uisng do while loop

return 0;
}
