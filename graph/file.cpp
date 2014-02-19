#include <iostream>
#include <process.h>
#include<windows.h>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("nayan.txt",ios::out);
    fin.seekg(5, ios::cur);
    char a;
    if(fin.eof())
    {
    fin>>a;
    cout<<a;
    fin>>a;
    cout<<a;
}
    getch();
    return 0;
}
