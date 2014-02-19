#include<iostream>
#include<math.h>
using namespace std;
long long int left(long long int i)
{
    return (2*i+1);
}
long long int right(long long int i)
{
    return (2*i+2);
}
void maxheapify(long long int a[],long long int b[],long long int i,long long int hs)
{
     int n=sizeof(a)/sizeof(a[0]);
     int l,r,large;
     l=left(i);
     r=right(i);
     if(l<=hs && a[l]>a[i])
     large=l;
     else
     large=i;
     if(r<=hs && a[r]>a[large])
     large=r;
     if(large!=i)
     {
                 swap(a[i],a[large]);
                 swap(b[i],b[large]);
                 maxheapify(a,b,large,hs);
     }
}
void buildheap(long long int a[],long long int b[],long long int n,long long int hs)
{
               hs=n;
               for( long long int i=floor((n)/2);i>=0;i--)
               {
                                         maxheapify(a,b,i,hs);
               }
}
void heapsort(long long int a[],long long int b[],long long int n)
{
     long long int hs=n;
     buildheap(a,b,n,hs);
     for(int i=n;i>=1;i--)
     {
                      swap(a[i],a[0]);
                      swap(b[i],b[0]);
                      hs--;
                      maxheapify(a,b,0,hs);
     }
}
int main()
{
    int t,cnt;
    long long int n,i,c,j;
    cin>>t;
    while(t--)
    {
              cout<<endl;
              cin>>n;
              long long int a[n],b[n];
              for(i=0;i<n;i++)
              {
                              cin>>a[i]>>b[i];
              }
              heapsort(a,b,n-1);
              /*c=0;
              for(i=0;i<n;i++)
              {
                              cout<<a[i]<<" "<<b[i]<<endl;
              }*/
              int min=1000;
              for(i=0;i<n;i++)
              {               cnt=0;
                              for(j=0;j<n;j++)
                              {
                                 if(j!=i)
                                 {
                                         if( (a[j]<b[i] && b[j]>=b[i]) || (a[j]<a[i] && b[j]>a[i]))
                                         cnt++;
                                         
                                 }
                              }
                              cout<<cnt;
                              if(cnt<min)
                              min=cnt;
              }
              cout<<n-min<<"\n";
    }
    system("pause");
    return 0;
}
