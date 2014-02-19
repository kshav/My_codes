#include<iostream>
using namespace std;
int main()
{
    int test=0;
    long long int sum=0,n=0;
    cin>>test;
    while(test--)
    {
     cin>>n;
     sum=(n*(3*n+1))/2;
     sum=sum%1000007;
     cout<<sum<<"\n";
    }
    return 0;
}
     
