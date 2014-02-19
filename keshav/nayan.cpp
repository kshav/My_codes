#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("read.dat",ios::out);
    if(fout.is_open())
    cout<<"yes";
    else 
    cout<<"no";
    fout.close();
    getch();
    return 0;
}