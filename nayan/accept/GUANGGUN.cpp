#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int i=0,sum=0;
    int e=0,j;
    int a[9];
    for(j=0;j<9;j++)
    a[j]=j*j;
    while(scanf("%lld",&i)!=EOF)
    {
     sum=81*(i/9)+a[i%9];
     cout<<sum<<"\n";
    }
    return 0;
}
     
