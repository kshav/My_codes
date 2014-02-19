#include<iostream>
#include<conio.h>
using namespace std;
struct node
{   int info;
    node*left;
    node*right;
    node*parent;
 
}*root=NULL;
node*findmin()
{  node*p=root;                                           //to find minimum node
   if(p==NULL)
   cout<<"tree is empty";
   else
   {  while(p->left!=NULL)
      p=p->left;
   }
      return p;
}
node*findmax()
{  node*p=root;                                           //to find maximum node
   if(p==NULL)
   cout<<"tree is empty";
   else
   {  while(p->right!=NULL)
      p=p->right;
   }
      return p;
}
//to find a particular node
node*find_node(int num,node*p)
{   if(p==NULL)
     cout<<"tree is empty...node not found";
    else if(num<p->left)
       find_node(num,p->left); 
    else if(num>p->right)
       find_node(num,p->right);
    else
       cout<<"FOUND...!!!!"
}
//to calculate the height of tree or subtree      
int height(node*leaf,int ch)                                
{   if(leaf!=NULL)
    { 
     if(leaf->left==NULL&&leaf->right==NULL)
     return(ch);
     else
     {  ch++;
        ch=height(leaf->left,ch);
        ch=height(leaf->right,ch);
        return ch;
     }
    }
    else
    return ch;
}
int balancefactor(node*l)                                 //to calculate the balance factor of a node
{  int n,x=0,y=0;
   if(l!=NULL)
   { 
   if(l->left!=NULL)
   x=1;
   if(l->right!=NULL)
   y=1;
   n=height(l->left,x)-height(l->right,y);
   }
   else
   n=0;
   return n;
}
node* LLrotation(node*ptr)
{  if(ptr!=NULL)
   {            node*save,*t;
                save=ptr;
                t=ptr->left;
                t->parent=ptr->parent;
                save->left=t->right;
                t->right=save;
                return t;
   }
}
node* RRrotation(node*ptr)
{   if(ptr!=NULL)
    {           node*save,*t;
                save=ptr;
                t=ptr->right;
                t->parent=ptr->parent;
                save->right=t->left;
                t->left=save;
                return t;
    }
}
void add(node*leaf,int num,node*t)
{  if(num<leaf->info)
   { if(leaf->left==NULL)
      {       temp->parent=leaf;
              leaf->left=temp;
      }
     else
       add(leaf->left,num,temp);
   }
   else
   { if(leaf->right==NULL)
     {       temp->parent=leaf;
             leaf->right=temp;
      }
     else
     add(leaf->right,num,temp);
   }
}  
void insertval(int val)
{
   node*temp=new node;
   temp->info=val;
   temp->left=NULL;
   temp->right=NULL;
   temp->parent=NULL;
   if(root==NULL)
   root=temp;
   else
   {   node*leaf=root;
       add(leaf,val,temp);//changes at temp
   }
   cout<<"node inserted";
   while(temp!=NULL)
   {  if(balancefactor(temp)>1)
      {  if(balancefactor(temp->left)>=1)
              LLrotation(temp);
         else if(balancefactor(temp)<=-1)
           {  temp=temp->left;
              temp=RRrotation(temp);
              LLrotation(temp);
           }
      }
      else if(balancefactor(temp)<-1)
      {  if(balancefactor(temp->left)>=1)
            {  temp=temp->right;
               temp=LLrotation(temp);
               temp=RRrotation(temp);
              }
         else if(balancefactor(temp)<=-1)
               temp=RRrotation(temp);
      }
     temp=temp->parent;
   }
}   
int main()
{ 
int ch,value;
cout<<"enter ur choice";
cin>>ch;
do
{
switch(ch)
{
case 1:
cout<<"\nEnter the value to insert:";
cin>>value;
insertval(value);
break;
case 2:
print(root);
break;
/*case 3:
cout<<"\nEnter the value to delete:";
cin>>value;
temp = NULL;
findval(root,value,&temp);
if(temp == NULL)
{
cout<<"\nThe value does not exist:";
getch();
break;
}
deleteval(root,&temp);
break;
case 4:
cout<<"\nEnter the element to search:";
int val;
cin>>val;
initgraph(&gd,&gm,"e:\\tcpp\\bgi\\");
m = 0;
printtree(root,m);
drawlines(root);
search(root,val);
x = x1 = 20;
y = y1 = 10;
getch();
closegraph();
break;*/
case 5:
break;
default:
cout<<"\nEnter a valid choice:";
break;
}
cout<<endl<<"enter ur choice";
cin>>ch;
}while(ch!=5);
getch();
return 0;
}
