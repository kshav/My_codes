#include<iostream>
using namespace std;

int main()
{
    int tcases,t=0,n,p,c=1,b,d,s,flag;
    scanf("%d",&tcases);
    while(t<tcases)
    {scanf("%d",&n);
    scanf("%d",&p);
    int a[n][p];
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<p;j++)
            {
                    cin>>a[i][j];
            }
    }
    c=1;
    for(int j=0;j<p;j++)
    {       flag=0;
            for(int i=0;i<n;i++)
            {
            if(a[i][j]==1)
            {flag=1;
            break;}
            }
            if(flag==0)
            {c=0;
            break;}
    }
    b=1;
    for(int i=0;i<n;i++)
    {       flag=0;
            for(int j=0;j<p;j++)
            {
                    if(a[i][j]==1)
                    {flag=1;
                    break;}
            }
            if(flag==0)
            {b=0;
            break;}
    }
    d=1;
    for(int i=0;i<n;i++)
    {       flag=0;
            for(int j=0;j<p;j++)
            {
                    if(a[i][j]==0)
                    {flag=1;
                    break;}
            }
            if(flag==0)
            {d=0;
            break;}
    }
    if(c==0 && b==0 && d==0)
    s=0;
    else if(c==0 && b==0 && d==1)
    s=1;
    else if(c==0 && b==1 && d==0)
    s=2;
    else if(c==0 && b==1 && d==1)
    s=3;
    else if(c==1 && b==0 && d==0)
    s=4;
    else if(c==1 && b==0 && d==1)
    s=5;
    else if(c==1 && b==1 && d==0)
    s=6;
    else if(c==1 && b==1 && d==1)
    s=7;
    cout<<"Case "<<t+1<<": "<<s<"\n";
    t++;
  }
  system("pause");
  return 0;
  }                                            
