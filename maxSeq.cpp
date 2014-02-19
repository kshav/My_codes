#include <iostream>
#include<stdio.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = 0, max_ending_here = 0;
    int i;
    for(i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }

    for ( i = 0; i < size-1; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_ending_here < 0)
            break;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }

    return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int arr[] = {8, -8, 9, -9, 10, -11, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, size);
    printf("Maximum contiguous sum is %d\n", max_sum);
    getchar();
    return 0;
}
