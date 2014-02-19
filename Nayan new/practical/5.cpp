#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter how many processes do you want ";
cin>>n;
string a[n+1],x;
int b[n+1],c[n+1],d=0,e=0, s=0,small,pos,flag=1,wait=20,avg[n],temp;
float q1,q2,q3;
c[0]=0,b[0]=0;
for(i=0;i<n;i++)
avg[i]=0;
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
cout<<"FIRST COME FIRST SERVE\n\n";
if(c[1]==0)
s=0;
else
s=c[1];
for(i=1;i<=n;i++)
{
 d=s-c[i];
 //cout<<"waiting time for "<<a[i]<<" is : "<<d<<"\n";
 e=e+d;
 s+=b[i];
}
q1=float(s/n);
cout<<"average waiting time is "<<q1<<"\n\n";
cout<<"SHORTEST JOB FIRST\n\n";
s=0;
int k=1,j;
while(k<=n)
{
 i=1;
 small=b[i];
 pos=i;
 j=i;
 while(c[j]<=s)
 {
  if(small>b[j])
  {
   pos=j;
   small=b[j];
  }
 };
d=s-c[pos];
s+=b[pos];
for(j=pos;j<=(n)-k;j++)
{
 a[j]=a[j+1];
 b[j]=b[j+1];
 c[j]=c[j+1];
}
k++;
};
q2=float(s/n);
cout<<"average waiting time is "<<q2<<"\n\n";
cout<<"ROUND ROBINn\n\n";
while(flag==1)
{
 flag=0;
 for(i=0;i<n;i++)
 {
                 s=20;
  if(b[i]<=20&&b[i]!=0)
  s=b[i];
  if(b[i]>0)
  {
  b[i]=b[i]-s;
  for(j=0;j<n;j++)
  {
   if(b[j]!=0&&j!=i)
   avg[j]+=s;
   }
  }
 }
  for(j=0;j<n;j++)
  {
    if(b[j]!=0)
     {
      flag=1;
      break;
     }
     flag=0;
  }
}
s=0;
for(i=0;i<n;i++){
//cout<<" waiting time for"<<i+1<<" is "<<avg[i]<<"\n";
s+=avg[i];}
q3=s/n;
cout<<"average waiting time is "<<q3<<"\n\n";
if(q1>q2&&q1>q3)
cout<<"FIRST COME FIRST SERVE";
if(q2>q1&&q2>q3)
cout<<"SHORTEST JOB FIRST";
else
cout<<"ROUND ROBIN";
system("pause");
return 0;
}
