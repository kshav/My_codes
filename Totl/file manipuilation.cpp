#include<iostream>
#include<conio.h>
#include<fstream>
#include<cctype>
using namespace std;
int main()
{
 string a;
 int flag=1;
 ifstream fin;
 fin.open("in.txt",ios::out);
 ofstream fout;
 fout.open("keshav.txt");
 while(1)
 {
 if(fin.eof())
 break;
 getline(fin,a);
 for(int i=0;a[i]!='\0';i++)
 {
       
 if(!isalnum(a[i]))
 {
 if(flag==1)
 {
 cout<<"\n";
 fout<<"\n";
 flag=0;
 }
 }
 else
 {
 cout<<a[i];
 fout<<a[i];
 flag=1;
 }}
 if(flag==1)
 fout<<"\n";
}
fout.close();
 return 0;
}
