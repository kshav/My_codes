#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cout<<"Enter any number lying from 1 to 7 : ";
    cin>>n;
    cout<<"\nIt's binary form is: ";
    a=n%2;
    n=n/2;
    b=n%2;
    c=n/2;
    cout<<"\nIts Binary form is: "<<c<<b<<a;
    getch();
    return 0;
}
