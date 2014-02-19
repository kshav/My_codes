#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter how many processes do you want ";
cin>>n;
string a[n+1];
int b[n+1],c[n+1];
float s=0;
c[0]=0,b[0]=0;
for(i=1;i<=n;i++)
{
cout<<"enter the processes name :";
cin>>a[i];
cout<<"enter burst time :";
cin>>b[i];
c[i]=c[i-1]+b[i-1];
s+=c[i];
}
cout<<"\n";
for(i=1;i<=n;i++)
{
 cout<<"waiting time for "<<a[i]<<" is : "<<c[i]<<"\n";
}
cout<<"average waiting time is "<<s/n<<"\n";
system("pause");
return 0;
}
