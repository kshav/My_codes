#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int x,y,a,b,ans=0;
	scanf("%d%d",&a,&b);
	x=abs(a);
	y=abs(b);
	if(a<0 && b>=a && b<x)
	{
		ans=3+4*(x-1);
	//	cout<<"Step 0";
    }
    else if(b>0 && a>=-b && a<b)
	{
		ans=2+4*(y-1);
	//	cout<<"Step 1";
	}
	else if(a>0 && b>-(x-1) && b<=x)
	{
		ans=1+4*(x-1);
	//	cout<<"Step 2";
	}
	else
	{
		ans=y*4;
	//	cout<<"Step 3";
	}
	cout<<ans<<"\n";
	return 0; 
	
	
}
