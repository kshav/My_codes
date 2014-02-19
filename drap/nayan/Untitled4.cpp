
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
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
    char cText[300];

    strcpy(cText, "                                                                                ");
    strcat(cText, "This is the message to have crawl across the bottom of your screen.  ");
    strcat(cText, "                                                                                ");
    
    int d, i, j, tl = strlen(cText)-80;
    
    for (i=0;i<tl;i++)
        for (j=0;j<80;j++){
            gotoxy(j, 00);
            printf("%c", cText[i+j]);
            for (d=0;d<2000000;d++); /* delay */
        }
  
  system("PAUSE");	
  return 0;
}

