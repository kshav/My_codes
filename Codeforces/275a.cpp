#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;




int main()
{
	int a[3][3],sum;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	cin>>a[i][j];
	
	for(int i=0;i<3;i++)
	{
		
		for(int j=0;j<3;j++)
		{
		    sum=0;
			sum+=a[i][j];	
			if(i-1>=0)
			sum+=a[i-1][j];
		 if(i+1<3 )
			sum+=a[i+1][j];
			 if( j-1>=0)
			sum+=a[i][j-1];
			 if( j+1<3)
			sum+=a[i][j+1];
			if(sum%2==0)
			cout<<"1";
			else
			cout<<"0";
		
			
			
		}
		cout<<"\n";
	}
	return 0;
}
