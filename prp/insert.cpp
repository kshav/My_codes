#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
struct node
 {
  int info;
  node *left;
  node *right;
 }*root=NULL,*newptr=NULL,*ptr=NULL; 
void inorder(node *pt)  //inorder traversal
{
  if(pt!=NULL)
  {
   inorder(pt->left);
   inorder(pt->right);
   cout<<pt->info;
  }
 return ;
}
  
int main()
{
 srand(time(0));
 int n;
 cout<<"enter how many elements do you want ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  int c=rand()%1000;    //random number generation
  cin>>c;
  newptr=new node;        //new node create
  newptr->info=c;
  newptr->left=NULL;
  newptr->right=NULL;
  if(i==0)
  root=newptr;     
  else
   {
    node *temp=NULL,*temp1=NULL;
    temp1=root;
    while(temp1!=NULL)     //checking the position where node to be inserted
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
  node *pf=NULL;
  pf=root;
  inorder(pf);
  getch();
  return 0;
}
