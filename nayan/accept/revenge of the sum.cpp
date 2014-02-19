#include<stdio.h>
#include<math.h>
main(){long int count=0,a[31623],j;for(j=1;j<31622;j++)a[j]=j*j;long int n,d,i,l;double e;while(scanf("%ld",&n)!=EOF){count=0;for(i=1;i<=31622;i++){if(a[i]>n/2)break;l=sqrt(n-a[i]);if(ceil(l)==floor(l) && a[i]+l*l==n)count++;}printf("%ld\n",count);}}
