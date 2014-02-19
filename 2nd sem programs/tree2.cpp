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


     
             
