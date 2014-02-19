#include<stdio.h>
#include<math.h>
main()
{
    int test;
    scanf("%d",&test);
    unsigned long long int k,b=pow(2,63);
    while(test--)
    {
                 scanf("%llu",&k);
                 printf("%llu\n",(192+(k-1)*250)%b);
    }
}
