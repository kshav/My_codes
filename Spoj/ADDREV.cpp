#include<iostream>
using namespace std;

int rev(int &a,int &d)
{
 while(a>0)
 {
  d=d*10+a%10;
  a=a/10;
 }
 return d;
}         

int main()
{
    int loops,t=0,a,b,d;
    scanf("%d",&loops);
    while(t!=loops)
    {  d=0;
       scanf("%d",&a);
       scanf("%d",&b);
       rev(a,d);
       a=d;
       d=0;
       rev(b,d);
       b=d;
       a=a+b;
       d=0;
       rev(a,d);
       cout<<d<<"\n";
       //cout<<d;
       t++;
    }
     system("pause");
     return 0;
}            
