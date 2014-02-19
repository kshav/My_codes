/*Dynamic programmig implementation of LIS problem in n^2 complexity */
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

/*lis() return the length of the longest incresing subsequence in arr[] of sizen */

int lis(int arr[],int n)
{
    int *lis,i,j,max=0;
    lis=(int *)malloc(sizeof(int )*n);
    
    /*Initialize LIS values for all indexes */
    for( i=0;i<n;i++)
    lis[i]=1;
    
    /*Computed optimized LIS values in bottom up manner */
    for( i =1 ;i<n;i++)
    {
      for(j=0;j<i;j++)
      {
         if(arr[i]>arr[j] && lis[i] < lis[j]+1)
         lis[i]=lis[j]+1;
      }
    }               
    
    /*Pick maximum of all LIS values */
    for(i=0;i<n;i++)
     if(max<lis[i])
     max=lis[i];
     
     /*Free memory to avoid memory leak */
     free(lis);
     return max;
}

int main()
{   int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
     printf("Length of LIS is %d\n",lis(arr,n));
    system("pause");
    return 0;
}

                    
