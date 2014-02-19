#include<iostream>
#include<conio.h>
using namespace std;
int front=-1,rear=-1,flag=0,flagd=1,a[5],n=5;
void insert()
{
 flagd=0;
 int s;
 cout<<"\nEnter info ";
 cin>>s;
 if(rear==n-1)
 rear=0;
 else
 rear++;
 if((front==rear+1&&rear!=-1)||(front==0&&rear==n-1))
 flag=1;
 if(front=-1)
 front++;
 a[rear]=s;
}
void del()
{
 cout<<"\n"<<a[front]<<" deleting ";
 if(front==rear)
 {
 flag=0;
 front=-1;
 rear=-1;
 flagd=1;
 }
 if((front==rear+1)||(rear==n-1&&front==0)||(front==-1&&rear==-1))
 {
 flag=0;
 }
 if(rear==0)
 rear=n-1;
 else
 rear--;
}
int main()
{
int d;
char ch;
do
{
cout<<"1.Insert\n2.Delete\n\nEnter your choice  ";
cin>>d;
switch(d)
{
 case 1:
       {
       if(flag==1)
       cout<<"\noverflow";
       else
       insert();
       break;
       }
 case 2:
      {
      if(flagd==1)
      cout<<"\nunderflow";
      else
      del();
      break;
      }
 default:
      cout<<"Wrong choice";
}
      cout<<"\nDo you want to continue ";
      cin>>ch;
 }while(ch=='y'||ch=='Y');
 return 0;
}
