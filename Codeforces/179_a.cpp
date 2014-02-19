#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int n, a[1005]={0},k,flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		a[k]++;
	}
	for(int i=0;i<1005;i++)
	{
		if(a[i]>n-a[i]+1)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	return 0;
}
