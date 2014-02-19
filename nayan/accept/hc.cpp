#include<iostream>
using namespace std;
int main()
{
    int test,n,i;
    string a,b;
    cin>>test;
    while(test--)
    {
                 cin>>n;
                 if(n!=1)
                 {
                 cin>>a>>b;
                 if(a==b)
                 b="hhb";
                 else
                 b="lxh";
                 for(i=0;i<n-2;i++)
                 {
                 cin>>a;
                 if(b==a)
                 b="hhb";
                 else
                 b="lxh";
                 }
                 }
                 else
                 cin>>b;
                 cout<<b<<"\n";
    }
    return 0;
}
    
