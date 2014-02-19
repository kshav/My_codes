#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
while(a!=-1&&b!=-1)
{
if(a==1||b==1)
cout<<a<<"+"<<b<<"="<<a+b;
else
cout<<a<<"+"<<b<<"!="<<a+b;
cout<<"\n";
cin>>a>>b;
};
return 0;
}
