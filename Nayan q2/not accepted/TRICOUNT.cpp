#include<iostream>
using namespace std;
int main()
{
    int t,q=0;
    scanf("%d",&t);
    while(q<t)
    {
     q++;
 int n,i,j,s=0,k;
 scanf("%d",&n);
s+=n*n;
 for(i=2;i<=n;i++)
 {
  for(j=1,k=1;j<=n;j+=1,k+=1)
  {
   if(j+i<=n+1)
   s+=k;
  }
}
for(j=2;j<=n;j++)
{
 for(k=j+1,i=1;k<=n;k++,i++)
 {
  if(k+j-1<=n)
  s+=i;
}}
printf("%d\n",s);
}
return 0;
}
 
