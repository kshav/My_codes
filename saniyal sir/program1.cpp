#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
 int n,c=0;
 //srand(time(0));
 cout<<"enter how many no.s u want ";
 cin>>n;
 ofstream fout;
 fout.open("random.txt",ios::app);//open file to write data
 for(int i=0;i<n;i++)
 {
  //c=rand()%20;   //random no. generation
  c++;
  fout<<c<<"\n";
 }
 fout.close();      //file close
 return 0;
}
 
