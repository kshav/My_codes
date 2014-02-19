#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
int t;
long long int n,m,i,sum=0,mean,sum1=0,sum2=0,grace=-1,pos1=-1,pos2=-1;
scanf("%d",&t);
while(t--)
{ sum1=sum2=sum=0;
grace=-1;
pos1=-1;pos2=-1;
scanf("%lld",&n);
long long int a[n],b[n];
for(i=0;i<n;i++)
scanf("%lld",&a[i]); 
for(i=0;i<n;i++)
{scanf("%lld",&b[i]); 
a[i]-=b[i];
sum+=a[i];}
scanf("%lld",&m);
long long int gm[m];
for(i=0;i<m;i++)
scanf("%lld",&gm[i]);
//sort(gm,gm+m);
mean=sum/n;
//cout<<mean<<"\n";
long long int absMin1=1000000;int absMin2=1000000;
for(int i=0;i<m;i++)
{
if((gm[i]>mean)&&((gm[i]-mean)<absMin1))
{absMin1=gm[i]-mean;
pos1=i;
// cout<<"1";
}
else if((gm[i]<=mean)&&((mean-gm[i])<absMin2))
{absMin2=mean-gm[i];
pos2=i;
// cout<<"2";
}
}
//cout<<"\n";
//cout<<pos1<<" "<<pos2<<"\n";
if(pos1!=-1)
for(int i=0;i<n;i++)
sum1+=abs(a[i]-gm[pos1]);

if(pos2!=-1)
for(int i=0;i<n;i++)
sum2+=abs(a[i]-gm[pos2]);

if((pos1!=-1)&&(pos2==-1))
printf("%lld",gm[pos1]);
else if((pos2!=-1)&&(pos1==-1)) printf("%lld",gm[pos2]);
else if((pos1!=-1)&&(pos2!=-1))
{
if(sum1>=sum2) 
printf("%lld",gm[pos2]);
else printf("%lld",gm[pos1]); 
}
cout<<gm[pos1]<<" "<<gm[pos2];
}
system("pause");
return 0;
} 