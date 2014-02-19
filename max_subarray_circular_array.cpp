#include <iostream>
#include<stdio.h>
using namespace std;
int n;
int maxSubArraySum(int a[], int size)
{
    int max_so_far = 0, max_ending_here = 0;
    int current_start=0,current_end=0,start=0,end=0;
    int i;
    for(i = 0; i < size; i++)
    {
        current_end=i;
        if( (current_end - current_start ) <n)
        {
           
           max_ending_here = max_ending_here + a[i];
           
           if(max_so_far < max_ending_here)
              { max_so_far = max_ending_here;
                start = current_start;
                end = current_end;
              }
 
           if(max_ending_here < 0)
           {
            max_ending_here = 0;
            current_start=current_end+1;
            
           }
        }
        else
        {
            if(a[i]>0)
            {
              current_start++;
            }    
            else
            {
                while(a[current_end]<0)
                {
                    max_ending_here-=a[current_end];

                    current_start++;
                    i++;
                    current_end=i;

                    if(max_so_far < max_ending_here)
                    {   
                        max_so_far = max_ending_here;
                        start = current_start;
                        
                    }
                }
                break;
            }
        }
    }


    return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
   
    cin>>n;
    int a[2*n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=n;i<2*n;i++)
    a[i]=a[i-n];    
    int size=2*n;
    int max_sum = maxSubArraySum(a, size);
    printf("Maximum contiguous sum isssss %d\n", max_sum);
    getchar();
    return 0;
}
