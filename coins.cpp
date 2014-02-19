#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long int func(long long int n,vector<int> coll)
{
    if(coll[n]==0){ 
    if(n>11)
    {int k=func(n/2,coll)+func(n/3,coll)+func(n/4,coll);
     coll[n]=k;
     return k;}
     }
    else
    return coll[n];
}

int main()
{
    
    long long int n,k;
    while(scanf("%ld",&n)!=EOF)
    {
     vector<int> coll(n+1,0);                         
       //vector<int> coll(n,0);
       for(int i=0;i<12;i++)
       coll[i]=i;
       k=func(n,coll);
       cout<<k<<"\n";
    }
    //system("pause");
    return 0;
}                       






