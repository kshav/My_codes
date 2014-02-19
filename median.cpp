//By littlefriend, contest: Codeforces Round #113 (Div. 2), problem: (C) Median, Accepted, #

#include<cstdio>
#include<algorithm>
using namespace std;
int a[1111];
int main()
{
	int n,x,i,ans;
	scanf("%d%d",&n,&x);
	for (i=1;i<=n;i++) 
    scanf("%d",a+i);
	sort(a+1,a+n+1);
	for (ans=0;a[(n+ans+1)/2]!=x;ans++)
    {
		a[n+ans+1]=x;
		sort(a+1,a+n+ans+2);
	}
	printf("%d\n",ans);
	return 0;
}
