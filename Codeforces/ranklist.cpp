#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int n,k,pos,i,ans;
   int f2=0;
    int pos2;
    int n2;
    cin>>n>>k;
    int a[n];
    int f=0;
    for(i=0;i<n;i++)
    {
                    cin>>a[i];
    }
    sort(a,a+n);
    int p1=502,p2=502,j;
    for(i=0;i<n;i++)
    {
                    if(a[i]==k)
                    {
                               for(j=i;j<floor((n-1)/2);j++)
                               {
                                               if(a[j]==k)
                                               p1=j;
                               }
                              for(j=floor((n-1)/2);j<n;j++)
                               {
                                                            if(a[j]==k)
                                                            {
                                                                       p2=j;
                                                                       break;
                                                            }
                               }                
                               f=1;
                               if(p1<p2)
                               pos=p1;
                               else
                               pos=p2;
                               
                    }
    }
   // cout<<pos<<endl;
    int k2;
    if(f==1)
    {
            if(k==a[(int)floor((n-1)/2)])
            ans=0;
            else if(pos<floor((n-1)/2))
            ans=n-2*(pos+1);
            else
           {
                
                ans=2*pos+1-n;
           }
    }
    
    else if(f==0)
    {
         pos2=0;
         for(i=0;i<n;i++)
         {
                         if(a[i]>k)
                         {
                                   pos2=i;
                                   f2=1;
                                   break;
                         }
         }
         if(f2==0)
         pos2=n;
       //cout<<pos2<<endl;;
         n2=n+1;
         if(pos2==floor((n2-1)/2))
         ans=0;
         else if(pos2<floor((n2-1)/2))
         ans=n2-2*(pos2+1);
         else
         {
           ans=2*pos2+1-n2;
         }
         ans=ans+1;
    }
    cout<<ans;
    //system("pause");
    return 0;
}
         
                      
    
