#include<iostream>
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
    int t,q=0;
    scanf("%d",&t);
    while(q<t){
    q++;
    int i=0,j=0,x,y,a[100]={},b[100]={},c[100]={},m=0,n=0,flag=0;
    scanf("%d",&x);
    scanf("%d",&y);
    fnd(x,a,m);
    fnd(y,b,n);
    x=0;
    y=0; 
    i=m-1;
    j=n-1;
    while(i>=0&&j>=0)
    {
     c[y++]=a[i]+b[j]+x;
     x=c[y-1]/10;
     c[y-1]=c[y-1]%10;
     i--;
     j--;
    }
    while(i>=0)
    {
    c[y++]=a[i]+x;
    x=0;
    i--;
    }
    while(j>=0)
    {
    c[y++]=c[y]+x;
    x=0;
    j--;
    }
    if(x!=0)
    c[y++]=x;
   
    for(i=y-1;c[i]==0;i--);
    for(j=0;j<=i;j++)
    {
     if(c[j]==0&&flag==0);
     else
     {
     flag=1;
    printf("%d",c[j]);
    }
    }
     printf("\n");
     }
     return 0;
}
