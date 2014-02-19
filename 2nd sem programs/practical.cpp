#include<iostream>
#include<conio.h>
using namespace std;
 char ch='y';

struct stacknode
{
       int data;
       stacknode *next;
}*top=NULL,*ptr,*temp,*save;

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
     }
                  
}

void pop()
{
     if(top==NULL)
     {
                  cout<<"\n STACK UNDERFLOW " ;
                  ch='n';
     }
     else
     {
         cout<<"\n REMOVED ELEMENT IS : "<<top->data;
         save=top;
         top=top->next;
         delete save;
         
         
     }
}

void display()
{
     if(top==NULL)
       cout<<"\n STACK UNDERFLOW.. NO ELEMENT FOR DISPLAY!! " ;
     else
     {
         cout<<"\n ELEMENTS OF THE STACK ARE : ";
         temp=top;
         while(temp!=NULL)
         {
                      cout<<temp->data<<"  ";
                      temp=temp->next;
         }
     }
}

int main()
{
     int a;
     while(ch=='y')
     {
                   cout<<"\n ENTER DATA TO BE ENTERED IN STACK : ";
                   cin>>a;
                   push(a);
                   display();
                   cout<<"\n DO YOU WANT TO ENTER MORE ELEMENTS IN STACK ?: ";
                   cin>>ch;
     }
 
     ch='y';
     while(ch=='y')
     {
                   pop();
                   
                   if(ch=='y')
                   {
                              display();
                          cout<<"\n DO YOU WANT TO POP MORE ELEMENTS ?: ";
                          cin>>ch;
                   }
     }

     getch();
     return 0;
}
