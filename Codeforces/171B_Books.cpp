#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	int n,t,p1=0,p2=0,ans=0,sum=0,temp=0;
	scanf("%d%d",&n,&t);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int p1=0;p1<n;)
	{
		if(sum+a[p1]<=t)
		{
			sum+=a[p1];
			p1++;
			temp++;
		    if(temp>ans)
		    ans=temp;
		}
		else
		{
				sum-=a[p2];
				p2++;
				temp--;
		}
	}
	cout<<ans<<"\n";
}
