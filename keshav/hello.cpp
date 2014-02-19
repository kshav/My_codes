 
#include<iostream>
#include<conio.h>
using namespace std;

class Hello
{
   static int p;
   public:
          void helo()
          {
               cout<<"\n\n HELLO!!! ";
               p++;
          }
          void count()
          {
               cout<<"\n\n THE FUNCTION HELO WAS CALLED "<<p<<" TIMES..";    
          }
};
int Hello :: p;
           
int main()
{
    Hello h;
    int i,n;        
    cout<<"\n\n HOW MANY TIMES DO YOU WANT TO PRINT HELLO ? : ";
    cin>>n;
    for(i=0;i<n;i++)
    h.helo();
    h.count(); 
    getch();
    return 0;
}  
