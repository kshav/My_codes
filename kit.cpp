#include<iostream>
#include<string>
using namespace std;

int main()
{
int x,n,a;
char ch;
string s,s1;
cin>>s1;
while(s1!=".")
{
cin>>x;
if(x<10)
{
s=s1;
for(int i=1;i<x;i++)
{
s+=s1;
}
//cout<<s<<endl<<endl;
n=s.size();
a=s1.size();
string chk=s;
while(1)
{
cout<<s<<endl;
ch=s[n-1];
for(int i=n-1;i>0;i--)
{
s[i]=s[i-1];
}
s[0]=ch;
if(s==chk)
break;
}
}
cin>>s1;
}
system("pause");
return 0;
}
