#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
struct node
{
     int info;
     node *left;
     node *right;
     node *parent;
}*root=NULL,*newptr=NULL;
int level=0;
void preorder(node *ptr)
{
    if(ptr!=NULL)
    {
         cout<<ptr->info<<"\n";
         preorder(ptr->left);
         preorder(ptr->right);
    }
}
void change(node *&x,node *&y,node *&z)
{
    if(y==z->left)
    {
    if(x==y->right)       //left right rotation
    {
        z->left=x;
        x->parent=z;
        y->right=x->left;
        if(x->left!=NULL)
        x->left->parent=y;
        x->left=y;
        y->parent=x;
        x=y;
        y=z->left;
    }
    if(z==root)                     //left left rotation
    {
    root=y;
    y->parent=NULL;
    }
    else if(z->parent->left==z){
    z->parent->left=y; y->parent=z->parent;}
    else if(z->parent->right==z){
    z->parent->right=y; y->parent=z->parent;}
    z->left=y->right;
    if(y->right!=NULL)
    y->right->parent=z;
    y->right=z;
    z->parent=y;
    }
   else
   {
   if(x==y->left)                //right left rotation
   {
   z->right=x;
   x->parent=z;
   y->left=x->right;
   if(x->right!=NULL)
   x->right->parent=y;
   x->right=y;
   y->parent=x;
   x=y;y=z->right;
   }
   if(z==root)                 //right right rotation
   {
   root=y;
   y->parent=NULL;
   }
   else if(z->parent->right==z)
   {
   z->parent->right=y;y->parent=z->parent;
   }
   else if(z->parent->left==z)
   {
   z->parent->left=y;y->parent=z->parent;
   }
   z->right=y->left;
   if(y->left!=NULL)
   y->left->parent=z;
   y->left=z;
   z->parent=y;
   }
}
void height(node *ptr,int &a)
{
    level++;
    if(ptr!=NULL)
    {
    if(level>a)
    a=level;
    height(ptr->left,a);
    height(ptr->right,a);
    }
    level--;
}
void balance(node *&ptr)
{
    node *x=NULL,*y=NULL,*z=NULL;
    x=ptr;
    p:
    if(x!=root)
    {
        int a=0,b=0;
        y=ptr->parent;
        if(y!=root)
        {
        z=y->parent;
        height(z->left,a);
        height(z->right,b);
        int c=a-b;
        if(c>=-1&&c<=1)
        {
                 y=z;
                 x=y;
                 goto p;
        }
        else
        change(x,y,z);
        }
   }
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
  {
  root=newptr;
  root->parent=NULL;
  }
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
  else if(c<temp->info){
  temp->left=newptr;newptr->parent=temp;}
  else{
  temp->right=newptr;newptr->parent=temp;}
  }
  balance(newptr);
}
int main()
{
for(int i=0;i<5;i++)
{
insrt();
preorder(root);
cout<<"\n";
}
getch();
return 0;
}
  
