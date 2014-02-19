#include<iostream>
using namespace std;
int main()
{
int x,y,f,a;
scanf("%d",&x);
for(int i=1;i<=x;i++)
{
scanf("%d",&y);
int a=5,f=0;
while(y/a != 0)
{
f += y/a;
a *= 5;
}
printf("%d\n",f);
}
return 0;
} 
