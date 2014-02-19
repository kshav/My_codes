#include<iostream>
#include<conio.h>
using namespace std;
int part(int  a[],int p,int q)//function to fix key to it's proper position
{
   int x=a[q],i=p;
   for(int j=p;j<=(q-1);j++)
    {
      if(a[j]<=x)
      {
       swap(a[i],a[j]);
       i++;
      }
    }
  swap(a[i],a[q]);
  return(i);
}
void qs(int a[],int p,int q,int n)//function to find kth largest element
{
     if(p<q)
     {
      int r=part(a,p,q);
      if(r==n)
      return ;
      else if(r>n)
      {
      qs(a,p,r-1,n);
      return;
      }
      else
      qs(a,r+1,q,n);
      return;
     }
}
int main()
{
    int a[10],i,n;
    for(i=0;i<10;i++)
     cin>>a[i];
    for(i=0;i<10;i++)
     cout<<a[i]<<" ";
    cout<<"\nenter the kth largest number you want to find ";
    cin>>n;
    qs(a,0,9,10-n);
    cout<<"\n"<<a[10-n]<<"\n";
    getch();
    return 0;
}
    
