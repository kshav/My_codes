#include<iostream>
using namespace std;
int main()
{
        long long int a,s,e,c,t,n,b,i,j=1;
    cin>>t;
    while(t--)
    {
     cin>>n>>a>>b>>e;
     s=2*a+n*b;
     for(i=1;i<n;i++){
     cin>>c;
     if((c-e-1)*b<=2*a)
     s+=(c-e-1)*b;
     else
     s+=2*a;
     e=c;
    }
    cout<<"Case #"<<j++<<": "<<s<<"\n"; 
    }
    return 0;
}
