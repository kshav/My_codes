#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
       int v;
       node *left;
       node *right;
} *root,*trev,*temp;
void inorder(node *);
void preorder(node *);
void postorder(node *);
void bsearch(node *,int);
int t;
int main()
{
    int n;
    char c;
    root=temp=trev=NULL;
    do
    {
                   temp= new node;
                   cout<<"enter the value\n";
                   cin>>temp->v;
                   temp->left=temp->right=NULL;
                   if(root == NULL)
                   root=trev=temp;
                   else 
                   {
                        trev=root;
                        while(trev->left != NULL && trev->right != NULL)
                        {
                                   if(temp->v < trev->v)
                                   trev=trev->left;
                                   else if(temp->v > trev->v)
                                   trev=trev->right;
                        }
                   }

    if(temp->v < trev->v)
    trev->left=temp;
    else if(temp->v > trev->v)
    trev->right=temp;
    cout<<"enter more y/n";
    cin>>c;
}while(c == 'y');

inorder(root);
cout<<"\n";
preorder(root);
cout<<"\n";
postorder(root);
cout<<"enter number to be searched\n";
cin>>n;
bsearch(root,n);
if (t != 1)
cout<<"not found\n";
getch();
return 0;
}
void inorder(node *p)
{
     if(p != NULL)
     {
     inorder(p->left);
     cout<<p->v;
     inorder(p->right);
     }
}
void preorder(node *p)
{
      if(p != NULL)
      {
     cout<<p->v;
     preorder(p->left);
     preorder(p->right);
     }
}
void postorder(node *p)
{
     if(p != NULL)
     {
     postorder(p->left);
     postorder(p->right);
     cout<<p->v;
     }
}
void bsearch(node *p,int n)
{
     
     if(p != NULL)
     {
          if(p->v == n)
          {
            cout<<"found\n";
             t=1;
          }
          else if(n<p->v)
          bsearch(p->left,n);
          else
          bsearch(p->right,n);
     }
     
}
                   
                   
                        
