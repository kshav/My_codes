#include<iostream>
using namespace std;

int main()
{
    int n,k,l=0;
    cin>>n;
    k=(n*(n+1))/2;
    int arr[n][n],a[k];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>arr[i][j];
    
    for(int i=0;i<n;i++)
    {for(int j=i;j<n;j++)
    {
    a[l]=arr[i][j];
    l++;}}
    
    for(int i=0;i<k;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    
    system("pause");
    return 0;
}
