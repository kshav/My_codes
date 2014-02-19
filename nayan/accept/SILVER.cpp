#include<stdio.h>
main()
{
      int n,i,sum=0,count=0;
      while(scanf("%d",&n)!=0)
      {
       if(n==0)
       break;
       sum=1;count=0;
       for(i=2;i<50;i++)
       {
       sum=sum*2;
       if(sum>n)
       break;
       count++;
       }
       printf("%d\n",count);
      }
}
      
