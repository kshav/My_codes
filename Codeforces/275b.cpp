#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<queue>
using namespace std;
bool flags[55][55]={0};
char a[55][55];
int pos1=0,pos2=0,n,m;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void fire()
{
	int ii,ji,i,j;
        queue<int> myqueue,ko;	    
        myqueue.push(pos1);
        ko.push(pos2);
		while(!myqueue.empty())
        {	    
         ii=myqueue.front();myqueue.pop();   
	 	 ji=ko.front();ko.pop();
		
         
         if(a[ii][ji]=='B')
         {
         
         for(int k=0;k<4;k++)
         {
         i=ii+dx[k];
         j=ji+dy[k];
         if(i>=0 && j>=0 && (i)<n && j<m && flags[i][j]==0 )
	     {
          flags[i][j]=1;   
         myqueue.push(i);
         ko.push(j);
         }
         }
         }
         flags[ii][ji]=2;
	    }
}



int main()
{   
    bool flag=0,flag2=0;
    
	cin>>n>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<m;j++)
	{
	
	if(a[i][j]=='B')
	{
		pos1=i;
		pos2=j;
		break;
	}
    }
    }
	cout<<pos1<<" "<<pos2<<"\n";
	fire();
/*	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cout<<flags[i][j]<<" ";
		cout<<"\n";
	}
*/
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		if(a[i][j]=='B' && flags[i][j]==0)
    		{
    			flag2=1;
    			break;
    		}
    	}
    }
    	if(flag2==0){
    	
	for(int i=0;i<n;i++)
	{
		flag=0;
		for(int j=0;j<m;j++)
		{
		    
		  if(a[i][j]=='B' && j==0)
		  flag=1;
		  else if(a[i][j]=='B' && flag==0)
		  {
		  	flag=1;
		  }
		  else if(a[i][j]=='B' && flag==1 && a[i][j-1]=='W')
		  {
		  	flag2=1;
		  	break;
		  	
		  }
			
			
		}
		if(flag2==1)
		break;
		
	}
	}
	if(flag2==0)
	{
		for(int i=0;i<m;i++)
	{
		flag=0;
		for(int j=0;j<n;j++)
		{
		    
		  if(a[j][i]=='B' && j==0)
		  flag=1;
		  else if(a[j][i]=='B' && flag==0)
		  {
		  	flag=1;
		  }
		  else if(a[j][i]=='B' && flag==1 && a[j][i-1]=='W')
		  {
		  	flag2=1;
		  	break;
		  	
		  }
			
			
		}
		if(flag2==1)
		break;
		
	}
	}
	if(flag2==1)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	return 0;
}
