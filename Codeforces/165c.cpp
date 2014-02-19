#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int a,b,sum,m,j,t=0,ans=0,temp;
	while(n--)
	{
	cin>>a>>b;
	t=0;
	temp=0;
	while(b>t)
	{
	     temp++;
	     if(t==0)
	     t=4;
		 else
		 t=t*4;	
	}
	ans=max(ans,temp+a);
    }
    cout<<ans;
    return 0;
    
}
