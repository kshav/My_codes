#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
       int info,d;
       node *left,*right;
}*root=NULL,*tmp=NULL,*p=NULL,*m=NULL;
int t=1,h=0,w=0,k=1;
void pre(node *ptr,node *temp)
{
 if(ptr!=NULL)
  {
   if((ptr->left==temp)||(ptr->right==temp))
     p=ptr;
     else
     {
     pre(ptr->left,temp);
     pre(ptr->right,temp);
     }
   }
}
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
  int z=1;
  while(z==1)
  {
   pre(root,temp);
   if(temp->info>p->info)
   {
    int g;
    g=p->info;
    p->info=temp->info;
    temp->info=g;
   temp=p;
   }
   else
   z=0;
  };
}
}
void last(node *ptr)
{
 if(ptr!=NULL)
 {
  if(ptr->d==k-1)
   m=ptr;
   else
   {
   last(ptr->left);
   last(ptr->right);
   }
  }
}
void sarch(node *ptr,int n)
{
 if(ptr!=NULL)
 {
 if(ptr->info==n)
 tmp=ptr;
 else
 {
  sarch(ptr->left,n);
  sarch(ptr->right,n);
 }
}
}
void swp(node *u,node *v)
{
 int f;
 f=u->info;
 u->info=v->info;
 v->info=f;
}
void del()
{
     int n;
 cout<<"\n enter the no u wnt to delete";
 cin>>n;
 sarch(root,n);
 last(root);
 pre(root,m);
 if(p->left==m)
 p->left=NULL;
 else
 p->right=NULL;
 tmp->info=m->info;
 delete m;
 k--;
 int flag=1;
 while(flag==1)
 {
  if(tmp->left->info>=tmp->info)
  {
  swp(tmp->left,tmp);
  tmp=tmp->left;
  }
  else if(tmp->right->info<=tmp->info)
  {
   swp(tmp->right,tmp);
   tmp=tmp->right;
  }
  else
  flag=0;
};
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
   cout<<"\n1.insert\n2.delete\n3.display\n enter ur choice  ";
   int c;
   cin>>c;
   switch(c)
   {
    case 1:
         {
          cout<<" \nenter info : ";
          binary();
          break;
         }
    case 2:     
         {
          del();
          break;
         }
    case 3:
         {
         display(root);
         break;
         }
         }
         
         
    cout<<"\ndo you want to continue ";
   cin>>ch;
 }while(ch=='y');
 getch();
 return 0;
}
  
       
