#include<iostream>
using namespace std;
int main()
{
int a[10],s=0,i,x=0;
for( i=0;i<=9;i++)
cin>>a[i];
for(i=0;i<=9;i++)
{
s+=a[i];
if(s==100)break;
if(s>100)
{
if(s-100>100-x)
{
s=x;
break;
}
}
x=s;
}

cout<<s;
return 0;
}
