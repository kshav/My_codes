#include<stdio.h>
main()
{
      long long int c,d,n,sum,i;
      int test;
      scanf("%d",&test);
      while(test--)
      {
                   scanf("%llu%llu%llu",&c,&d,&sum);
                   n=(2*sum)/(c+d);
                   d=(d-c)/(n-5);
                   c=c-(2*d);
                   printf("%llu\n",n);
                   for(i=0;i<n;i++)
                   {
                   printf("%llu ",c);
                   c=c+d;
                   }
                   printf("\n");
      }
}
