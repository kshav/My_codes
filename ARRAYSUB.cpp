#include<stdio.h>
using namespace std;

main()
{
    long long int n,k,max=0;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    scanf("%lld",&k);
    max=arr[0];
    int i=0;
    while(i<k)
    {
            if(arr[i]>max)
            max=arr[i];
            i++;
    }
    printf("%lld ",max);
    i=k;
    while(i<n)
    {
      if(arr[i-k]!=max)
      {
          if(arr[i]>=max)
          max=arr[i];
      }
     else
     {max=arr[i-k+1]; 
      int p=i-k+1;
      while(p<i+1)
      { 
            if(arr[p]>max)
            max=arr[p];
            p++;
      }
     }
     printf("%lld ",max);
     i++;
    }
}     
           
           
           
           
                                 


