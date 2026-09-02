#include<iostream>
using namespace std;

int moneyreceived(int currentmoney,float factor = 1.04){
return currentmoney*factor;
}

int main(){
int money=100000;

cout<<"if u have "<<money<<"rs in your bank and your bank will recived "<<moneyreceived(money)<<"rs after 1 year";
cout<<"if u have for vvpi "<<money<<"rs in your bank and your bank will recived "<<moneyreceived(money,1.1)<<"rs after 1 year";
return 0;
}
