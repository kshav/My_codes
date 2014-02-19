#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int t,k=0;
    long long int  i,j,n,temp,max=0,min_ele;
    scanf("%d",&t);
    while(k<t)
    {     max=0;
          scanf("%lld",&n);
          long long int a[n]; 
          for(i=0;i<n;i++)
          scanf("%lld",&a[i]);
          if(n==1)
          printf("UNFIT\n");
          else
          {min_ele=a[0];     
          for(i=1;i<n;i++)
          {  
            if(a[i]-min_ele>max)
            max=a[i]-min_ele;
            if(a[i]<min_ele)
            min_ele=a[i]; 
          }
          if(max==0)
          printf("UNFIT\n");
          else
          printf("%lld\n",max);
          }
          k++;
    }               
    system("Pause");
    return 0;
}              
          
                      
