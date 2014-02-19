#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    long long int k,n,t,j;
    scanf("%lld",&k);
    while(k--)
    {scanf("%lld",&n);
     t = log2(n);
     j=2*(n-pow(2,t))+1;
     printf("%lld\n",j);
    }
     system("pause");
     return 0;
    }     
