#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    int x;
 ifstream fin;
 fin.open("file.txt");
 while(true)
 {
  fin>>x;
  if(fin.eof())
  break;
  cout<<x<<"\n";
 }
 getch();
 return 0;
}
