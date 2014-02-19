#include<iostream>
#include<conio.h>
using namespace std;
void mergesort(int a[],int p,int q,int r,int n)
{
     int x[n],k=0,i=p,j=r+1;
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
void ms(int a[],int p,int q,int n)
{
     if(p<q)
     {
            int r=(p+q)/2;
            ms(a,p,r,n);
            ms(a,r+1,q,n);
            mergesort(a,p,q,r,n);
     }
}
int main()
{
   clock_t t1;
    int i,n,c;
    cout<<"enter total number of elements ";
    cin>>n;
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++)
    a[i]=rand()%100;
    ms(a,0,n-1,n);
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
     clock_t t2;
    cout<<endl<<(t1-t2)/1000<<endl;
    getch();
    return 0;
}      
