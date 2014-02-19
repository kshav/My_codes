#include<iostream>
using namespace std;

int main()
{
    int a,b,t=0;
    while(t==0)
    {
               scanf("%d",&a);
               scanf("%d",&b);
               if(a==-1&&b==-1)
               break;
               else
               {
                   if(a>b)
                   {
                       b=b+1;
                       if(a%b!=0)
                      {a=a/b;
                       a=a+1;}
                       else
                       a=a/b;
                       cout<<a<<"\n";
                   }
                   else
                   {
                      a=a+1;
                       if(b%a!=0)
                      {b=b/a;
                       b=b+1;}
                       else
                       b=b/a;
                       cout<<b<<"\n";
                   }
               }
    }             
    
    return 0;
}                   
                                
