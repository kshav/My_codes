#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
     int n,a,b,i;
     cin>>n>>a>>b;
     long long int h[n];
     for(i=0;i<n;i++)
     cin>>h[i];
     sort(h,h+n);
    cout<<h[b]-h[b-1];
    // system("pause");
     return 0;
}
