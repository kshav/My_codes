#include<iostream>
using namespace std;

int main()
{
	int m,n,k,a=0,b=0;
	cout<<"\nEnter the capacity of Jug 1: ";
	cin>>m;
	cout<<"\nEnter the capacity of Jug 2: ";
	cin>>n;
	cout<<"\nAmount of water in Gallons you want: ";
	cin>>k;

	while(a!=k)
	{
		if(b==0)
		{
			b=3;
			cout<<"\na="<<a<<" b="<<b;
		}
		if(a==2)
		break;
		a=a+b;
		if(a>m)
		 {  b=(a-m);
		 	a=m;
		 }
        else
        b=0;
			cout<<"\na="<<a<<" b="<<b;
		if(a==2)
		break;
		if(a==m)
		a=0;	
	        cout<<"\na="<<a<<" b="<<b;
	        if(a==2)
		break;
	}
	 // cout<<"\na="<<a<<" b="<<b;
	  system("pause");
	  return 0;

}
