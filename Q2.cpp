#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int a,b;
char c;
cin>>a>>c>>b;
if(c=='+')
{
cout<<a+b;
}
else if(c=='-')
cout<<a-b;
else if(c=='/')
{
if(b==0)
{
cout<<"Div by zero (Invalid operartion)";
}
else
{
double k=(double)a/(double)b;
cout<<k;
}
}
else if(c=='*')
{
cout<<a*b;
}
system("pause");
return 0;
}
