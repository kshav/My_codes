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
     cout<<"Enter the url and ip address";
     cin>>url>>ip;
}


void table::get(string a)
{
    if(a==url)
    cout<<ip;
}
    
int main()
 {
     string a;     
     table k[4];
     for (int i=0;i<4;i++)
     k[i].put();
     cout<<"Enter the url whose ip address you want ";
     cin>>a;
     for(int i=0;i<4;i++)
     k[i].get(a);
     getch();
     return 0;
 }