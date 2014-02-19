#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int memcutrod(int p[],int n,int r[])
{
	int q;
 if(r[n]>=0)
 return r[n];
 if(n==0)
 q=0;
 else
 {
	 q=-200;
	 for(int i=1;i<=n;i++)
	 q=max(q,p[i]+memcutrod(p,n-i,r));
	 r[n]=q;
	 
 }
 return q;
}
int cutrod(int p[],int n)
{
	int r[n];
	for(int i=1;i<=n;i++)
	r[i]=-200;
	return memcutrod(p,n,r);
}

int main()
{
 int l,n;
 cout<<"enter the maximum length of the rod";
 cin>>l;
 int p[l+1];
 srand(time(0));
 for(int i=1;i<=l;i++)
 {
         cin>>p[i];
//	p[i]=rand()%20;
	cout<<p[i]<<"\n";
 }
 cout<<"enter the length of the rod";
 cin>> n;
 if(n<=l){
 int c=cutrod(p,n);
 //cout<<"hello";
 cout<<c;}
 else
 cout<<"wrong choice";
 return 0;
}
