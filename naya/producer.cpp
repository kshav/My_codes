#include <iostream>
#include <process.h>
#include <windows.h>
#include <fstream>
#include <conio.h>
using namespace std;
string a;
void producer(void* number)
{
      ifstream fin;
      fin.open("in.txt",ios::out);
      while(1)
      {
      fin>>a;
      if(fin.eof())
      break;
      cout<<a<<"  producer"<<"\n";
      }
      fin.close();
      _endthread();
}
void consumer(void* number)
{
       ofstream fout;
       fout.open("keshav.txt",ios::app);
       cout<<a<<"  consumer"<<"\n";
       fout<<a;
       fout.close();
       _endthread();
}
int main()
{
 int tempNum,b;
 HANDLE handle; 
 handle = (HANDLE) _beginthread( producer, 0,(void*)&tempNum);  
 WaitForSingleObject(handle,INFINITE);      
 handle = (HANDLE) _beginthread( consumer, 0,(void*)&tempNum);  
 WaitForSingleObject(handle,INFINITE);
 getch();       
 return 0;
}
