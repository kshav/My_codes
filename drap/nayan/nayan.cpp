#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <windows.h> 
using namespace std;/* added to provide for gotoxy() function


/* function defined because gotoxy() is not standard */
void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    char a[]="       nayan";
    char b[]="singhal          ";
    for(int i=0;i<28;i++)
    {
    gotoxy(i,00);
    cout<<a;
    gotoxy(73-i,00);
    cout<<b;
    for(int d=0;d<200000000;d++);
    }
    
    getch();
    return 0;
}
