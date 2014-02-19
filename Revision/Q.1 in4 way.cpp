#include<iostream>
#include<conio.h>
using namespace std;

class table
{
          string url;
          string ip;
      public:
         void put();
          void get(string);
};

void table::put()
{
     cout<<"Enter the url and ip address\n\n";
     cin>>url>>ip;
}


void table::get(string a)
{
    if(a==url)
    cout<<ip;
}
    
int main()
 {
     int b;
     string a;
     cout<<"How many url u want to store";
     cin>>b;     
     table k[b];
     for (int i=0;i<b;i++)
     k[i].put();
     cout<<"Enter the url whose ip address you want ";
     cin>>a;
     for(int i=0;i<b;i++)
     k[i].get(a);
     getch();
     return 0;
 }