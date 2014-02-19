#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,d;
 cout<<"Enter the values of a: ";
 cin>>a;
 cout<<"\nEnter the value of b: ";
 cin>>b;
 cout<<"\nEnter the value of c: ";
 cin>>c;
 cout<<"\nSmallest value is     ";
 if(a<b&&a<c)
  cout<< "a";
 
 else if(b<a&&b<c)
    cout<<"b";
 else
 cout<<"c"; 
getch();
return 0;
}

