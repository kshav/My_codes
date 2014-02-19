#include<stdio.h>



int main()
{   int t,k=0;
    long long int n,sum,temp,i;
    scanf("%d",&t);
    while(k<t)
    {   
        scanf("%lld",&n);
        long long int arr[n];
        for( i=0;i<n;i++)
        scanf("%lld",&arr[i]);
        sum=arr[0];
        temp=1;
        for(int i=1;i<n;i++)
        {      if(arr[i]>0)
               { temp++;
                 sum+=arr[i]*temp;
               }
               else
               {
                   temp=2;
                   sum+=arr[i]*temp;
               } 
        }
        printf("%lld\n",sum);
        k++;
    }
//    system("pause");
    return 0;
}         

