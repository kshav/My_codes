#include<iostream>
using namespace std;

int main()
{
    int t=0;
    long long int a,b,c;
    while(t==0)
    {
               cin>>a>>b>>c;
               if(a==b && b==c && c==0)
               break;
               else
               {
                   if(a>=b && a>=c)
                   {
                           a=a*a;
                           b=b*b;
                           c=c*c;
                           if(a==b+c)
                           cout<<"right\n";
                            else
                   cout<<"wrong\n";

                   }
                   else if(b>=a && b>=c)
                   {
                           a=a*a;
                           b=b*b;
                           c=c*c;
                           if(b==a+c)
                           cout<<"right\n";
                            else
                   cout<<"wrong\n";

                   }
                   else if(c>=b && c>=a)
                   {
                           a=a*a;
                           b=b*b;
                           c=c*c;
                           if(c==b+a)
                           cout<<"right\n";
                   else
                   cout<<"wrong\n";

                   }
              }
    }
    
    return 0;
}
