#include<iostream>
using namespace std;
int main()
{
    int t,q=0;
    scanf("%d",&t);
    while(q<t)
    {
     q++;
 int n,i,j,s=0,k,m,p;
 scanf("%d",&n);
s+=n*n;
 for(i=2;i<=n;i++)
 {
  for(j=1,k=1,m=i+1,p=1;j<=n;j++,k++,m++,p++)
  {
   if(j+i-1<=n)
   s+=k;
   if(m+i-1<=n)
  s+=p;
  }
}
printf("%d\n",s);
}
return 0;
}
 
