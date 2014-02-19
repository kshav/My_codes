#include<iostream>
using namespace std;

int main()
{
    int a,b,k,temp,d;
    char buffer[10];
    int c[10];
    cin>>a;
    cin>>b;
    if(a>b)
    {
           temp=a;
           a=b;
           b=temp;
    }
    for(int i=a;i<=b;i++)
    d=sprintf(buffer,"%d",i);
    cout<<d<<" ";
    for(int i=0;i<d;i++)
    cout<<buffer[i]<<" ";
    cout<<"\n";
    system("pause");
    return 0;
} 
