#include<iostream>
using namespace std;

int main()
{
	long long int n,m,start=0,temp=0,last=0,height=0;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	long long int w[m],h[m];
	 for(int i=0;i<m;i++)
	cin>>w[i]>>h[i];
	for(int i=0;i<m;i++)
	{
		temp=w[i];
		height=max(last+1,a[temp-1]);
        cout<<height<<"\n";
		last=height+h[i]-1;		
	}
	return 0;
}
