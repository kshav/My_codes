#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int a[n],m,t=0,c,b,cnt=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    while(t<m)
    {
       cin>>c>>b;
       a[c-1]=b;
       cnt=0;
       for(int i=0;i<n-1;i++)
       {
               for(int j=i+1;j<n;j++)
               {
                       if(a[j]<a[i])
                       cnt++;
               }
       }
       cout<<cnt<<"\n";
       t++;
    }     
    system("pause");
    return 0;
}  
