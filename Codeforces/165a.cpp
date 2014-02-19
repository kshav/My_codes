#include<iostream>
//#include<algorithm.h>
#include<stdio.h>
using namespace std;

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n=180-n;
		k=360/n;
		if(k*n==360)
		cout<<"YES\n";
		else
		cout<<"NO\n"; 
	}
	return 0;
}

