#include<iostream>
#include<string.h>
using namespace std;

long long int lcm(long long int &a,long long int &b,long long int &d, int &j)
{
     while(a>1 && j<=a || a>1 && j<=b || j<=b  && b>1 || j<=a || b>1  )
     {
          if(a%j==0 && b%j==0)
          {//cout<<"Hey: \n"; 
          d=d*j;
          a=a/j;
          b=b/j;
          lcm(a,b,d,j);}     
          else if(a%j==0 && b%j!=0)
          {d=d*j;
          a=a/j;
          lcm(a,b,d,j);}                              
          else if(a%j!=0 && b%j==0)
          {d=d*j;
          b=b/j;
          lcm(a,b,d,j);}
          else
          {j++;
          lcm(a,b,d,j);}}
          return d;
}     

int main()
{
    string k;
    int t=0,j,l,y[20]={0},n[20]={0},r=0,s=0,h,ans,flag=0;
    long long int a,b,d;
    while(t==0)
    {
       for(int i=0;i<20;i++)
       y[i]=n[i]=0;
       r=0,s=0;            
       cin>>k;
       if(k=="*")
       break;
       l=k.size();
       //cout<<l;
       for(int i=0;i<l;i++)
       {if(k[i]=='Y')
       {y[r]=i+1;
       r++;}
       else if(k[i]=='N')
       {n[s]=i+1;
       s++;}}
       /*for(int i=0;i<r;i++)
       cout<<y[i]<<" ";
       cout<<"\n";
       for(int i=0;i<s;i++)
       cout<<n[i]<<" ";
       cout<<"\n";
       */d=1,j=2,h=0;
       while(h<r-1)            
       {
       a=y[h];
       b=y[h+1];
       //cout<<"Lcm of "<<a<<" and  "<<b<<": ";
       lcm(a,b,d,j);
       //cout<<d<<"\n";
       y[h+1]=d;
       d=1,j=2;
       h++;}
       ans=y[h];
       //cout<<ans;
       flag=0;
       for(int i=0;i<s;i++)
       {
               if(ans%n[i]==0)
               {cout<<"-1\n";
               flag=1;
               break;}
       }
       if(flag==0)
       cout<<ans<<"\n";
    }
    //system("pause");
    return 0;
}
    
                   
    

