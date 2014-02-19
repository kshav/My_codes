#include<iostream>
#include<conio.h>
using namespace std;
struct node
{ 
int info;
int priority;
int d;
node *left;
node *right;
}*root=NULL,*p=NULL;
void inorder(node *ptr)
{ 
 if(ptr!=NULL)
 {
  cout<<"\n"<<ptr->info;
  inorder(ptr->left);
  inorder(ptr->right);
 }
}
void preorder(node *ptr,int count)
{
    if (ptr!=NULL)
    {
       if(ptr->d==count)
       {p=ptr;return;}
        preorder(ptr->left,count);
        preorder(ptr->right,count);
   }
}
void entry(int n,int &count)
{
 node *newptr=new node;
 cout<<"enter info  ";
 cin>>newptr->info;
 cout<<"enter the priority";
 cin>>newptr->priority;
 newptr->d=n;
 newptr->left=NULL;
 newptr->right=NULL;
 preorder(root,count);
 if(p->left==NULL)
  p->left=newptr;
 else
 {
  p->right=newptr;
  count++;
  }
 }
void maxheap(int no)
{
 
 while(no!=-1)
{
 preorder(root,no);
  if (p->left!=NULL&&p->right==NULL&&p->left->priority > p->priority)
 {
   swap(p->left->info,p->info);
   swap(p->left->priority,p->priority);
 }
 else if(p->left!=NULL&&p->right!=NULL)
 {
       if(p->left->priority>p->priority)
     { 
      swap(p->left->info,p->info);
      swap(p->left->priority,p->priority);  
     }
   if(p->right->priority>p->priority)
    {
      swap(p->right->info,p->info);
      swap(p->right->priority,p->priority);  
     }
 }
 no--;
};
}     
void del(int n,int &count)
{
 cout<<root->info;
 preorder(root,n);
 swap(root->info,p->info);
 swap(root->priority,p->priority);
 node *temp=p;
 preorder(root,count);
 if(p->right==temp)
 p->right=NULL;
 else
 { 
 p->left=NULL;
 count--;
 }
 delete temp;
 n--;
 maxheap(n);
}
 
int main()
{
int count=0,n=-1;
n++;
char ch;
root=new node;
cout<<"enter info ";
cin>>root->info;
cout<<"enter priority ";
cin>>root->priority;
root->d=n;
root->left=NULL;
root->right=NULL;
n++;
do
{
 
 entry(n,count);
 maxheap(n);
 n++;
 inorder(root);
 cout<<"do you want to continue ";
 cin>>ch;
 }while(ch=='y');
 cout<<"\n\n\n";
 n--;
 preorder(root,count);
 if(p->left==NULL)
 count--;
 for(int i=0;i<=n;i++)
 {cout<<"\n";
 del(n-i,count);
 }
 getch();
 return 0;
}

