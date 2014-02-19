#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,t=32,count=0;
double s=0;
scanf("%d",&n);
while(t>1)
{
s=0;
while(n!=0)
{
s+=pow(n%10,2);
n=n/10;
}
count++;
if(s==1)
{
printf("%d",count);
break;
}
if(s!=7&&s<=9)
{
printf("-1");
break;
}
t=s;
n=s;
}
return 0;
}
