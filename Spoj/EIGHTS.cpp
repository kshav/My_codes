#include<iostream>
using namespace std;

int main()
{
    int n,i=0;
    cin>>n;
     long long int k,j;
    while(i<n)
    {
       cin>>k;
       j=(19*k + 6*(k-1))*10 + 2;
       cout<<j<<"\n";
       i++;
    }
    
    return 0;
}
