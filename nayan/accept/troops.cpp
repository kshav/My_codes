#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,n,test;
    cin>>test;
    while(test--)
    {
    cin>>n;
    int a[n][3];
    for(i=0;i<n;i++)
    for(j=0;j<3;j++)
     cin>>a[i][j];
     if(n==1)
     i=min(min(a[0][0],a[0][1]),a[0][2]);
     else if(n==2)
     {
     i=min(min(a[0][0],a[0][1]),a[0][2]);
     i+=min(min(a[1][0],a[1][1]),a[1][2]);
     }
     else 
     {
     int sum[n][3];
     sum[0][0]=a[0][0];
     sum[0][1]=a[0][1];
     sum[0][2]=a[0][2];
     for(i=1;i<n;i++)
     {
     sum[i][0]=min(sum[i-1][1],sum[i-1][2])+a[i][0];
     sum[i][1]=min(sum[i-1][0],sum[i-1][2])+a[i][1];
     sum[i][2]=min(sum[i-1][0],sum[i-1][1])+a[i][2];
     }
     i=min(min(sum[n-1][0],sum[n-1][1]),sum[n-1][2]);
     }
     cout<<i<<"\n";}
    return 0;
}
