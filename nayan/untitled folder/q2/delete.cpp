#include<iostream>
#include<conio.h>
using namespace std;
struct node
 {
  int info;
  node *left;
  node *right;
 }*root=NULL,*newptr=NULL,*ptr=NULL;
 int main()
 {
  int n;
  cout<<"enter the number you want to delete";
  cin>>n;
  if(root==NULL)
  cout<<"NO NODE IS THERE\n";
  else
  {
   node *temp,*temp1;
   temp=root;
   temp1=temp;
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
      temp->left;
     }
    }
  if(temp!=temp1)
  {
   if(temp=temp1->left)
   {
     if(temp->left!=NULL&&temp->right==NULL)
      temp1->left=temp->left;
     else if(temp->right!=NULL&&temp->left==NULL)
      temp->left=temp->right;
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
    }
    else
    {
     if(temp->left!=NULL&&temp->right==NULL)
      temp1->right=temp->left;
     else if(temp->right!=NULL&&temp->left==NULL)
      temp1->right=temp->right;
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
    }  
   else
   {
    if(temp->left!=NULL&&temp->right==NULL)
    root=temp->left;
    else if(temp->right!=NULL&&temp->left==NULL)
    root=temp->right;
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
    delete (temp);
}
} 
getch();
return 0;
}
  
