#include <iostream>
using namespace std;
int gcd(long a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}
int main()
{string a;
cin>>a;
    while(a[0]!='*')
    {
     int j=-1,b[a.length()],k=-1,c[a.length()],flag=0;
    
     for(int i=0;i<a.length();i++){
     if(a[i]=='Y')b[++j]=i+1;
     else c[++k]=i+1;
     
     }
    long long sum=b[0],f;
     for(int i=j;i>=1;i--)
    {
     f=(sum*b[i]);
     sum=f/gcd(sum,b[i]);
    }
    for(int i=0;i<=k;i++)
    {
    if(sum%c[i]==0){
    flag=1;
    break;
    }
    }
    if(flag==1)cout<<"-1\n";
    else cout<<sum<<"\n";
    cin>>a;
    }
    return 0;
}
