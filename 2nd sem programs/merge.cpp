#include<iostream>
#include<conio.h>
using namespace std;
void mergesort(int a[],int p,int q,int r)
{
     int x[10],k=0,i=p,j=r+1;
     while(i<=r && j<=q)
     {
      if(a[i]<=a[j])
      x[k++]=a[i++];
      else
      x[k++]=a[j++];
     };
     if(i<=r)
     {
      for(;i<=r;i++)
      x[k++]=a[i];
     }
     else
     {
      for(;j<=q;j++)
      x[k++]=a[j];
     }
     for(i=0;i<k;i++)
     a[i+p]=x[i];
}
void ms(int a[],int p,int q)
{
     if(p<q)
     {
            int r=(p+q)/2;
            ms(a,p,r);
            ms(a,r+1,q);
            mergesort(a,p,q,r);
     }
}
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    ms(a,0,9);
    for(i=0;i<10;i++)
    cout<<a[i]<<" ";
    getch();
    return 0;
}      
