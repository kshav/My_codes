
#include<iostream>
using namespace std;
int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
                 cin>>n;
                 if(n%2==0)
                 cout<<n/2<<"\n";
                 else
                 cout<<n/2+1<<"\n";
    }
}
