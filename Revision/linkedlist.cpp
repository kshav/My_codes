#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char k;
    struct node
    {
           int info;
           node *link;
    }*top;
    node *temp,*p;
    
    p=new node;
    p->link= NULL;
    top=p;
    cout<<"Enter a no.\n";
    cin>>p->info;
           do {
    p=new node;
    p->link=top;
    top=p;
    cout<<"Enter another number\n";
    cin>>top->info;
    cout<<"Do you want to continue(y/n)\n";
    cin>>k;

    }
    while(k=='y');
  
    while(top->link>=NULL)
  {  
    cout<<top->info;
    top=top->link;
  } 
    getch();
    return 0;
}