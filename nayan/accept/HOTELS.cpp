#include<stdio.h>
main()
{
    int n;
    long long int m,sum=0,j=0,ans=0,i;
    scanf("%d%lld",&n,&m);
    long long int a[n];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
    {
     sum+=a[i];
     if(sum<=m){
     if(ans<sum)
     ans=sum;}
     else if(sum>m)
     {
     sum-=(a[j]+a[i]);
     i--;
     j++;
     }
    }
    printf("%lld\n",ans);
}
