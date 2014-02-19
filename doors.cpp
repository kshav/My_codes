#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    long long int t,n,i;
    scanf("%lld",&t);
    while(t--)
    {
       scanf("%lld",&n);
       i=sqrt(n);
       printf("%lld\n",i);
    }
    system("pause");
    return 0;
}     
