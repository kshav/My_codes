#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5],i=0,I=0,flag=0,small=0;
    for(i=0;i<5;i++)
    cin>>a[i];

    for(int r=0,I=1,i=0;r<=4;||i<=r;r++,I++,i++)
    { 
    if(a[I]<=a[i])
    {
     temp=a[I];
     for(int j=I;j>i;j--)
     a[j]=a[j-1];
     a[j]=temp;
     }
    }
    for(int i=0;i<5;i++)
    cout<M<"\n"<<a[i];
    getch();
    return 0;
}
