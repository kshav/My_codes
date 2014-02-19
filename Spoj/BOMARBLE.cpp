#include<stdio.h>


main()
{
    int t=0,n,k;
    long long int sum,g=5;
    while(t==0)
    { 
      scanf("%d",&n);         
      if(n==0)
      break;
      sum=(n+1)*(n+1);
      while(n>0)
      {
           sum=sum+n;
           n--;     
      }
      printf("%lld",sum)
      printf("\n\n");}
    
     //system("pause");
    return 0;
}     
                
