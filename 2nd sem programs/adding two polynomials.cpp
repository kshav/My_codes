#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
       int data;
       node *next;
}*s1=NULL,*s2=NULL,*r1=NULL,*r2=NULL, *temp, *ptr;

void create_node(node *start, node *rear, int a)
{
     ptr=new node;
     ptr->data=a;
     ptr->next=NULL;
     
     if(start==NULL)
     {
                    start=ptr;
                    rear=ptr;
                    
     }
     else
     {
         temp=rear;
         rear=ptr;
         temp->next=rear;
     }
}

void display()
{
     temp=s1;
     while(temp!=NULL)
     {
                      cout<<temp->data<<" -> ";
                      temp=temp->next;
     }
}

int main()
{
    int d,a;
    cout<<"\n ENTER MAXIMUM DEGREE FOR THE TWO POLYNOMIALS : ";
    cin>>d;
    for(int i=0 ; i<=d ;i++)
    {
            cout<<"\n ENTER COEFFICIENT FOR x^ " <<i<<" : ";
            cin>>a;
            create_node(s1,r1,a);
    }
    
    display();
         
    getch();
    return 0;   
} 
