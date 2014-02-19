#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n,w;
cin>>n>>w;
while(n!=0&&w!=0){
int e,i,v,a[100]={0},large=0;
float sum=0;
vector<int>vec;
for(i=0;i<n;i++)
{
cin>>v;
vec.push_back(v);
}
sort(vec.begin(),vec.end());
for(i=0;i<n;i++)
{
v=++a[(vec[i]/w)];
if(large<v)
large=v;
}
e=vec[n-1]/w;
for(i=e;i>=0;i--)
{
sum+=((float)(e-i)/(float)e)*((float)a[i]/(float)large);
}
sum+=0.01;
printf("%.6f\n",sum);
cin>>n>>w;
}
return 0;
}
