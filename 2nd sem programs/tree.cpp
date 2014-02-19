#include<iostream>
#include<conio.h>
using namespace std;

struct tree
{
       int data;
       tree* left;
       tree* right;
}*root=NULL,*temp,*ptr,*parent;


void create(int d)
{
     if(root== NULL)
     {
             root=new tree;
             root->data=d;
             root->left=root->right= NULL;
     }
     
     else
     {
         ptr=new tree;
         ptr->data=d;
         ptr->left=ptr->right=NULL;
         temp=root;
         while(temp)
         {
                    parent=temp;
                    if(ptr->data>temp->data)
                          temp=temp->right;
                          
                    else temp=temp->left;
         }
         
         if(parent->data>ptr->data)
            parent->left=ptr;
         else parent->right=ptr;
     }
}

void delete(int a)
{
     temp=root;
     while(temp->data!=a)
     {
                parent=temp;
                if(temp->data>a)
                temp=temp->left;
                else temp=temp->right;
     }
     
     if(temp->left=temp->right=NULL)
     {
                if(temp=parent->right)
                   parent->right=NULL;
                else parent->left=NULL;
     }
     
     else if(temp->left!=NULL && temp->right=NULL || temp->left=NULL && temp->right!=NULL)
     {
          if(temp->left!=NULL && temp->right=NULL)
          {
                              if(parent->left=temp)
                              parent->left=temp->left;
                              else parent->right=temp->left;
          }
          else if(temp->left=NULL && temp->right!=NULL)
          {
                              if(parent->left=temp)
                              parent->left=temp->right;
                              else parent->right=temp->right;
          }
     }
     
     else
     {
         if((temp->right)->left=NULL && (temp->right)->right=NULL)
         {
                                     if(parent->right=temp)
                                     {
                                                           parent->right=temp->right;
                                                           temp->left=(parent->right)->left;
                                     }
                                     else
                                     {
                                                           parent->left=temp->right;
                                                           temp->left=(parent->left)->left;
                                     }
         }
                
                

void display_in(tree* r)
{
     if(r)
     {
          if(r->left)
             display_in(r->left);
          cout<<r->data<<"  ";
          if(r->right)
             display_in(r->right);
     }
     
}

void display_pre(tree* r)
{
     if(r) 
     {
          cout<<r->data<<"  ";
          if(r->left)
             display_in(r->left);
          if(r->right)
             display_in(r->right);
     }
}

void display_post(tree* r)
{
     if(r)
     {
          if(r->left)
             display_in(r->left);
          if(r->right)
             display_in(r->right);
          cout<<r->data<<"  ";
     }
}

int main()
{
    int d;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
                    
                    cout<<"\n ENTER DATA FOR NODE : ";
                    cin>>d;
                    create(d);
                    cout<<"\n DO YOU WANT TO ADD MORE NODES ? : ";
                    cin>>ch;
    }
    
    cout<<"\n TREE IN INORDER : \n ";
    display_in(root);
    cout<<"\n TREE IN PREORDER : \n ";
    display_pre(root);
    cout<<"\n TREE IN POSTORDER : \n ";
    display_post(root);
    
    
    
    getch();
    return 0;
}


     
             
          
         
               
