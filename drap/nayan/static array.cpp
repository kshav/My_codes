#include<iostream>
#include<conio.h>
using namespace std;
int top=-1,a[100];
void push();
void pop();
void display();
int main()
{
    int c;
    char ch;
    do
    {
         cout<<"\n1.push";
         cout<<"\n2.pop";
         cout<<"\n3.display";
         cout<<"\nenter your choice";
         cin>>c;
         switch(c)
         {
         case 1:
              {
               push();
               break;
               }
        case 2:
             {
             pop();
             break;
             }
        case 3:
             {
              display();
              break;
             }
        }
       cout<<"\n do you want to continue ";
       cin>>ch;
       }while(ch=='y');
       getch();
       return 0;
}
void push()
{
     if(top==99)
     cout<<"\n  no pushing of elements can be done ";
     else
     {
      cout<<"\n enter the element";
      cin>>a[top++];
     }
}
void pop()
{
 if(top=-1)
 cout<<"\n no popping is allowed";
 else
 {
 cout<<"\n"<<a[top--]<<" deleting";
 }
}
void display()
{
 if(top=-1)
 cout<<"\n no element is there";
 else
 {
     for(int i=top;i>=0;i--)
     cout<<"\n"<<a[i];
 }
}
