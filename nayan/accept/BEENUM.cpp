#include<stdio.h>
#include<math.h>
main()
{
    int t=0;
    long long int k,m;
    while(t==0)
    {
      scanf("%lld",&k);
      if(k==-1)
      break;
      else if((k-1)%6==0)
      {
           k=(k-1)/6;
           k=2*k;
           k=1+4*k;
           if(k>0){
             m=sqrt(k);
           if(m*m==k)
           printf("Y\n");
           else
           printf("N\n");
           }
           else
           printf("N\n");
      }
      else
      printf("N\n");
     }
}
      
