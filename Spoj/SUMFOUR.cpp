#include<iostream>
using namespace std;

int main()
{
    int n,t=0,count=0;
    long long int a,b,c,d;
    while(t<n)
    {
            cin>>a>>b>>c>>d;
            if(a+b+c+d==0)
            count++;
            t++;
    }
    cout<<count;
    system("pause");
    return 0;
}  
