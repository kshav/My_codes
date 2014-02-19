#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;


int main()
{
    char a[20],b[20];
    cout<<"Enter any word\n";
    cin>>a>>b;
    int h;
    h=strlen(a);
    char *p;
    for (int i=h-1;i>=0;i--)
    {
    p=&a[i];
    cout<<*p;
    }
    cout<<" ";
    int g;
    g=strlen(b);
    char *q;
    for (int i=g-1;i>=0;i--)
    {
    q=&b[i];
    cout<<*q;
    }

    getch();
    return 0;
}




















    



