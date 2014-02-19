#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long s=0,n,d,a,i;
    cin>>n;
    a=n;
    d=1+8*n;
    s=sqrt(d);
    i=(-1+s)/2;
    if(s*s<d)i++;
    s=(i*(i-1))/2;
    n=n-s;
    if(i%2==0)
    cout<<"TERM "<<a<<" IS "<<n<<"/"<<(i+1)-n<<"\n";
    else
    cout<<"TERM "<<a<<" IS "<<(i+1)-n<<"/"<<n<<"\n";
    }
    return 0;
}
