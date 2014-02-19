#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int i,n,k;
	scanf("%d%d",&n,&k);
	int a[n],b[n],c[n],d[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
	scanf("%d",&b[i]);
    
    for(i=0;i<n;i++)
	c[i]=a[i];
    for(i=0;i<n;i++)
	d[i]=b[i];
    
    for(i=1;i<n;i++)
    {
    	c[i]+=min(a[i-1],(b[i-1]+b[i]));
    	d[i]+=min((a[i-1]+a[i]),b[i-1]);
    	a[i]=c[i];
    	b[i]=d[i];
    }
    cout<<"\n";
    for(i=0;i<n;i++)
	printf("%d ",c[i]);
    cout<<"\n";
    for(i=0;i<n;i++)
	printf("%d ",d[i]);
    system("pause");
    return 0;
  // modified for view in github
}
