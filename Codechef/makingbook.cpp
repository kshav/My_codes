#include<iostream>
using namespace std;

int main()
{
    int m,n,t=1,a[10]={0},k,temp;
    while(t>0)
    { for(int i=0;i<10;i++)
      a[i]=0;
      cin>>m;
      if(m==0)
      break;
      cin>>n;
      if(m>n)
      {
         temp=n;
         n=m;
         m=temp;
      }    
     // cout<<"hi";
      for(int i=m;i<=n;i++)
      {       temp=i;
              k=temp%10;
              a[k]++;
              while(temp/10 > 0)
              {
               temp=temp/10;
               k=temp%10;
               a[k]++;
               //cout<<"keshav";
              }
             // cout<<"kl";
      }
      //cout<<"hey";
      cout<<"Case "<<t<<": ";
      for(int i=0;i<10;i++)
      {
        cout<<i<<":"<<a[i]<<" ";
      }
      cout<<"\n";      
      t++;
    }
   // system("pause");
    return 0;
}
