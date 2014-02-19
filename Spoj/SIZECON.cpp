#include<iostream>
using namespace std;

int main()
{
    int n,t=0,j;
    cin>>n;
    long long int k=0;
    while(t<n)
    {
         cin>>j;    
         if(j>0)
         k=k+j;
         t++;
    }
    cout<<k<<"\n";
    return 0;
} 
              
