#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float r1,r2,a;
    cout<<"Enter the Outer radius of Ring:\t";
    cin>>r1;
    cout<<"\nEnter the Inner radius of the ring:\t";
    cin>>r2;
    a=3.14*((r1*r1)-(r2*r2));
    cout<<"\nArea is:\t"<<a;
    getch();
    return 0;
}
