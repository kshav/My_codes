#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
       int data;
       node *next;
} *s=NULL , *ptr, *temp, *save;


void create_node(node *&start , int a)
{
     ptr=new node;
     ptr->data=a;
     ptr->next=NULL;
     
     if(start==NULL)
     {
                    start=ptr;
     }
     else
     {
         temp=start;
         start=ptr;
         ptr->next=temp;
     }
}

void display_node()
{
     temp=s;
     while(temp!=NULL)
     {
                      cout<<temp->data<<" -> ";
                      temp=temp->next;
     }
}

int main()
{
    int d;
    char ch='y';
    for(int i=1; ch=='y';i++)
    {
             cout<<"\n ENTER DATA FOR THE " <<i<<" NODE : ";
             cin>>d;
             create_node(s , d);
             cout<<"\n DO YOU WANT TO CREATE MORE NODES ? " ;
             cin>>ch;
    }
    display_node();
      getch();
    return 0;   
} 
