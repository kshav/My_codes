
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstdio>
/////////////////
#define GI ({int t;scanf("%d",&t);t;})

#define PInt(a) printf("%d\n",(a))

#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)

using namespace std;


int a[100001], n;
int main () {
	int i, j, k, t;
	n = GI;
	FOR(i,0,n)
		a[i] = GI;
	int len = 1;
	for(i=n-1;i>=1;i--)	
		if(a[i]>a[i-1])
			len++;			
		else break;		
	PInt(n-len);	
	return 0;
}
