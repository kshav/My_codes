#include<iostream>
using namespace std;
int main()
{int t,q=0;
cin>>t;
while(q<t)
{
 q++;
 int a,i,m;
 long long int b;
 cin>>a;
 cin>>b;
 a=a%10;
 m=a;
  if(a==0&&b%10!=0&&b!=0)
  printf("0");
  else if(a==0&&b==0)
  printf("1");
  else if(a==1)
  printf("1");
  else if(a==5||a==6)
  printf("%d",a);
  else if(a==2||a==3||a==8||a==7)
  {
   b=b%4;
   for(i=0;i<b+3;i++)
   a*=m;
   printf("%d",a%10);
 }
 else
 {
  b=b%2;
  if(b==0)
  printf("%d",(a*a)%10);
  else
  printf("%d",a);
 }
printf("\n");
}
return 0;
}
