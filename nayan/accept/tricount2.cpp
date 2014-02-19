#include<stdio.h>
main()
{
    int test;
    long long int n;
    scanf("%d",&test);
    while(test--)
    {
    scanf("%llu",&n);
    printf("%llu\n",(n*(n+2)*(2*n+1))/8);
    }
}
    
    
    
