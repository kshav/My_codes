#include<iostream>
#include<conio.h>
using namespace std;
void sw(int& a,int &b)
{
 int t;
 t=a;
 a=b;
 b=t;
}
int part(int  a[],int p,int q)
{
 int x=a[q];
 int i=p;
 for(int j=p;j<=(q-1);j++)
 {
  if(a[j]<=x)
  {
   sw(a[i],a[j]);
   i++;
  }
 }
 sw(a[i],a[q]);
 return(i);
}
void qs(int a[],int p,int q)
{
     if(p<q)
     {
      int r=part(a,p,q);
      qs(a,p,r-1);
      qs(a,r+1,q);
     }
}
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    cout<<a[i]<<" ";
    qs(a,0,9);
    cout<<"\n";
    for(i=0;i<10;i++)
    cout<<a[i]<<" ";
    getch();
    return 0;
}
    
