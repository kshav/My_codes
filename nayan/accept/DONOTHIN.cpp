#include<iostream>
using namespace std;
int main()
{
    int n,c,i;
    cin>>n>>c;
    while(n!=-1&&c!=-1)
    {
    int a;
    long long s=0;
    for(i=0;i<n;i++){
    cin>>a;
    s+=(a*(n-i));
    }
    s*=c;
    cout<<s<<"\n";
    cin>>n>>c;
    }
    return 0;
}
    
