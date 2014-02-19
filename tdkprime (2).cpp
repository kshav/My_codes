#include<iostream>
#include<math.h>
#include<vector>
#include<stdio.h>
using namespace std;

int main()
{
   long long int t=0,n,query;
   scanf("%lld",&n);
    
    long long int a,b,j,l,k,e,me,len;
    a=1;
    b=1000000;
    b=b+1;
     
    vector<bool> arr(1000005,1);
    vector<long long int > coll;
   
    arr[0]=arr[1]=0;
    double c = (sqrt(b-1));
    l= int(c);
    l=l+1;
   // cout<<"L: "<<l<<"\n";
    for(int i=3;i<l;i+=2)
    {
       if (arr[i]==1 && i%2!=0)
       {       k=i;
               j=i;
               j=k*j;
               while(j<b)
               {  
                 arr[j]=0;
                 j=i;
                 k=k+2;
                 j=k*j;   
               }}}
    coll.push_back(2);           
    for(int i=3;i<b;i+=2)
    {
            if(arr[i]==1)
            coll.push_back(i);                   //   cout<<i<<"\n";
    }              
    
     while(n--)
     { cin>>query;
      i=0;
      while(coll[i]<query)
      {
        cout<<coll[i]<<" ";
        i++;
      }
      cout<<"\n";
    }
    
   // system("pause");
    return 0;
}
    
    
    
    
    
    
    
    



