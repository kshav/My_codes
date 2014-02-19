#include<iostream>
#include<conio.h>
#include<fstream>
#include<list>
using namespace std;
int main()
{
 int c,i,d=0,e=0;
  srand(time(0));
  ofstream fout[50];
    char s[]="fil.txt";
  for(i=0;i<50;i++)
  {
   s[1]=i/10+48;
   s[2]=i%10+48;
   
   fout[i].open(s,ios::app);
  }
 for(i=0;i<=100;i++)
 {
  c=rand()%1000;
  d=(c/20)/10;
  e=(c/20)%10;
  s[1]=d+48;
  s[2]=e+48;
  fout[10*d+e]<<c<<"\n";
 }
 for(i=0;i<50;i++)
 fout[i].close();
 ifstream fin[i];
 list<int>v;
 fout[0].open("f00.txt",ios::app);
 for(i=0;i<50;i++)
 {
   s[1]=i/10+48;
   s[2]=i%10+48;
   fin[i].open(s,ios::out);
   fin[i].seekg(0,ios::beg);
  while(fin[i])
  {
   fin[i]>>c;
   v.push_back(c);
  }
  int k=v.size();
 for(int i=0;i<k;i++)
 {
      cout<<"*";
 }
 cout<<"\n";   
 v.clear();
}
system("pause");                                     
 return 0;
}
 
