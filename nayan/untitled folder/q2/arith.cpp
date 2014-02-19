#include<iostream>
using namespace std;
int ad(int c,int a[])
{
     int i=0;
 while(c>=10)
 {
  a[i]=c%10;
  c=c/10;
  i++;
}
a[i]=c;
return i;
}
int main()
{
 int a[10]={0},b[10]={0};
 int i,c,m;
 cin>>c;
 cin>>m;
 int r=ad(c,a);
 int s=ad(m,b);
 cout<<r<<s<<"\n";
// int m=s+1;
 for(i=0;i<=s-r;i++)
 cout<<" ";
 for(i=r;i>=0;i--)
 cout<<a[i];
 cout<<"\n";
 for(i=r-(s+2);i>=0;i--)
 cout<<" ";
 cout<<"+";
 for(i=s;i>=0;i--)
 cout<<b[i];
 cout<<"\n";
 for(i=0;i<=r||i<=s;i++)
 cout<<"-";
 int w=m+c;
 
 system("pause");
 return 0;
}
