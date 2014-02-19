#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int rod(int p[],int n)
{
	int r[n],q;
	r[0]=0;
	for(int j=1;j<=n;j++)
	{
		q=-200;
		for(int i=1;i<=j;i++)
		q=max(q,p[i]+r[j-i]);
		r[j]=q;
	}
		return r[n];
	}
int main()
{
	int l,n;
	srand(time(0));
 cout<<"enter the maximum rod length";
 cin>>l;
 int p[l+1];
 for(int i=1;i<=l;i++){
// p[i]=rand()%20;
cin>>p[i];
 cout<<p[i]<<"\n";
}
while(1){
 cout<<"enter the length of the rod";
 cin>>n;
 if(n<=l){
 int c=rod(p,n);
 cout<<c;}
 else
 cout<<"wrong choice";}
 return 0;
}
