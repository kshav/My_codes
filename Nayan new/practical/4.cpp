#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter how many processes do you want ";
cin>>n;
string a[n+1],x;
int b[n+1],c[n+1],small,pos,temp,j;
float s=0;
c[0]=0,b[0]=0;
for(i=1;i<=n;i++)
{
cout<<"enter the processes name :";
cin>>a[i];
cout<<"enter execution time :";
cin>>b[i];
cout<<"enter priority:";
cin>>c[i];
}
cout<<"\n";
for(i=1;i<=n;i++)
{
 small=c[i];
 pos=i;
 for(j=i;j<=n;j++)
 {
   if(c[j]<small)
   {
    pos=j;
    small=c[j];
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
}
int d=0;
for(i=1;i<=n;i++)
{
 
 s+=b[i-1];
 d+=s;
 cout<<"waiting time for process "<<a[i]<<" is "<<s<<"\n";
}
cout<<"average waiting time is "<<float(d)/n; 
//cout<<"average waiting time is "<<s/n<<"\n";
system("pause");
return 0;
}
