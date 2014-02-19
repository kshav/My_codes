#include<iostream>
using namespace std;
int main()
{
   int n,a[10000],m=0,i,j,c=0,t,k=0;
   cin>>t;
   for(;k<t;k++){
   m=0;
   cin>>n;
   a[0]=1;
   for(i=2;i<=n;i++)
   {c=0;
    for(j=0;j<=m;j++)
    {
     a[j]=a[j]*i+c;
     c=0;
     if(a[j]/10!=0)
     {
      c=a[j]/10;
      a[j]%=10;
      }
      }
      while(c!=0){
      a[++m]=c%10;
      c/=10;
      }
      }
      for(i=m;i>=0;i--){
      cout<<a[i];
      a[i]=0;}
      cout<<"\n";}
     return 0;
     }
