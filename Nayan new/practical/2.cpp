#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter how many processes do you want ";
cin>>n;
string a[n+1];
int b[n+1],c[n+1],j,d=0, s=0,small,pos;
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
s=0;
int k=1;
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
  j++;
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
cout<<"average waiting time is "<<float(s/n)<<"\n";
system("pause");
return 0;
}
