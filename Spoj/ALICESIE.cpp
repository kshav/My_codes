#include<iostream>
#include<string.h>
using namespace std;

int main()
{   
    long long int k=0,m=0,t=0,n=0,t1=0,countr=0,ks,flag,i;
     cin>>n;
     while(t1<n)
     {   cin>>k;
         if(k%2==0)
         k=k/2;
         else
         k=k-(k-1)/2;
         cout<<k<<"\n";
         t1++;  
     }
   // system("pause");
    return 0;
}
                 
