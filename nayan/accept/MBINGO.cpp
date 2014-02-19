#include<iostream>
using namespace std;
int main()
{
  int n,b,i;
  cin>>n>>b;
  while(n!=0&&b!=0)
  {
  int a[b],ad[n],j,count=0,e;
  for(i=0;i<=n;i++)ad[i]=0;
  for(i=0;i<b;i++)
  cin>>a[i];
  for(i=0;i<b;i++)
  {
  for(j=0;j<b;j++)
  {
   e=a[i]-a[j];
   if(e<0)
   e=-e;
   if(ad[e]==0)
   {
    ad[e]=1;
    count++;
   }
   }
   }
   if(count==n+1)
   cout<<"Y\n";
   else
   cout<<"N\n"; 
   cin>>n>>b;
  }
  return 0;
}
