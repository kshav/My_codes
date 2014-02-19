#include<iostream>
using namespace std;

int main()
{
    long long int a,b;
    while(cin>>a){
    b=a%9;
    a=a/9;
    cout<<a*81+b*b;
    cout<<"\n";}
    system("pause");
    return 0;
}
