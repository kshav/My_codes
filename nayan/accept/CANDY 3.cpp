#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    cout<<"\n";
    long long sum=0,n,a,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>a;
    sum+=(a%n);
    }
    if(sum%n==0)cout<<"YES\n";
    else cout<<"NO\n";
    }
    return 0;
}
