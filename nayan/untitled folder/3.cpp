#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,s;
cout<<"enter how many processes do you want ";
cin>>n;
string a[n];
int b[n],avg[n],i,j,wait,flag=1;
cin>>wait;
for(i=0;i<n;i++)
avg[i]=0;
for(i=0;i<n;i++)
{
cout<<"enter the processes name :";
cin>>a[i];
cout<<"enter burst time :";
cin>>b[i];
}
cout<<"\n";
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
cout<<" waiting time for"<<i+1<<" is "<<avg[i]<<"\n";
s+=avg[i];}
cout<<"average waiting time is "<<float(s/n)<<"\n";
getch();
return 0;
}
