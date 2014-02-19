#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
       node *left,*right;
       int a;
       }*root;
       int r=0,l=0;
int height(node* temp)
{
     int h;
     if(temp!=NULL)
     {
                   if (height(temp->left)>=height(temp->right))
                   h=height(temp->left)+1;
                   else
                   h=height(temp->right)+1;
     }
     else 
     h=0;
     return h;}
node* rotation(node* temp,int b)
{node *temp1,*temp2;

      if(b>0)
      { temp1=temp->left;
      l=height(temp1->left);
    r=height(temp1->right);
    b=l-r;
             
             if(b>0)
             {
                        temp2=temp1->left;
                        temp->left=temp1->right;
                        temp1->right=temp;
                        temp=temp1;}
             else if(b<0)
             {cout<<"hi";
                  temp2=temp1->right;
                  temp->left=temp2->right;
                  temp1->right=temp2->left;
                  temp2->left=temp1;
                  temp2->right=temp;
                  temp=temp2;
                  }}
      else if(b<0)
      {
           temp1=temp->right;
           l=height(temp1->left);
    r=height(temp1->right);
    b=l-r;
               if((b-1)>0)
               {
                          temp2=temp1->left;
                          temp1->left=temp2->right;
                          temp->right=temp2->left;
                          temp2->right=temp1;
                          temp2->left=temp;
                          temp=temp2;
                          }
               else if((b-1)<0)
               {
                          temp2=temp1->right;
                          temp->right=temp1->left;
                          temp1->left=temp;
                          temp=temp1;
                          }}
      return temp;}
                      
node* add(node *temp,int q)
{
     if(temp==NULL)
     {
                  
                   temp=new node;
                   temp->a=q;
                   
                   
     temp->left=NULL;
     temp->right=NULL;
     }
     else if(q<=temp->a)
     {temp->left=add(temp->left,q);}
     else
     {temp->right=add(temp->right,q);}
    l=height(temp->left);
    r=height(temp->right);
     if((l-r)<=1&&(l-r)>=-1);
     else
     {cout<<l-r;
     temp=rotation(temp,l-r);}
     return temp;}
     
void out(node *p)
 {
          if(p!=NULL)
          {
                     
                     out(p->left);
                     cout<<"\n"<<p->a<<"\n";
                     out(p->right);
                     }
                     }     
int main()
{
    int r;
    root=NULL;
    int q;
    while(1)
    {cout<<"want to enter no. press 1\n";
    cout<<"want to pop out press 2\n";
   
    cout<<"want to exit press 4\n";
    cin>>q;
    if(q==4)
    {
    return 0;}
    else if(q==1)
    {
         cout<<"enter the no. to add in tree";
     cin>>r;
   root= add(root,r);}
    else if(q==2)
    {
    out(root);}
    }
   return 0;
}
