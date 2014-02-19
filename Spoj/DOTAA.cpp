#include<iostream>
using namespace std;

int main()
{
    int t=0,k,n,m,d,count=0,f,flag;
    scanf("%d",&k);
    while(t<k)
    {  count=0;
       flag=1;
       scanf("%d%d%d",&n,&m,&d);
       for(int i=0;i<n;i++)
       { scanf("%d",&f);
         if(f>d)
         flag=0;
         while(flag==0)
         {     
           count++;
           f=f-d;
           if(f<=d)
           flag=1;
         }
       }
         if(count>=m)
         cout<<"YES\n\n";
         else
         cout<<"NO\n\n";
         t++;
    }
   // system("pause");
    return 0;
}      
