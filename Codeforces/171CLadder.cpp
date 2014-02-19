#include<iostream>
#include<stdio.h>
using namespace std;
#define MAX 100005
int a[MAX],inc[MAX],de[MAX];

int main()
{
	int n,m,p,q,t;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	inc[n]=n;
	t=n;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]<=a[i+1])
		inc[i]=t;
		else
		{
			inc[i]=i;
			t=i;
		}
	}
	
	de[n]=n;
	t=n;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]>=a[i+1])
		de[i]=t;
		else
		{
			de[i]=i;
			t=i;
		}
	}
	
	while(m--)
	{
		scanf("%d%d",&p,&q);
		if(inc[p]>=q)
		printf("Yes\n");
		else if(de[p]>=q)
		printf("Yes\n");
		else if(de[inc[p]]>=q)
		printf("Yes\n");
		else
		printf("No\n");
		
	}
	return 0;
}
