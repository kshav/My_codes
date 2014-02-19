#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    string a;
    char b[20];
    ifstream fin;
    fin.open("in.txt",ios::out);
    while(1)
    {
    if(fin.eof())
    break;
    fin>>a;
    int i=0;
    while(a[i]!='\0')
    {
    b[i]=a[i];
    i++;
    }
    b[i]='\0';
    i=0;
    while(b[i]!='\0')
    {
    cout<<b[i];
    i++;
    }
    cout<<"\n";
   }
   getch();
   return 0;
}
