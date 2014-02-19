#include<iostream>
#include<conio.h>
using namespace std;

struct stacknode
{
       int data;
       stacknode *next;
}*top=NULL,*ptr;

void push(int d)
{
     ptr=new stacknode;
     ptr->data=d;
     ptr->next=NULL;
     if(top==NULL)
     {
                  top=ptr;
     }
     else
     {
         ptr->next=top;
         top=ptr;
         cout<<top->data;
     }
                  
}

void pop()
{
     if(top==NULL)
     {
                  cout<<"\n STACK UNDERFLOW " ;
     }
     else
     {
         cout<<"\n REMOVED ELEMENT IS : "<<top->data;
         top=top->next;
     }
}


 

int main()
{
     int a;
     char ch='y';
     while(ch=='y')
     {
                   cout<<"\n ENTER DATA TO BE ENTERED IN STACK : ";
                   cin>>a;
                   push(a);
                   cout<<"\n DO YOU WANT TO ENTER MORE ELEMENTS IN STACK ?: ";
                   cin>>ch;
     }
     
     ch='y';
     while(ch=='y')
     {
                   pop();
                   cout<<"\n DO YOU WANT TO POP MORE ELEMENTS ?: ";
                   cin>>ch;
     }
     
     getch();
     return 0;
}
