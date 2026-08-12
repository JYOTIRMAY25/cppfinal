#include<iostream>

using namespace std;
int main(){

// break statement
/*for(int i=0; i<4;i++)
{
//cout<<i<<endl;     /*her the output will be 0 1 2 */
/*if(i==2)
{
break;
}
cout<<i<<endl;       /* her the out will be 0 1 */
/*}
return 0;
}
*/
// continue statment 

for(int i=0; i<4;i++)
{
if(i==2)
{
continue;
}
cout<<i<<endl;
}
return 0;
}
