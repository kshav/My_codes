#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter how many processes do you want ";
cin>>n;
string a[n+1],x;
int b[n+1],c[n+1],temp,j,d=0,m=0, s=0,small,pos,k;
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
s=c[1];
for(i=1;i<=n;i++)
{
 s+=b[i-1];
   small=c[i];
   pos=i;
  for(k=i;c[k]<=s;k++)
  {
     if(b[k]<small)
    {
     pos=k;
     small=c[k];
    }
  }
  x=a[i];
  a[i]=a[pos];
  a[pos]=x;
  temp=c[i];
  c[i]=c[pos];
  c[pos]=temp;
  temp=b[i];
  b[i]=b[pos];
  b[pos]=temp;
 d=s-c[i];
 m+=d;
 cout<<"waiting time for pess "<<a[i]<<" Is "<<d<<"\n";
}

cout<<"average waitng time is "<<(m/n);
system("pause");
return 0;
} 
