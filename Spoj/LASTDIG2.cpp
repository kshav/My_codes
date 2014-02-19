#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,t=0,l,k,e;
    string a;
    char c;
    long long int b;
    scanf("%d",&n);
    while(t<n)
    {
    cin>>a>>b;
    l=a.size();
    c=a[l-1];
    e=c-48;
    if(b==0)
    k=1;
    else if(b%4!=0 && b!=0)
    {b=b%4;
    k=pow(e,b);
    k=k%10;}
    else if(b%4==0 && b!=0)
    {k=pow(e,4);
    k=k%10;}
    cout<<k<<"\n";
    t++;
    }
    system("pause");
    return 0;
}
              
