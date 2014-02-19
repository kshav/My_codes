#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int a,p,h=0, d=0;
    cout<<"Enter any no\n";
    cin>>a;
    for(int i=0;i<10;i++)
    {
     if(a>pow(10,i) && a<pow(10,(i+1)))
     {
     cout<<"\nThis is a "<<i+1<<"digit no";
     p=i+1;
     }
    }
    getch();
    return 0;
}
    
    