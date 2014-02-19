#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
       int data;
       node *next;
} *start=NULL , *ptr, *temp, *save;


void create_node(int a)
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
     
         ptr->next=start;
         start=ptr;
     }
}

void delete_node(int b)
{
     temp=start;
     while(temp->data!=b)
     {
                     save=temp;
                     temp=temp->next;
     }
     
     temp=temp->next;
     save->next=temp;
     
}     

void insert_node(int p)
{
     int a;
     temp=start;
     for(int i=1; i<p-1; i++)
     {
             temp=temp->next;
     }      
     save=temp;
     temp=temp->next;  
     ptr=new node;
     cout<<"\n ENTER DATA FOR NODE : ";
     cin>>a;
     ptr->data=a;
     save->next=ptr;
     ptr->next=temp;
}     
          
void display_node()
{
     temp=start;
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
             create_node(d);
             cout<<"\n DO YOU WANT TO CREATE MORE NODES ? " ;
             cin>>ch;
    }
    display_node();
    cout<<"\n ENTER DATA OF THE NODE WHICH YOU WANT TO DELETE : ";
    cin>>d;
    delete_node(d);
    display_node();
    cout<<"\n ENTER THE POSITION AT WHICH YOU WANT TO INSERT THE NODE : ";
    cin>>d;
    insert_node(d);
    display_node();
    getch();
    return 0;   
} 
