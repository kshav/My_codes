#include <stdio.h>
long long int choose(long long int n,long long int  k) {
    if (k > n) {
        return 0;
    }
    int r = 1, d;
    for ( d = 1; d <= k; ++d) {
        r *= n --;
        r /= d;
    }
    return r;
}
main()
{
      long long int test,n,i;
      scanf("%lld",&test);
      while(test--)
      {
                   scanf("%lld%lld",&i,&n);
                   n=choose(n+9,9);
                   printf("%lld %lld\n",i,n);
      }
}             
