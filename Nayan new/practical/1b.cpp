#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter how many processes do you want ";
cin>>n;
string a[n+1];
int b[n+1],c[n+1],d=0,e=0, s=0,small,pos;
c[0]=0,b[0]=0;
for(i=1;i<=n;i++)
{
cout<<"enter the processes name :";
cin>>a[i];
cout<<"enter burst time :";
cin>>b[i];
cout<<"enter the arrival time :";
cin>>c[i];
}
cout<<"\n";
if(c[1]==0)
s=0;
else
s=c[1];
for(i=1;i<=n;i++)
{
 d=s-c[i];
 cout<<"waiting time for "<<a[i]<<" is : "<<d<<"\n";
 e=e+d;
 s+=b[i];
}
cout<<"average waiting time is "<<float(e/n)<<"\n";
system("pause");
return 0;
}
