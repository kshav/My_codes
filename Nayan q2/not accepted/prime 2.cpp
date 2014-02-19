#include<iostream>
using namespace std;
int main()
{
 int t,q=0;
 scanf("%d",&t);
 while(q<t)
 {
 q++;
 int m,n,flag,i,s;
 scanf("%d",&m);
 scanf("%d",&n);
 while(m<=n)
 {
 flag=0;
 i=2;
 s=m/i;
 while(i<=s+1)
 {
  if(m%i==0&&m!=i)
  flag=1;
  i++;
  s=m/i;
 }
 if(flag==0)
printf("%d\n",m);
m++;
 }
}
return 0;
} 
