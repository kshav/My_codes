#include<iostream>
#include<string.h>
#include<conio.h>
#include<string>
using namespace std;
int n;
class table
{
          char url[4][20];
          char ip[4][20];
      public:
          void input();
          void in();
          void out(char);
};

void table::input()
{
     //cout<<"Enter the no.of url add. u want to store:  ";
     //cin>>n;
     for(int i=0;i<4;i++)
     {
             cout<<"\nEnter "<<i+1<<" url\n";
             cin>>url[i];
             cout<<"\nEnter "<<i+1<<" ip address\n";
             cin>>ip[i];
     }
}

void table::in()
{
     char k[20];
     cout<<"\nEnter the url whose ip address u want to know: ";
     cin>>k[20];
}


char h;

void table::out(char k)
{
     h=k;
     for (int i=0;i<4;i++)
     {
         if(*h==url[i])
         cout<<"IP address is"<<ip[i];
     }
}

char k;     
 int main()
 {
   table p;
   p.input();
   p.in();
   p.out(k);
   getch();
   return 0;
}  