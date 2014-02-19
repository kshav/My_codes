#include<iostream>
using namespace std;

int main()
{
    int t=0;
    long long int n,a,b,i;
    while(t==0)
    {  
       scanf("%lld",&n);
       if(n==0)
       break;
      scanf("%lld",&a);
       b=a;
       for(i=1;i<n;i++)
       {scanf("%lld",&a);
        if(a>b)
        b=a;
       }
       cout<<b<<"\n";
    }
    //system("pause");
    return 0;
}        
