#include<iostream>
using namespace std;
int main()
{
 int n,s=0,i,j,flag;
 scanf("%d",&n);
 s=n;
 i=2;
 while(i<=n/2)
 {
  flag=0;
  j=i;
  while(j<=n/i&&flag==0)
  {
   if(j*i<=n)
   s++;
   j++;
  }
i++;
}
printf("%d",s);
 return 0;
} 
