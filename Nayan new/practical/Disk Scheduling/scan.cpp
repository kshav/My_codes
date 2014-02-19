#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int n;
cout<<"Enter the Total Pages from 0-200 ";
cin>>n;
int time=0,ps,a[n],i,k=n,h,j=1,sml;
for(i=1;i<=n;i++)
cin>>a[i];
cout<<"Enter the Head Pointer ";
cin>>a[0];
for(i=1;i<=n;i++)
{
sml=a[i];
ps=i;
for(j=i+1;j<=n;j++)
{
if(sml>=a[j])
{
sml=a[j];
ps=j;
}
}
swap(a[ps],a[i]);
}
for(i=1;i<=n;i++)
{
if(a[i]>=a[0])
break;
}
for(j=i-1;j>=1;j--)
cout<<a[j]<<"\n";
for(j=i;j<=n;j++)
cout<<a[j]<<"\n";
cout<<a[0]+a[n];
getch();
return 0;
}
