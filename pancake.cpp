#include<iostream>
#include<vector>
using namespace std;
vector<unsigned long long int> f;
long long int MOD = 1000000007;
unsigned long long int func(int n)
{
         unsigned long long int k2,k1;
         
         if(n==1 || n==0)
         return 1;
         else
         {
             k1=f.size();
              if(n<k1)
              {
                 return (f[n]);
              }
         else
         {
             k2=((4*n+2)/(n+2))*func(n-1);
             f.push_back(k2);
             return k2;
         }
     }
}
int main()
{
    unsigned long long int t,n,ans,m,i;
    cin>>t;
    while(t--)
    {
              cin>>n;
           f.push_back(1);
    
           //   f[1]=1;
              ans=func(n);
              cout<<ans<<endl;
    }
    system("pause");
    return 0;
}
             
