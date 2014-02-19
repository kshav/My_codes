#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
struct node
{
char info;
node *left;
node *right;
}*root;
void preorder(node *ptr)
{
if(ptr!=NULL)
{
cout<<ptr->info;
preorder(ptr->left);
preorder(ptr->right);
}
}
void grt()
{
 char a[1000],b;
 int m=-1;
 ifstream fin;
 ofstream fout;
 fout.open("drag.txt");
 fin.open("tyre.txt");
 while(true)
 {
  fin>>b;
  if(fin.eof())
  break;
  m++;
  a[m]=b;
 }
 node *temp=root;
 for(int i=0;i<=m;i++)
 {
 if(a[i]=='0')
 temp=temp->left;
 else
 temp=temp->right;
 if(temp->left==NULL&&temp->right==NULL)
 {
 cout<<temp->info;
 fout<<temp->info;
 temp=root;
 }
}
}
int main()
{
node *newptr,*temp;
root =new node;
root->info='x';
root->left=NULL;
root->right=NULL;
newptr =new node;
newptr->info='e';
newptr->left=NULL;
newptr->right=NULL;
root->right=newptr;
newptr=new node;
newptr->info='x';
root->left=newptr;
temp=root->left;
newptr=new node;
newptr->info='a';
newptr->left=NULL;
newptr->right=NULL;
temp->right=newptr;
newptr=new node;
newptr->info='x';
temp->left=newptr;
temp=temp->left;
newptr=new node;
newptr->info='c';
newptr->left=NULL;
newptr->right=NULL;
temp->right=newptr;
newptr=new node;
newptr->info='x';
temp->left=newptr;
temp=temp->left;
newptr=new node;
newptr->info='d';
newptr->left=NULL;
newptr->right=NULL;
temp->right=newptr;
newptr=new node;
newptr->info='b';
newptr->left=NULL;
newptr->right=NULL;
temp->left=newptr;
grt();
getch();
return 0;
}

