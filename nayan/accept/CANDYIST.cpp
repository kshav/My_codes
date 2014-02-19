#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
     long long int n,i,c;
    unsigned long long int sum=0;
    while(1)
    {
                         scanf("%lld",&n);
                         if(n==0)
                         break;
                         else
                         {
                             vector<long long int>st,pr;
                             sum=0;
                             for(i=0;i<n;i++)
                             {
                             scanf("%lld",&c);
                             st.push_back(c);
                             }
                             sort(st.begin(),st.end());
                             for(i=0;i<n;i++)
                             {
                             scanf("%lld",&c);
                             pr.push_back(c);
                             }
                             sort(pr.begin(),pr.end());
                             for(i=0;i<n;i++)
                             sum+=st[i]*pr[(n-1)-i];
                             printf("%llu\n",sum);
                             }
    }
}
                             
