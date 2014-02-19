#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    char a;
    char b[20];
    ifstream fin;
    fin.open("in.txt",ios::out);
    while(1)
    {
    if(fin.eof())
    break;
    fin>>a;
    
    
    if(a=='\0 ')
    {cout<<"hello";
            
      cout<<"\n";
    }
    else
    cout<<a;
   }
   getch();
   return 0;
}
