// Array of Objects & Passing Objects as Function Arguments in C++

#include <iostream>
using namespace std;

class emp{
 int id;
 int salary;

public:
 void setID(void){
salary = 120;
cout<<"enter the id of emp";
cin>>id;
}

void getID(void){
cout<<" the id of this emp is "<< id << endl;
}

};

int main(){

emp meta [2];
for(int i =0;i<=2;i++){
meta[i].setID();
meta[i].getID();

}
return 0;

}

