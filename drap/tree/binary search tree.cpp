#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
 int info;
 node *left;
 node *right;
}*ptr=NULL,*newptr=NULL,*temp=NULL,*temp1=NULL;
void insert()
{
 cout<<"enter the value\n";
 newptr=new node;
 cin>>newptr->info;
 newptr->left=NULL;
 newptr->right=NULL;
 if(ptr==NULL)
 ptr=newptr;
 else
 {
     temp=ptr;
     while(temp!=NULL)
     {
      temp1=temp;
      if(temp1->info>newptr->info)
      temp=temp->left;
      if(temp1->info<newptr->info)
      temp=temp->right;
     };
     if(temp1->info>newptr->info)
      temp1->left=newptr;
     if(temp1->info<newptr->info)
     temp1->right=newptr;
     }
 } 

void inorder(node *tr)
{
    if(tr!=NULL)
    {
      inorder(tr->left);
      cout<<"  "<<tr->info;
      inorder(tr->right);
    }    
} 
void preorder(node *tr)
{
     if(tr!=NULL)
     {
      cout<<"  "<<tr->info;
      preorder(tr->left);
      preorder(tr->right);
     }
}
void postorder (node *tr)
{
     if(tr!=NULL)
     {
      postorder(tr->left);
      postorder(tr->right);
      cout<<"  "<<tr->info;
     }
}    
int main()
{
    char ch;
    int n;
    do
    {
     cout<<"1.insert\n2.display\nenter your choice\n";
     cin>>n;
     switch(n)
     {
      case 1:
           {
           cout<<"enter how many elements you want to enter \n";
            cin>>n;
            for(int i=0;i<n;i++)
            insert();
            break;
            }
      case 2:
           {
            temp=ptr;
            if(ptr==NULL)
            cout<<"\n no element is there";
            else
            {
             cout<<"\n";
            inorder(temp);
            cout<<"\n";
            preorder(temp);
            cout<<"\n";
            postorder(temp);
            break;
           }
           }
      }
      cout<<"do you wnt to continue";
      cin>>ch;
      }while(ch=='y');
return 0;
}
