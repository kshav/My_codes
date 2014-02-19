#include<iostream>
#include<conio.h>
using namespace std; 
struct node
{
int co;
int ex;
node *link;
}*start1=NULL,*start2=NULL,*last1,*last2,*ptr,*newptr,*start3=NULL,*last3;
void display(node *ptr)
{
     while(ptr!=NULL)
     {
     cout<<ptr-
     
int main()
{
    char ch;
    cout<<"enter the polynomial number 1\n";
    do
    {
     newptr=new node;
    cin>>newptr->co;
    cin>>newptr->ex;
    newptr->link=NULL;
    if(start1==NULL)
    {
     start1=newptr;
     last1=newptr;
    }
    else
    {
        last1=newptr;
        last1=last1->link;
    }
    cout<<"\n do you want to continue";
    cin>>ch;
    }while(ch=='y');
    cout<<"enter the polynomial number 1\n";
    do
    {
     newptr=new node;
    cin>>newptr->co;
    cin>>newptr->ex;
    newptr->link=NULL;
    if(start2==NULL)
    {
     start2=newptr;
     last2=newptr;
    }
    else
    {
        last2=newptr;
        last2=last2->link;
    }
    cout<<"\n do you want to continue";
    cin>>ch;
    }while(ch=='y');
    
