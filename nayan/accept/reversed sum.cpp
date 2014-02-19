#include<iostream>
using namespace std;
void con(int &n)
{
int sum=0;
if(n!=0)
{
while(n%10==0)
{
n=n/10;
};
while(n!=0)
{
sum=(sum*10)+n%10;
n=n/10;
}
n=sum;
}
}   
int main()
{
int a,b,t;
cin>>t;
while(t!=0)
{
cin>>a>>b;
con(a);
con(b);
a=a+b;
con(a);
cout<<a<<"\n";
t--;
}
return 0;
}
