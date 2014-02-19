#include<iostream>
using namespace std;
int main()
{
    int n,t=0,l1,l2,d,e,ans,flag=0;
    string a,b;
    cin>>n;
    while(t<n)
    {    d=e=0;
         cin>>a>>b;
         l1=a.size();
         l2=b.size();
         int tick[l2];
         for(int i=0;i<l2;i++)
         tick[i]=0;
         for(int i=0, j=0;i<l2 && j<l1;j++)
         {
                 if(b[i]==a[j])
                 {tick[i]=1;
                  i++;}
         }
         flag=0;
         for(int i=0;i<l2;i++)
         {
                 if(tick[i]==0)
                 flag=1;
         }
         if(flag==0)
         d=1;
         
         for(int i=0;i<l2;i++)
         tick[i]=0;
         for(int i=0, j=l1-1;i<l2 && j>=0;j--)
         {
                 if(b[i]==a[j])
                 {tick[i]=1;
                  i++;}
         }
         flag=0;
         for(int i=0;i<l2;i++)
         {
                 if(tick[i]==0)
                 flag=1;
         }
         if(flag==0)
         e=1;
         if(d==1 && e==1)
         ans=3;
         else if(d==1)
         ans=1;
         else if(e==1)        
         ans=2;
         else
         ans=0;
         cout<<ans<<"\n";
         t++;
    }
    //system("pause");
    return 0;
}             
