#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
       int info,rem;
       node *link;
}*p,*top;

int main()
{
    p=new node;
    p->link=NULL;
    p->rem=0;
    cout<<"Enter the no.\n";
    cin>>p->info;
    top=p;
    do
    {
          p=new node;
          p->link=top;
          p->rem=(top->info)%2;
          p->info=(top->info)/2;
          top=p;
          
    }
    while((p->info)>1);
    
    cout<<top->info;
    
    do
    {
    cout<<top->rem;
    top=top->link;
    }
    while(top->link!=NULL);
    getch();
    return 0;
}
    