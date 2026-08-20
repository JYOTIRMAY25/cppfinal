#include<iostream>
using namespace std;

struct emp{
int eid;
char fravchar;
float sal;
};

union money{
int rice;
char car;
float pounds;
};

int main(){
union money m2;
m2.rice=22;
m2.car='f';
cout<<m2.car<<endl;
return 0;
}

