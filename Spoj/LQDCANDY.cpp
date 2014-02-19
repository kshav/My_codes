#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t=0,n,m,flag=0,count=0,k=0,q;
     float a,b,c,d,result,sum;
    long long int e,p,ans;
    scanf("%d",&n);
    while(k<n)
    {    count=0;
         flag=0;     
         cin>>e;
        /* result=log(e);
         result=result/log(2.0);
         t=int (result);
         if(t==result);
         else
         t++;
         ans=pow(2,t);
         cout<<result<<" ";
     
   */     for(int i=0;i<61;i++)
        {
           ans=pow(2,i);
           if(ans>=e)
           {  t=i;
              break;}
        }
        cout<<ans<<" ";     
               
        
        
         p=e;
         while(flag==0)
         {
            q=p%2;
            if(q==1)
            flag=1;
            else
            {count++;
             p=p/2;}
         }
         cout<<t-count<<"\n";            
            k++;         
    }
    system("pause");
    return 0;
}     
