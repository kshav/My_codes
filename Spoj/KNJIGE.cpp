#include<iostream>
using namespace std;

int main()
{   int t=0,flag=1,y=0,ans,p,flag2=0,cnt=0;
    long long int a,check,k;
    cin>>a;
    for(int i=0;i<a;i++)
    { 
       cin>>t;
       if(i==0 && t==a)
       ans=a-1;
       else if(i==0 && t!=a)
       k=t;
       else
       { flag=1;
         if(t==k+i && flag2==0 && k==a)
         {flag=0;
          cnt++;}
         if(t!=k+i)
         flag2=1; 
         if(flag==1 && y!=1)
         { 
            if(k+i-i==a)
            {ans=a-i;         
             y=1;}
            else
            ans=a;         
         }
       }
       if(i==1 && p!=a && t!=p+1)
       ans=a;
       //if(cnt=a-1)
       //ans=0;
       p=t;
    }
    //cout<<cnt<<" ";
    cout<<ans;
          
    system("pause");
    return 0;
}
