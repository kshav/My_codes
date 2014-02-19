#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,t=0,a; 
    long long int b,k;
    scanf("%d",&n);
    while(t<n)
    {
    cin>>a>>b;
    a=a%10;
    if(b==0)
    k=1;
    else if(b%4!=0 && b!=0)
    {b=b%4;
    k=pow(a,b);
    k=k%10;}
    else if(b%4==0 && b!=0)
    {k=pow(a,4);
    k=k%10;}
    cout<<k<<"\n";
    t++;
    }
    system("pause");
    return 0;
}
              
