#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,i,j,c,count=0;
    cin>>n>>k;
    vector<int>v;
    for(i=0;i<n;i++)
    {
    cin>>c;
    v.push_back(c);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;(v[j]-v[i]<=k)&&j<n;j++)
    if(v[j]-v[i]==k)
    count++;
    }
    cout<<count;
    return 0;
}
