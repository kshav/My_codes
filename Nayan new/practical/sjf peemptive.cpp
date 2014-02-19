#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,i;
cout<<"enter how many processes do you want ";
cin>>n;
int a[n],b[n],avg[n],k=0,name[n],j,d=0, s=0,small,pos;
for(i=0;i<n;i++)
avg[i]=0;
for(i=0;i<n;i++)
{
cout<<"enter the data for process "<<i+1<<"\n";
cout<<"enter the arrival time :  ";
cin>>a[i];
cout<<"enter burst time :  ";
cin>>b[i];
s+=b[i];
name[i]=i+1;
}
for(i=0;i<n;i++)
{
 small=b[i],pos=i;
 for(j=i+1;j<n;j++)
 {
  if(small>b[j])
  {
   small=b[j];
   pos=j;
  }
 }
 swap(name[i],name[pos]);
 swap(a[i],a[pos]);
 swap(b[i],b[pos]);
}
for(i=0;i<4;i++)
cout<<name[i];
for(i=0;i<=s;i++)
{
 for(j=0;j<n;j++)
 {
  if(a[j]<=i&&b[j]!=0)
  break;
 }
 b[j]--;
 for(k=0;k<n;k++)
 {
  if(k!=j&&b[k]!=0&&a[k]<=i)
   avg[k]++;
 }
}      
s=0;
for(i=0;i<n;i++){s+=avg[i];
cout<<"\nwaiting time for process "<<name[i]<<" is "<<avg[i];} 
cout<<"\naverage waiting time is "<<float(s)/n;
getch();
return 0;
}
