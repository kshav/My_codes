#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class data
{
      char roll[20];
      float a,b,c,d;
      public:
      void get();
      void put(char e[]);
};

void data::get()
{
 cout<<"Enter the roll no. and marks in 3 subjects\n";
 cin>>roll>>a>>b>>c;
}

void data::put(char e[])
{
     if (strcmp(roll,e)==0)
     {
     cout<<a<<"  "<<b<<"  "<<c<<"  ";
     d=(a+b+c)/3;
     cout<<d;
     }
}

int main()
{
    char e[20];
    data k[3];
    for(int i=0;i<3;i++)
    k[i].get();
    cout<<"Enter the roll no.";
    cin>>e;
    for(int i=0;i<3;i++)
    k[i].put( e);
    getch();
    return 0;
}
    
     
      