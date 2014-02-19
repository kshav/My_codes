#include<iostream>
using namespace std;

int main()
{
    int t=0,n,a[99];
    char b[99];
    cin>>n;
    while(t<n)
    {
        for(int i=0;i<99;i++)
        cin>>a[i]>>b[i];
        if(b[9]==b[18]&& b[18]==b[27]&& b[27]==b[36]&& b[36]==b[45]&& b[45]==b[54]&& b[54]==b[63]&& b[63]==b[72]&& b[72]==b[81])
        cout<<"YES\n";
        else
        cout<<"NO\n";
        t++;
    }
    //system("pause");
    return 0;
}      
