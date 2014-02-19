/* Memoized version for nth fibonacci number */
#include<iostream>
#include<stdio.h>
#define NIL -1
#define MAX 100

int lookup[MAX];

/*Function to initialize NIL values in lookup table */
void initialize()
{
     int i;
     for(int i=0;i<MAX;i++)
     lookup[i]=NIL;
}

/* Function for nth fibonacci number */

int fib(int n)
{
    if(lookup[n]==NIL)
    {
       if(n<=1)
       lookup[n]=n;
       else
       lookup[n]=fib(n-1)+fib(n-2);
    }
    return lookup[n];
}

int main()
{
         int n;
         scanf("%d",&n);
         initialize();
         printf("Fibonacci number is %d ",fib(n));
         system("pause");
         return 0;
}          
