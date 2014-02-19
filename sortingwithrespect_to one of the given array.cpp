#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
void mergesort(int a[],int b[],int p,int q,int r,int n)
{
     int x[n],z[n],k=0,i=p,j=r+1;
     while(i<=r && j<=q)
     {
      if(a[i]<=a[j])
      {x[k++]=a[i++];
       z[k++]=b[i++];}
      else
      {x[k++]=a[j++];
       z[k++]=b[j++];}
     };
     if(i<=r)
     {
      for(;i<=r;i++)
      {x[k++]=a[i];
       z[k++]=b[i];}
     }
     else
     {
      for(;j<=q;j++)
      {x[k++]=a[j];
       z[k++]=b[j];}
     }
     for(i=0;i<k;i++)
     {a[i+p]=x[i];
      b[i+p]=z[i];}
}
void ms(int a[],int b[],int p,int q,int n)
{
     if(p<q)
     {
            int r=(p+q)/2;
            ms(a,b,p,r,n);
            ms(a,b,r+1,q,n);
            mergesort(a,b,p,q,r,n);
     }
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    cin>>b[i];
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<"\n";
    cout<<"\n\n";
    ms(a,b,0,n-1,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    for(i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<"\n";
    
    system("pause");
    return 0;
}      
