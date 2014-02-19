#include<iostream>
using namespace std;
int main()
{
int test;
scanf("%d",&test);
while(test>0)
{
test--;
int n,k,t,f,s;
scanf("%d%d%d%d",&n,&k,&t,&f);
s=(f-n)/(k-1);
printf("%d\n",n+k*s);
}
return 0;
}
