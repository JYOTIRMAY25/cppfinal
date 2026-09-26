#include<iostream>
using namespace std;

class emp{

static int count;
int id;

public:
 void setdata(void){
cout<<" the  id of the emp is "<<endl;
cin>>id;
count ++;
}

void getdata(void){
cout<< " the id of this emp is "<<id<<" and this is emp number is "<<count<<endl;

}

void getcount(void){
cout<<"the vlaue of count is "<<count<<endl;
}

};

int emp:: count = 10; //default values is 0

int main(){

emp ram,rohit;
// ram id= 1; canot do this as id are private


ram.setdata();
ram.getdata();
ram.getcount();

rohit.setdata();
rohit.getdata();
rohit.getcount();
return 0;
}
