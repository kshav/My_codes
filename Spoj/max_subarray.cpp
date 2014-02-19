#include<iostream>
using namespace std;

int max( int a , int b, int c )
{
    if(a >=b && a>=c)
    return a;
    else if ( b>=a && b>=c)
    return b;
    else
    return c;
}

int main()
{
    int n,a,b;
    cin>>n;
    int m[n],s[n+1][n+1];
    
     for(int i=0;i<=n;i++)
     { for(int j=1;j<=n;j++)
      s[i][j]=0;}
    
    for(int i=0;i<n;i++)
    cin>>m[i];
    cout<<"\n\n";
     int temp=0;
    for( int j=1;j<=n;j++)
    {s[1][j]=m[j]+temp;
    temp=s[1][j];}

    for(int i=2;i<=n;i++)
    {
     for( int j=i;j<=n;j++)
     {     
        s[i][j]=s[i-1][j]-s[i-1][j-1];
     }   
    }
     cout<<"\n\n\n";
   
     for(int i=1;i<=n;i++)
    { for(int j=1;j<=n;j++)
      cout<<s[i][j]<<" ";
      cout<<"\n";
    }
    cout<<"\n\n";
 /*   for(int i=1;i<=n;i++)
    { for(int j=1;j<=n;j++)
      cout<<s[i][j];
      cout<<"\n";
    } */
    cin>>a>>b;
    cout<<s[a][b]<<"\n"; 
   
    system("pause");
    return 0;
}  
