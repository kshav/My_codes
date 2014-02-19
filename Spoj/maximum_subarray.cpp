#include<iostream>
using namespace std;


int find_max_crossing_subarray(int array[],int low , int mid , int high)
{
    int left_sum = -65000,max_left;
    int sum=0;
    for( int i = mid ; i>=low ; i-- )
    { 
         sum = sum + array[i];
         if(sum>left_sum)
         left_sum=sum;
         max_left=i;
    }
    int right_sum = -65000,max_right;
    sum=0;
    for( int i = mid+1 ; i<= high ; i++ )
    { 
         sum = sum + array[i];
         if(sum>right_sum)
         right_sum=sum;
         max_right=i;
    }
    return (max_left,max_right,left_sum+right_sum);
}

int find_maximum_subarray(int array[] , int low , int high )
{   int left_low,left_high,left_sum,right_low,right_high,right_sum,cross_low,cross_high,cross_sum,mid;
    if(high==low)
    return (low , high , array[low]);
    else mid= ((low+high)/2);
    {
         (left_low,left_high,left_sum)=find_maximum_subarray(array,low,mid);
         (right_low,right_high,right_sum)=find_maximum_subarray(array,mid+1,high);
         (cross_low,cross_high,cross_sum)=find_max_crossing_subarray(array,low,mid,high);
         
         if(left_sum>=right_sum && left_sum>=cross_sum)
         return (left_low,left_high,left_sum);
         else if(right_sum>=left_sum && right_sum>=cross_sum)
         return (right_low,right_high,right_sum);
         else
         return (cross_low,cross_high,cross_sum);
    }
}

int  main()
{
     int n,p,q,high,low,max_sum,m;
     scanf("%d",&n);
     int array[n];
     for(int i=0;i<n;i++)
     scanf("%d",&array[i]);
     scanf("%d",&m);
     for(int i=0;i<m;i++)
     {scanf("%d%d",&p,&q);
     (low,high,max_sum)=find_maximum_subarray(array,p-1,q-1);
     printf("%d\n",max_sum);
     }
     //system("Pause");
     return 0;
}
     
     
     
