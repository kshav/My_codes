#include<stdio.h>
#include<math.h>
main()
{
   double sum=0,n;
    while(scanf("%lf",&n)!=EOF)
    {
      sum=1+8*n;
      sum=sqrt(sum);
      sum=(-1+sum)/2;
      if(sum-(int)sum!=0)
      sum+=1;
      sum=(int)sum%26;
      printf("TERM ");
      printf("%.0lf",n);
      if(sum!=0)
      printf(" IS %c\n",(char)(sum+64));
      else printf(" IS Z\n");
      
    }              
}
