#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,sum;
    cin>>a>>b;
    char *p;
    p=(char *)a;
    sum=(int)&p[b];
    cout<<sum;
getch();
return 0;
}

