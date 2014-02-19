#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;


int main()
{
    char k[20];
    cout<<"Enter any word\n";
    cin.getline(k,20);
    int h;
    h=strlen(k);
    char *p;
    for (int i=h-1;i>=0;i--)
    {
    p=&k[i];
    cout<<*p;
    }
    getch();
    return 0;
}




















    


