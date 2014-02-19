#include<iostream>
using namespace std;
int t;

int func(int n , int k)
{
     if(n==1)
     return 0;
     else
     {t=(func(n-1,k)+k)%n;
     cout<<t<<"\n";
}     return t;}
     

int main()
{
    int n,k;
    cin>>n>>k;
    int l=func(n,k);
    cout<<"\n"<<l;
    system("pause");
    return 0;
}
