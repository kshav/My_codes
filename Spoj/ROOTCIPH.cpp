#include<iostream>
using namespace std;

int main()
{
    int n,t=0;
    long long int k,a,b,c;
    scanf("%d",&n);
    while(t!=n)
    {
      // scanf("%d,%d,%d",&a,&b,&c);
      scanf("%lld",&a);
      scanf("%lld",&b);
      scanf("%lld",&c);
      //cout<<a<<b<<c;
      k=(a*a)-(2*b);
      printf("%lld\n",k);
      //cout<<k;
      t++;
    }
    system("pause");
    return 0;
}          
               
