#include<iostream>
using namespace std;
int chk(int x)
{
 int n=0,m=-1,j=0,i;
 for(i=0;i<=x;i++)
 {
  j++;
  n=m;
  m++;
  if(j==4&&i!=x)
  {j=0;m=n-1;}
}
 return m;
}
int main()
{
    int x,y,m,n=1,s,t=0;
    cin>>t;
    while(n<=t)
    {
    n++;
    cin>>x;
    cin>>y;
    s=x+y;
    m=chk(s);
    if(m==x)
    {
     if(s==0) 
     cout<<"0";
     else if(s==2&&y==1)
     cout<<"1";
     else
     {
     m=chk(s-2);
     if(m==y)
     cout<<s;
     else 
     cout<<"No Number";
     }
     }
     else
     {
      s=s-1;   
      m=chk(s);
      if(m==x)
     {
     if(s==0&&y==0)
     cout<<"0";
     else if(s==1&&y==1)
     cout<<"1";
     else
     {
     m=chk(s-2);
     if(m==y)
     cout<<s;
     else 
     cout<<"No Number";
     }
     }
     else
     cout<<"No Number";
     }
     cout<<"\n";
}
    return 0;
}
