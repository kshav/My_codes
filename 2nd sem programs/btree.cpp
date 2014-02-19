#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
       int info,d;
       node *left,*right;
}*root=NULL,*tmp=NULL;
int t=1,h=0,w=0,k=1;
node  search(node *ptr)
{
     if(ptr!=NULL)
     {
      if(ptr->d==t)
      {
       tmp=ptr;
      }
     else
     {
      search(ptr->left);
      search(ptr->right);
     }
    }
}
void binary()
{
  node *temp;
  temp=new node;
  cin>>temp->info;
  temp->d=k++;
  temp->left==NULL;
  temp->right==NULL;
  if(root==NULL)
  root=temp;
  else
  {
   search(root);
   if(w==0)
   {
    tmp->left=temp;
    w++;
   }
   else
   {
    tmp->right=temp;
    w=0;
    t++;
   }
  }
}
void display(node *ptr)
{
   if(ptr!=NULL)
   {
    cout<<" "<<ptr->info;
    display(ptr->left);
    display(ptr->right);
   }
}
int main()
{
 char ch;
 do
 {
   int c;
   cout<<" \nenter info : ";
   binary();
   cout<<"\ndo you want to add more ";
   cin>>ch;
 }while(ch=='y');
 node *ptr=root;
 display(ptr);
 getch();
 return 0;
}
  
       
