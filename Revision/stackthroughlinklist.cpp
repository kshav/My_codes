#include<iostream>
#include<conio.h>
using namespace std;

    struct node
    {
           int info;
           node *link;
    };
    
    node *top,*temp,*p,*s;
 
 void push()
   {
         p=new node;
         p->link=top;
         top=p;
         cout<<"Enter a no.\n";
         cin>>p->info;
   }
   
   void pop()
   {
        temp=top;
        top=temp->link;
        free(temp);
  }    
  
  void dele()
  {
       int t;
       cout<<"Enter the no. u want to delete\n";
       cin>>t;
       temp=top;
       if(top->info==t)
       {
       temp=top;
       top=temp->link;
       free(temp);
       }
       else
       {
            while(temp->link->info!=t)
            {
            temp=temp->link;
            };
           if(temp->link->info==t)
         {
            s=temp->link; 
            temp->link=temp->link->link;
            free(s);
         }
       }
  }
  
  void insert()
  {
     int g;  
     p=new node;
     cout<<"Enter the no. after which u want to insert the no.\n";
     cin>>g;
     temp=top;
     while(temp->info!=g)
     {
        temp=temp->link;
     };
     if(temp->info==g)
     {
         p=new node;
         p->link=temp->link;             
         temp->link=p;
         cout<<"Enter no.\n";
         cin>>p->info;
     }                
  }
                      
                     

int main()
{
    int n;
    char k;
   
     p=new node;
     p->link=NULL;
     cout<<"Enter a no.\n";
     cin>>p->info;
     top=p;

do
{
cout<<"\nFor entering a value press 1\nFor deleting top value press 2\nFor deleting a particular value press 3\nFor inserting a new no. press 4\n\n";
cin>>n;
if (n==1)
push();
else if(n==2)
pop();
else if(n==3)
dele();
else if(n==4)
insert();
else
cout<<"\nWrong Option\n";
cout<<"\nDo you still want to continue(y/n)\n";
cin>>k;
}
while(k=='y');

while(top!=NULL)
{
cout<<top->info;
top=top->link;
}

getch();
return 0;
}
     
     
  
        
                               
     

            