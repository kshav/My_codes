#include<iostream>
using namespace std;

int main()
{
    int t=0,n;
    cin>>n;
    long long int k;
    while(t<n)
    { t++;
      cin>>k;        
      k=(k*(k+1) + (k*(k-1))/2);       
      cout<<k%1000007<<"\n"; 
    }
    system("pause");
    return 0;
}
