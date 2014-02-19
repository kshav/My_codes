#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n,a,b,i,j;
   cin>>n;
   while(n>0)
   {
   n--;
   cin>>a;
   vector<int>v,w;
   int count=1000000,k=0,e=0,d=-1;
   for(i=0;i<a;i++)
   {
   cin>>j;
   v.push_back(j);
   }
   cin>>b;
   for(i=0;i<b;i++)
   {
   cin>>j;
   w.push_back(j);
   }
   sort(v.begin(),v.end());
   sort(w.begin(),w.end());
   for(i=0;i<v.size();i++)
   {
   for(j=k;j<w.size();j++)
   {
   d=v[i]-w[j];
   e=d;
   if(d<0)
   e=-d;
   if(e<count)
   count=e;
   }
   }
   cout<<count<<"\n";
   }
   return 0;
}
    
