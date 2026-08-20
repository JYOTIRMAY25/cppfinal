#include<iostream>
using namespace std;

typedef struct emp{
int empid;
char favchar;
float salary;
}ep;

int main(){
ep ram;
struct emp riya;

ram.empid = 1;
ram.favchar = 'x';
ram.salary = 1200;

riya.empid = 2;
riya.favchar = 'e';
riya.salary = 12330;

cout<<"the sal of ram is "<<ram.salary<<endl;
cout<<"the sla of riya is "<<riya.salary<<endl;

return 0;
}







