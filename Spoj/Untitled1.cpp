#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t=0,n,i,k,flag,l,j;
    vector<int> coll;
    while( t==0)
    {
     scanf("%n",&n);
     if(n==0)
     break;
     j=0;
     while(j<n)
     {scanf("%n",&k);
     coll.push_back(k);
     j++;}
     sort(coll.begin(),coll.end());
     flag=0;
     l=coll.size();
     for( i=0;i<l-1;++i)
     {if(coll[i+1]-coll[i]>200)
     {printf("IMPOSSIBLE\n");
      flag=1;
      break;                                    
     }}       
     
     if(flag==0 && i==l-1)
     {if(2*(1422-coll[i])>200)    
     {flag=1;
     printf("IMPOSSIBLE\n");
     } }
     if(flag==0)
     printf("POSSIBLE\n");
     coll.erase(coll.begin(),coll.end());
     }   
    
     return 0;
}
    





