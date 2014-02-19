#include<iostream>

using namespace std;

int main()
{
    long long int x,k;
    cin>>x;
    k=x-1;
    if ( (x&k)== 0)
    cout<<"TAK";
    else
    cout<<"NIE";
    return 0;
}
