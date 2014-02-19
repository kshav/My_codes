#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
 int co;
 int ex;
 node *link;
}*start1=NULL,*start2=NULL,*last1=NULL,*last2=NULL,*last3=NULL,*start3=NULL,*ptr=NULL,*newptr=NULL,*save=NULL,*ctr=NULL,*rtr=NULL;
void multiply()
{
     ctr=start1;
     ptr=start2;
     while(ctr!=NULL)
     {
      ptr=start2;
      while(ptr!=NULL)
      {
      newptr=new node;
      newptr->co=ctr->co*ptr->co;
      newptr->ex=ctr->ex+ptr->ex;
      newptr->link=NULL;
      if(ctr==start1)
      {
        if(start3==NULL)
        {
         start3=newptr;
         last3=newptr;
        }
      else
        {
         last3->link=newptr;
         last3=newptr;
        }
      }
      else
      {
       rtr=start3;
       save=start3;
       while(rtr!=NULL)
       {
        if(newptr->ex>rtr->ex)
        {
         save->link=newptr;
         newptr->link=rtr;
         break;
        }
        else if(newptr->ex==rtr->ex)
        {
         rtr->co=rtr->co+newptr->co;
         break;
        }
        else
        {
         save=rtr;
         rtr=rtr->link;
        }
      };
     
     if(rtr==NULL)
     {
      last3->link=newptr;
      last3=newptr;
     }
     }
     ptr=ptr->link;
     };
     ctr=ctr->link;
     };
}
int main()
{
    char ch;
cout<<"enter the data of the first polynomial  :\n";
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
last1->link=newptr;
last1=last1->link;
}
cout<<"\n do you want to continue";
cin>>ch;
}while(ch=='y');

cout<<"enter the data of the second polynomial  :\n";
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
last2->link=newptr;
last2=last2->link;
}
cout<<"\n do you want to continue  :   ";
cin>>ch;
}while(ch=='y');
system("cls");
ptr=start1;
cout<<"\n";
while(ptr!=NULL)
{
cout<<ptr->co<<" x^"<<ptr->ex<<" + ";
ptr=ptr->link;
};
cout<<" 0";
ptr=start2;
cout<<"\n\n";
while(ptr!=NULL)
{
cout<<ptr->co<<" x^"<<ptr->ex<<" + ";
ptr=ptr->link;
};
cout<<" 0";
cout<<"\n\n answer is : ";
cout<<"\n\n\n";
multiply();
ptr=start3;
while(ptr!=NULL)
{
cout<<ptr->co<<" x^"<<ptr->ex<<" + ";
ptr=ptr->link;
};
cout<<" 0 ";
getch();
return 0;
}

