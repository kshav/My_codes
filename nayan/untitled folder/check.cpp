#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    string a[2];
    char b[3]="na";
    a[0][0]=b[0];
    a[1][0]=b[1];
    cout<<a[0][0]<<a[1][0];
    getch();
    return 0;
}
