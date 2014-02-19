#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
    int i,a[100000],flag=0;
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
    {
     if(i!=a[a[i]]){
     flag=1;
     break;}
     }
     if(flag==0)
     cout<<"ambiguous\n";
     else
     cout<<"not ambiguous\n";
     cin>>n;
     }
     return 0;
}
