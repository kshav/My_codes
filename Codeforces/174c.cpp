#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
typedef long long int ll;
using namespace std;
ll count(ll n)
{
ll cnt=0;
while(n!=0)
cnt+=n%2,n/=2;
return cnt;
}
int main()
{
ll i,n,ans=0,cnt=0;
cin>>n;
ll a[n],val[102]={0};
for(i=0;i<n;i++)
{cin>>a[i];
cnt=count(a[i]);
val[cnt]++;
}
for(i=0;i<102;i++)
ans+=(val[i]*(val[i]-1))/2;
cout<<ans;
return 0;
}
