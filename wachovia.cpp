// A Dynamic Programming based solution for 0-1 Knapsack proble
#include<iostream>
 
// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }
 
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}
 
int main()
{   int t,k=0,n,W;
     scanf("%d",&t);
     while(k<t)
     {
      scanf("%d%d",&W,&n);
      int val[n],wt[n];
      for(int i=0;i<n;i++)
      scanf("%d%d",&wt[i],&val[i]);
    printf("Hey stupid robber, you can get %d.", knapSack(W, wt, val, n));
      k++;
     }
    //system("pause"); 
    return 0;
}
