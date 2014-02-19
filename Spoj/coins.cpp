#include<iostream>
using namespace std;

int func(int n)
{
    int temp=(13*n)/12;
    if(temp>n)
    return func(n/2)+func(n/3)+func(n/4);
    else
    return n;
}

int main()
{
    int n,k;
    while(scanf("%d",&n)!=EOF)
    {
       k=func(n);
       cout<<k<<"\n";
    }
    system("pause");
    return 0;
}                       
