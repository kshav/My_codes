#include<iostream>
#include<stdio.h>
using namespace std; 
// Prototype of a utility function that returns minimum of two integers
int min(int a, int b);
 
// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
    int C[n+1][k+1];
    int i, j;
 
    // Caculate value of Binomial Coefficient in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
 
            // Calculate value using previosly stored values
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
 
    return C[n][k];
}
 
// A utility function to return minimum of two integers
int min(int a, int b)
{
    return (a<b)? a: b;
}
 
/* Drier program to test above function*/
int main()
{
     int j,t=0,k = 3;
     
    cin>>j;
    for( t=3;t<=100;t++)
    {   int l=binomialCoeff(t, k);
        if(j==l)
        {cout<<t<<"\n";
        break;
        }
    }
   // cout<<t;
    for(int p=0;p<t;p++)
    { for(int k=0;k<t;k++)
     {if(p==k)
       cout<<"0";
      else
      cout<<"1";
     }
     cout<<"\n";
    }  
    system("pause");
    return 0;
}
