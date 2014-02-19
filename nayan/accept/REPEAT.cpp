#include<stdio.h>
main()
{
    
    long int sum=0,n,x;
    scanf("%ld",&n);
    while(n-->0)
    {
     scanf("%ld",&x);
     sum=sum^x;
    }
     printf("%ld\n",sum);
}
