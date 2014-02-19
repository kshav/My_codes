#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
    vector<int>v;
    int a,n,i,k,l,small=0;
    cin>>n>>k;
    i=n;
    for(i=1;i<=n;i++)
    {
    cin>>a;
    v.push_back(a);
    }
    sort(v.begin(),v.end());
    i=n-1;
    k--;
    l=v[i]-v[i-k];
    
    small=l;
    while(i-k>=0)
    {
     l=v[i]-v[i-k];
    if(small>=l)
    small=l;
    i--;
    }
    cout<<small<<"\n";
    t--;
    }
    return 0;
}
