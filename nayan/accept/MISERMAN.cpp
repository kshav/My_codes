#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    if(m>1)
    {
    int a[n][m],sum[n][m];
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    cin>>a[i][j];
    for(i=0;i<m;i++)
    sum[0][i]=a[0][i];
    for(i=1;i<n;i++)
    {
                    for(j=0;j<m;j++)
                    {
                                    if(j==0)
                                    sum[i][j]=min(sum[i-1][0],sum[i-1][1])+a[i][0];
                                    else if(j==m-1)
                                    sum[i][j]=min(sum[i-1][j-1],sum[i-1][j])+a[i][j];
                                    else
                                    sum[i][j]=min(min(sum[i-1][j-1],sum[i-1][j]),sum[i-1][j+1])+a[i][j];
                                    
                    }
    }
    j=sum[n-1][0];
    for(i=1;i<m;i++)
    {
                    if(j>sum[n-1][i])
                    j=sum[n-1][i];
    }
    cout<<j;
    }
    else
    {
    m=0;
    for(i=0;i<n;i++)
    {
                    cin>>j;
                    m+=j;
    }
    cout<<m;
    }
    return 0;
}
                    
                    
