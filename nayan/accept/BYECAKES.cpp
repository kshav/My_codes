#include<iostream>
using namespace std;
int main()
{
    int a[8],x,l=0,i;
    for(i=0;i<8;i++)
    cin>>a[i];
    while(a[0]!=-1){
    l=0;
    for(i=0;i<4;i++)
    {
    x=0;
    if(a[i]%a[i+4]!=0)
    x=1;
    x+=a[i]/a[i+4];
    if(x>l)
    l=x;
    }
    for(i=0;i<4;i++)
    cout<<a[i+4]*l-a[i]<<" ";
    cout<<"\n";
    for(i=0;i<8;i++)
    cin>>a[i];
    }
    return 0;
}
