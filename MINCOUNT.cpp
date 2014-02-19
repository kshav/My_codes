#include<iostream>
using namespace std;

int main()
{
    int t=0,n;
    long long int k,sum;
    scanf("%d",&n);
    while(t<n)
    {
        scanf("%lld",&k);
        sum=1+(k*k)/4-k/2;
        printf("%lld\n",sum);
        t++;
    }
    system("pause");
    return 0;
    
}
    
    
