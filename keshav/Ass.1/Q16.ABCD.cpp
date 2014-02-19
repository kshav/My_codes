#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char a;
    for(a='A';a<='G';a++);
    cout<<a;
    for (a='F';a>='A';a--)
    cout<<a;
    for (a='A';a<='F';a++)
    cout<<a;
    for (a='F';a>='A';a--)
    cout<<a;
    getch();
    return 0;
}
