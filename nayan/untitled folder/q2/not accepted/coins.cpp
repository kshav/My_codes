#include<iostream>
using namespace std;
int main()
{
    int p=0;
while(p<10)
{
p++;
long long int a,s=0;
cin>>a; 
if(a==0)
break;
for(int i=2;i<=4;i++)
s=s+a/i;
if(s>a)
cout<<s;
else
cout<<a;
cout<<"\n";
}
return 0;
}       
 
