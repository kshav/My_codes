#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int l;
    l=a.size();
    a.reverse(0,l);
    
    
   /* string *ptr,*last;
    ptr=a[0];
    last=a[l-1];
    for(int i=0;i==l;i++)
    {
       char t;
       t=a[i];
       a[i]=a[l-1];
       a[l]=t;
       l--;
    }*/
    cout<<a;
    getch();
    return 0;
}