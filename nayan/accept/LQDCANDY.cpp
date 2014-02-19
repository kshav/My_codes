#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n,i=1,count=0;
    int test;
    scanf("%d",&test);
    while(test--)
    {
    i=1;count=0;
    scanf("%llu",&n);
    while(n>i)
    {
               i*=2;
    };
    cout<<i<<" ";
    if(n==i)
    cout<<"0"<<"\n";
    else
    {
    while(n>0)
    {
    if(n>=i/2)
    n=n-(i/2);
    i/=2;
    count++;
    }
    cout<<count<<"\n";
    }
    }
}
               
