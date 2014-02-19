#include<iostream>
using namespace std;
int main()
{
int j,n,s,t,i,l,p,temp,sm=0,a[1000];
cin>>n;
cin>>s;
cin>>t;
for( i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
l=a[i];
p=i;
for(j=i;j<n;j++)
{
 if(l<=a[j])
 {
 l=a[j];
 p=j;
 }
}
temp=a[i];
a[i]=a[p];
a[p]=temp;
}
for(i=0;i<n;i++)
{
sm+=a[i];
if(sm>=s*t)
{
cout<<i+1<<"\n";
break;
}
}
return 0;
}
