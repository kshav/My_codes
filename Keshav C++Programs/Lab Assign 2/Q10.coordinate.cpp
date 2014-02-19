#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter the X-coordinate:\t";
    cin>>x;
    cout<<"\nEnter the Y-coordinate:\t";
    cin>>y;
    if(x==0&&y!=0)
    cout<<"\nThe Point lies on Y-axis";
    else if(y==0&&x!=0)
    cout<<"\nThe Point lies on X-axis";
    else if(x==0&&y==0)
    cout<<"\nThe given point is Origin";
    else if (x>0&&y>0)
    cout<<"\nThe Point lies in 1st Quadrant";
    else if(x<0&&y>0)
    cout<<"\nThe Point lies in 2nd Quadrant";
    else if(x<0&&y<0)
    cout<<"\nThe Point lies in 3rd Quadrant";
    else 
    cout<<"\nThe point lies in 4th Quadrant";
    getch();
    return 0;
}
