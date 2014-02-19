#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j,l=-1,t,n,s[2001],e[2001],k[2001];
    long long int val[2001],ans[2001];
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&n);
      for(i=1;i<=n;i++)          
      scanf("%d%d%lld",&s[i],&e[i],&val[i]);
      
      for(i=1;i<n;i++)
       for(j=1;j<n;j++)
         if(e[j]>e[j+1])
         {swap(s[j],s[j+1]);
          swap(e[j],e[j+1]);                          
          swap(val[j],val[j+1]);
         }
   //      cout<<"\n";
   //   for(i=0;i<n;i++)
    //  cout<<s[i]<<" "<<e[i]<<" "<<val[i]<<"\n";   
   //     
      k[0]=0;
      k[1]=0;   
      for(i=2;i<=n;i++)
      {
         j=i;
         l=-1;
         while(s[i]<e[j-1])
         {
            j--;
            l=0;
            if(j==2)
            {j=1;
             break;
            }
         }               
         if(l==-1 )
         k[i]=i-1;
         else
         k[i]=j-1;
      }
   //   cout<<"\n";
  //    for(i=0;i<n;i++)
   //   cout<<k[i]<<" ";
    //    cout<<"\n";
      ans[0]=0;
      for(j=1;j<=n;j++)
      ans[j]=max(val[j]+ans[k[j]],ans[k[j-1]]);
      printf("%lld\n",ans[n]);
    }
  //  system("pause");
    return 0;
}
         
         
         
         
