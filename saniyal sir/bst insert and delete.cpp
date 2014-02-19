#include<iostream>
#include<conio.h>
using namespace std;
struct node
 {
  int info;
  node *left;
  node *right;
 }*root=NULL,*newptr=NULL,*ptr=NULL;
void inorder(node *pt)
 {
 if(pt!=NULL)
 {
  inorder(pt->left);
  cout<<pt->info;
  inorder(pt->right);
 }
 return ;
}
void insrt()
 {
  int c;
  cout<<"\nenter number \n";
  cin>>c;
  newptr=new node;
  newptr->info=c;
  newptr->left=NULL;
  newptr->right=NULL;
  if(root==NULL)
   root=newptr;
   else
   {
    node *temp=NULL,*temp1=NULL;
    temp1=root;
    while(temp1!=NULL)
    {
     temp=temp1;
     if(c<temp1->info)
     temp1=temp1->left;
     else if(c>temp1->info)
     temp1=temp1->right;
     else break;
    }
    if(c==temp->info);
    else if(c<temp->info)
    temp->left=newptr;
    else
    temp->right=newptr;
   }
  }
void delt()
{
      int n;
  cout<<"enter the number you want to delete";
  cin>>n;
  if(root==NULL)
  cout<<"NO NODE IS THERE\n";
  else
  {
   node *temp=NULL,*temp1=NULL;
   temp=root;
   temp1=root;
   while(temp!=NULL)
   {
     if(temp->info==n)
      break;
     else
     {
      temp1=temp;
      if(temp->info<n)
      temp=temp->right;
      else if(temp->info>n)
      temp=temp->left;
     }
    }
  if(temp!=temp1)
  {
   if(temp==temp1->left)
   {
     if(temp->left!=NULL&&temp->right==NULL)
      temp1->left=temp->left;
     else if(temp->right!=NULL&&temp->left==NULL)
      temp->left=temp->right;
      else if(temp->left==NULL&&temp->right==NULL)
      temp1->left=NULL; 
      else
      {
        node *x=temp->left;
        while(x->right!=NULL)
         {
          x=x->right;
         };
        temp1->left=temp->left;
        x->right=temp->right;
      }
     delete (temp);
    }
    else
    {
     if(temp->left!=NULL&&temp->right==NULL)
      temp1->right=temp->left;
     else if(temp->right!=NULL&&temp->left==NULL)
      temp1->right=temp->right;
     else if(temp->left==NULL&&temp->right==NULL)
      temp1->right=NULL; 
     else
      {
        node *x=temp->right;
        while(x->right!=NULL)
        {
         x=x->right;
        };
        temp1->left=temp->left;
        x->right=temp->right;
      }
     }
     delete (temp);
    }  
   else
   {
    if(temp->left!=NULL&&temp->right==NULL)
    root=temp->left;
    else if(temp->right!=NULL&&temp->left==NULL)
    root=temp->right;
    else if(temp->left==NULL&&temp->right==NULL)
      root=NULL; 
    else
    {
     node *x=temp->left;
     while(x->right!=NULL)
     {
      x=x->right;
     }
     root=temp;
     x->right=temp->right;
    }
   delete(temp);
   }
 }
}
int main()
{
   char ch;
   do
   {
    int n;
    cout<<"1. INSERT\n2. DELETE\n\nenter your choice ";
    cin>>n;
    switch(n)
    {
     case 1:
          {
           for(int i=0;i<5;i++)
           insrt();
           break;
          }
     case 2:
          {
           delt();
           break;
          }
     case 3:
          {
          inorder(root);
          break;
          }
     default:
          cout<<"Wrong Choice\n";
     }
     cout<<"do you wish to continue";
     cin>>ch;
     }while(ch=='y'||ch=='Y');
     return 0;
}
     
       
