#include<iostream>
using namespace std;
int main()
{
int a,b,m,n,l,y=1,t,q;
scanf("%d",&l);
while(y<=l)
{
y++;
scanf("%d",&b);
m=0;n=0;
for( a=1;a<=b;a++)
{ t=2;
 while(t<=a)
 {
 if(a%t==0)
 m++;
 else 
 break;
 t=t*2;
};
t=5;
 while(t<=a)
 {
 if(a%t==0)
 n++;
 else 
 break;
 t=t*5;
};
}
//if(m<n)
printf("%d\n",m);
//else
 printf("%d\n",n);
}
return 0;
}
