#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t=0;
    long long int sum=0,n,c;
    vector<long long int> a;
    vector<long long int> b;
    
    scanf("%lld",&n);
    while(n!=0)
    {  
       sum=0;
       a.resize(n);
       b.resize(n);
       for(int i=0;i<n;i++)
       scanf("%lld",&a[i]); 
                
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
         scanf("%lld",&b[i]);
       
             sort(b.begin(),b.end(),greater<int>());
       for(int i=0;i<n;i++)
               sum+=a[i]*b[i];
       printf("%lld\n",sum);
       scanf("%lld",&n);
       }
   // system("pause");
    return 0;
}
