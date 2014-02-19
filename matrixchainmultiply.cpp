#include<iostream>
using namespace std;

int m[100][100],s[100][100];
void print(int i,int j)
{
     if(i==j)
     cout<<"A"<<i;
     else
     {
         cout<<"(";
         print(i,s[i][j]);
         print(s[i][j]+1,j);
         cout<<")";
     }
}

int main()
{
    int n,a,b;
    cout<<"No of matrices: ";
    cin>>n;
    cout<<"Order of matrices in  multiplying: ";
    int p[n+1];
    for(int i=0;i<n+1;i++)
    cin>>p[i];
    cout<<"\n\n";
    for(int i=0;i<n+1;i++)
    cout<<p[i]<<" ";
    cout<<"\n\n";
    
    for(int i=1;i<=n;i++)
    { for(int j=1;j<=n;j++)
      m[i][j]=0;
    }
    for(int i=1;i<=n;i++)
    { for(int j=1;j<=n;j++)
      s[i][j]=0;
    }        
    int j,q;
    for(int l=2;l<=n;l++)
    {
     for( int i=1;i<=n-l+1;i++)
     {  j=i+l-1;   
        m[i][j]=1000000;
        for(int k=i;k<j;k++)
        {
           q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
           if(q<m[i][j])
           {m[i][j]=q;
            s[i][j]=k;}
        }
     }   
    }
     cout<<"\n\n\n";
   
     for(int i=1;i<=n;i++)
    { for(int j=1;j<=n;j++)
      cout<<m[i][j]<<" ";
      cout<<"\n";
    }
    cout<<"\n\n";
    for(int i=1;i<=n;i++)
    { for(int j=1;j<=n;j++)
      cout<<s[i][j];
      cout<<"\n";
    }
    print(1,n); 
   
    system("pause");
    return 0;
}  
