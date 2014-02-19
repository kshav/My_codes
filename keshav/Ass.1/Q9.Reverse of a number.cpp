#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Enter any number   ";
    cin>>a;
    cout<<"\nReversed number is ";
    b=a%10;
    d=a/10;
    c=d%10;
    d=d/10;
    e=100*b+10*c+d;
    cout<<e;
    if(e==a)
    cout<<"\n\nReversed no is equal to actual no ";
    else
    cout<<"\n\nThe two numbers are different";
    getch();
}
