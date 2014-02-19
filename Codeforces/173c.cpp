#include<iostream>
#include<stdio.h>
#include<algorithm>
#define MAX 1000000
using namespace std;
bool arr[MAX]={0},brr[MAX]={0};

int main()
{
	bool flag=0;
	int lena,lenb,p,q;
	string a,b;
	cin>>a>>b;
	lena=a.size();
	lenb=b.size();
	cout<<"KIO";
	if(lena!=lenb)
	printf("NOP\n");
	else
	{
		
	  cout<<"HELLO";	
		for(int i=0;i<lena;i++)
		{
			cout<<"I";
			if(a[i]!=b[i])
			{
				if(i=0)
				{
					cout<<"CASE!";
					p=a[i]^a[i+1];
					q=a[i]|a[i+1];
					if(p==b[i] && q==b[i+1] )
					{
						if(a[i]==p)
						arr[i]=0;
						else
						arr[i]=1;
						if(a[i+1]==q)
						arr[i+1]=0;
						else
						arr[i+1]=1;
						i++;
					}
					else if(q==b[i] && p==b[i+1] )
					{
						if(a[i]==q)
						arr[i]=0;
						else
						arr[i]=1;
						if(a[i+1]==p)
						arr[i+1]=0;
						else
						arr[i+1]=1;
						i++;
					}
					else
					{
						flag=1;
						break;
					}
				}
				else if (i<lena-1)
				{
					cout<<"CASE2";
				    p=a[i]^a[i+1];
					q=a[i]|a[i+1];
					if(p==b[i] && q==b[i+1] )
					{
						if(a[i]==p)
						arr[i]=0;
						else
						arr[i]=1;
						if(a[i+1]==q)
						arr[i+1]=0;
						else
						arr[i+1]=1;
						i++;
					}
					else if(q==b[i] && p==b[i+1] )
					{
						if(a[i]==q)
						arr[i]=0;
						else
						arr[i]=1;
						if(a[i+1]==p)
						arr[i+1]=0;
						else
						arr[i+1]=1;
						i++;
					}
					else
					{
						  p=a[i]^a[i-1];
				          q=a[i]|a[i-1];
					  if(p==b[i] && q==b[i-1] )
					  {
						if(a[i]==p)
						arr[i]=0;
						else
						arr[i]=1;
						if(arr[i-1]==0 && arr[i-1]==q)
						arr[i-1]=0;
						else if(arr[i-1]==1 && arr[i-1]!=q)
						arr[i-1]=1;
						else
						{
							flag=1;
							break;
						}
						
					  }
					  else if(q==b[i] && p==b[i-1] )
				   	  {
						if(a[i]==q)
						arr[i]=0;
						else
						arr[i]=1;
						if(arr[i-1]==0 && arr[i-1]==p)
						arr[i-1]=0;
						else if(arr[i-1]==1 && arr[i-1]!=p)
						arr[i-1]=1;
						else
						{
							flag=1;
							break;
						}
					  }
					}	
				}
				else
				{
					cout<<"CASE#";
					  p=a[i]^a[i-1];
				          q=a[i]|a[i-1];
				          cout<<p<<" "<<q<<"\n";
					  if(p==b[i] && q==b[i-1] )
					  {
						if(a[i]==p)
						arr[i]=0;
						else
						arr[i]=1;
						if(arr[i-1]==0 && arr[i-1]==q)
						arr[i-1]=0;
						else if(arr[i-1]==1 && arr[i-1]!=q)
						arr[i-1]=1;
						else
						{
							flag=1;
							break;
						}
						
					  }
					  else if(q==b[i] && p==b[i-1] )
				   	  {
						if(a[i]==q)
						arr[i]=0;
						else
						arr[i]=1;
						if(arr[i-1]==0 && arr[i-1]==p)
						arr[i-1]=0;
						else if(arr[i-1]==1 && arr[i-1]!=p)
						arr[i-1]=1;
						else
						{
							flag=1;
							break;
						}
					  }
				}
				
			}
		}
		if(flag==1)
		printf("NO\n");
		else
		printf("YES\n");
	}
}
