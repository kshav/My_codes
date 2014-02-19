#include <stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
 
#define MAX 100000
 
int arr[MAX];
 long long int solve(int n)
 {
	if(n < MAX)
		return arr[n];
	else
		return (long long int)((long long)solve(n/2) + (long long)solve(n/3) + (long long)solve(n/4));
 
}
int main()
{
	
	int i,temp,c;
	
 
	for(i = 0;i < MAX;i++)
	{
		arr[i] = i;
		if( (temp = arr[i/2]+arr[i/3]+ arr[i/4]) > arr[i] )
			arr[i] = temp;
 
	}
	
	while(scanf("%d",&c) != EOF)
	{	
		printf("%lld\n",solve(c));
	}
	getch();
	return 0;
}
 
