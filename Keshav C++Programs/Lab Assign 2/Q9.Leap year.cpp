#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int a;
    cout<<"Input the year: ";
    cin>>a;
    if(a%100==0)
    { 
       if(a%400==0)
       cout<<"\nIts a Leap Year!!";
       else 
       cout<<"\nIts NOT a Leap Year!!";
    }
    else
    { 
      if (a%4==0)
        cout<<"\nThis is a leap year";
      else
        cout<<"\nThis is not a leap year";
    }
    getch();
    return 0;
}
