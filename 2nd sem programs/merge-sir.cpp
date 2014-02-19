#include<iostream>
#include<conio.h>
using namespace std;
int p,q,r,i,j;
void ms(int a[],int p,int q);
void merge(int a[],int p,int q,int r);
int main()
{
    int n;
    cout<<"enter the no of elements\n";
    cin>>n;
    int a[n];
    p=0;q=n-1;
    cout<<"enter the elements\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    ms(a,p,q);
    cout<<"sorted list is\n";
    for(i=0;i<n;i++)
    cout<<a[i];
    getch();
    return 0;
}
    
void ms(int a[],int p,int q)
{
     if(p<q)
     {
            r=(p+q)/2;
            ms(a,p,r);
            ms(a,r+1,q);
            merge(a,p,q,r);
     }
}
void merge(int a[],int p,int q,int r)
{
     int n1,n2;
     n1=r-p+1;
     n2=q-r;
     int ll[n1+1],rr[n2+1];
     for(i=1;i<n1;i++)
     ll[i]=a[p+i-1];
     for(j=1;j<n2;j++)
     rr[j]=a[r+j];
     
     i=j=0;
     p=0;
     while((i<n1)&&(j<n2))
     {
                          if(ll[i] < rr[j])
                            a[p++]=ll[i++];
                          else
                          a[p++]=rr[j++];
     }
     while(i<n1)
     a[p++]=ll[i++];
     while(j<n2)
     a[p++]=rr[j++];
}      
