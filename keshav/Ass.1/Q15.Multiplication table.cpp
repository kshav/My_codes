#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
    cout<<"The Multiplication Table is as follows:\n\n";
    for(i=1;i<=12;i++)
    {cout<<"\n\n";
      for(j=1;j<=12;j++)
       cout<<i*j<<" ";
     getch();
     return 0;
}  
