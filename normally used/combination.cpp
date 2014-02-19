#include<iostream>
using namespace std;

int combi(int n,int k)
{
    if(k==n || k==0)
    return 1;
    else
    return combi(n-1,k-1)+combi(n-1,k);
}

int main()
{
    int n,k;
    cin>>n>>k;
    int s=combi(n,k);
    cout<<"Combinations are: "<<s;
    system("pause");
    return 0;
}     
