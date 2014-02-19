#include<iostream>
#include<stdio.h>
using namespace std;
long long int a[100005],b[100005],c[100005],d[100005],e[100005],f[100005];
int main()
{
	long long int n,m,k,x,y;
	
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int j=1;j<=m;j++)
	cin>>c[j]>>e[j]>>f[j];
	for(int u=1;u <= k ;u++)
	{
		cin>>x>>y;
		d[x]++;
		d[y+1]--;
    }
	
	for(int i=1;i<=m;i++)
    {
    
	        d[i]+=d[i-1];	
		
			b[c[i]]+=d[i]*f[i];
			b[e[i]+1]-=d[i]*f[i];
	}
	
	
	for(int i=1;i<=n;i++)
	{
		b[i]+=b[i-1];
		a[i]=a[i]+b[i];
	   // b[i+1]+=b[i];
	}
    
	for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
	return 0; 	
}
