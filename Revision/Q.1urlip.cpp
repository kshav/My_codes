#include<iostream>
#include<conio.h>
using namespace std;

class table
{
           char url[20];
           char ip[20];
      public:
         void put();
          void get(char []);
};

void table::put()
{
     cout<<"Enter the url and ip address";
     cin>>url>>ip;
}


void table::get(char a[])
{
    if(strcmp(a,url)==0)
    cout<<ip;
}
    
int main()
 {
     char a[20];     
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