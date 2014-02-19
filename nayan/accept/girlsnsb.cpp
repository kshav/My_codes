#include<iostream>
using namespace std;
int main()
{
int a,b;
scanf("%d%d",&a,&b);
while(a!=-1||b!=-1)
{
if(a==0&&b==0)
printf("0\n");
else if(a==b||a==(b+1)||b==a+1)
printf("1\n");
else if(a==0)
printf("%d\n",b);
else if(b==0)
printf("%d\n",a);
else if(a>b)
{
if(a%(b+1)!=0)
printf("%d\n",(a/(b+1))+1);
else
printf("%d\n",a/(b+1));
}
else
{
if(b%(a+1)!=0)
printf("%d\n",b/(a+1)+1);
else
printf("%d\n",b/(a+1));
}
scanf("%d%d",&a,&b);
}
return 0;
}
