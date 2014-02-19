#include<iostream>
using namespace std;
int main()
{
long long n;
int flag=0,e=0;
cin>>n;
while(n>1)
{
e=n%2;
n=n/2;
if(e==1)
{
flag=1;
break;
}
}
if(flag==0)
cout<<"TAK\n";
else
cout<<"NIE\n";
return 0;
}
