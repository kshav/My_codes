#include<iostream>
#include<conio.h>
using namespace std;
void fnd(int x,int c[],int &m)
{
 int k=-1;
 while(x!=0)
 {
  c[++k]=x%10;
  x=x/10;
  m++;
}
}
 
int main()
{
    int i=0,j=0,x,y,a[100]={},b[100]={},c[100]={},m=0,n=0,f=1,flag=0;
    cin>>x;
   cin>>y;
    fnd(x,a,m);
    fnd(y,b,n);
    x=0;
    y=0; 
    for(i=0;a[i]==0;i++);
    for(j=0;b[j]==0;j++);
    while(i<m&&j<n)
    {
     c[y++]=a[i]+b[j]+x;
     x=c[y-1]/10;
     c[y-1]=c[y-1]%10;
     i++;
     j++;
    }
    while(i<m)
    {
    c[y++]=a[i]+x;
    x=0;
    i++;
    }
    while(j<n)
    {
    c[y++]=c[y]+x;
    x=0;
    i++;
    }
    if(x!=0)
    c[y++]=x;
    for(i=0;i<y;i++)
    {
   if(c[i]==0&&flag==0);
   else 
   {
    cout<<c[i];
    flag=1;
    }
     }
   getch();
    return 0;
}
