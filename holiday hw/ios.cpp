#include<iostream>
#include<conio.h>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
    cout.setf(ios::right); 
cout.width(15);
cout<<-12.35;
cout<<"\n";
char a[10]="hello";
char b[10]="nayan";
strncat(a,b,2);
cout<<a;
getch();
return 0;
}
    