#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
       int data;
       node *next;
}*start, *rear, *temp, *ptr;

void create_node(int a)
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

int main()
{
    int d,a;
    cout<<"\n ENTER MAXIMUM DEGREE FOR THE TWO POLYNOMIALS : ";
    cin>>d;
    for(int i=0 ; i<=d ;i++)
    {
            cout<<"\n ENTER COEFFICIENT FOR x^ " <<i<<" : ";
            cin>>a;
            create_node(a);
    }
            
    getch();
    return 0;   
} 
