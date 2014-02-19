#include<iostream>

using namespace std;

void mergesort(long long int a[],long long int stat[],int p,int q,int r,int n)
{
     int k=0,i=p,j=r+1;
     long long int x[n],z[n];
     while(i<=r && j<=q)
     {
      if(a[i]<=a[j])
      {x[k]=a[i];
       z[k++]=stat[i++];}
      else
      {x[k]=a[j];
       z[k++]=stat[j++];}
     };
     if(i<=r)
     {
      for(;i<=r;i++)
      {x[k]=a[i];
       z[k++]=stat[i];}
     }
     else
     {
      for(;j<=q;j++)
      {x[k]=a[j];
       z[k++]=stat[j];}
     }
     for(i=0;i<k;i++)
     {a[i+p]=x[i];
      stat[i+p]=z[i];}
}

void ms(long long int a[],long long int stat[],int p,int q,int n)
{
     if(p<q)
     {
            int r=(p+q)/2;
            ms(a,stat,p,r,n);
            ms(a,stat,r+1,q,n);
            mergesort(a,stat,p,q,r,n);
     }
}
int main()
{
    int n,sum,max,k,t=0;
    scanf("%d",&k);
    while(t<k)
    {
    scanf("%d",&n);
    n=2*n;
    long long int a[n],stat[n],i;
    for(int i=0;i<n;i++)
    {scanf("%lld",&a[i]);
     if(i%2==0)
     stat[i]=0;
     else
     stat[i]=1;
    }
   // for(int i=0;i<n;i++)
   // cout<<a[i]<<" "<<stat[i]<<"\n";
    //cout<<"\n\n";
    ms(a,stat,0,n-1,n);
    
   // for(int i=0;i<n;i++)
    //cout<<a[i]<<"\n";
    
   // cout<<"\n\n"; 
    sum=0;
    for(i=0;i<n;i++)
    {
       if(stat[i]==0)
       sum++;
       else
       sum--;
       //cout<<sum;
       if(sum>max)
       max=sum;
    }
    printf("%d\n",max);
     t++;
   }
    system("pause");
    return 0;
}      
