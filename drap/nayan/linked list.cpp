#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
      int info;
      node *link;
};
node *start=NULL,*last=NULL,*newptr=NULL,*ptr=NULL,*save=NULL;
void push()
{
 newptr=new node;
 cout<<"\n enter the number";
 cin>>newptr->info;
 newptr->link=NULL;
 if(start==NULL)
 {
  start=newptr;
  last=newptr;
 }
 else
 {
  last->link=newptr;
  last=last->link;
 }
}
void pop()
{
 if(start==NULL)
 {
  cout<<"\n no element is there";
 }
 else
 {
     ptr=start;
     save=ptr;
     while(ptr!=last)
     {
     save=ptr;
     ptr=ptr->link;
     };
     cout<<"\n"<<ptr->info<<"deleting";
     save->link=NULL;
     delete(ptr);
     last=ptr;
     
 }
}
void display()
{
 ptr=start;
 while(ptr!=NULL)
   {
    cout<<"\n"<<ptr->info;
    ptr=ptr->link;
   };
}
int main()
{
    int ch;
    char c;
    do  
    {

    cout<<"1.add new node\n";
    cout<<"2.delete node\n";
    cout<<"3.display\n";
    cout<<"\n\n enter your choice ";
    cin>>ch;
    switch(ch)
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
    cout<<"\n do you want to continue";
    cin>>c;
   }while(c=='y');
    getch();
    return 0;
} 
    
