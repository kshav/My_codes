#include<iostream>
#define max 1000
long long int a[max][max];
using namespace std;

int main()
{
    int t=0,n,k=0;
    long long int i,j;
    cin>>n;
    a[0][0]=1;
    for( i=1;i<1000;i++)
    {
       a[i][0]=a[i-1][i-1];     
       for( j=1;j<=i;j++)
       a[i][j]=(a[i][j-1]+a[i-1][j-1])%1000000007;
    }
     while(t<n)
     {
            cin>>k;
            cout<<a[k-1][k-1]<<"\n";
            t++;  
     }
     //system("Pause");
     return 0;
 }   
       
    
                    
    
