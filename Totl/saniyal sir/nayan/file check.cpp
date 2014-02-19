#include<iostream>
#include<conio.h>
#include<fstream>
#include<io.h>
using namespace std;
int main()
{
 string a;
 getline(cin,a);
 ofstream fout;
 fout.open("read.txt");
 fout<<a;
 fout<<"\n";
 getline(cin,a);
 fout<<a;
 fout.close();
 ifstream fin;
 fin.open("read.txt");
 while(true)
 {
 if(fin.eof())
 break;
 getline(fin,a);
 cout<<a<<"\n";
 }
 getch();
 return 0;
}
 
