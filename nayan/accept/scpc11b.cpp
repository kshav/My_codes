#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n,i,v;
cin>>n;
while(n!=0)
{
vector<int>vec;
int flag=0,e=0;
for(int i=0;i<n;i++)
{
cin>>v;
vec.push_back(v);
}
vec.push_back(1422);
sort(vec.begin(),vec.end());
for(int i=1;i<n;i++)
{
if((vec[i]-vec[i-1])>200)
{
flag=1;
break;
}
}
e=vec[n]-vec[n-1];
if(2*e>200)
flag=1;
if(flag==0)
cout<<"POSSIBLE\n";
else
cout<<"IMPOSSIBLE\n";
cin>>n;
}
return 0;
}
