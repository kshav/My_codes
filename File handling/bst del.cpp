#include<iostream>
using namespace std;
struct node
{
    int n;
    node *left,*right;
}*temp=NULL,*start,*p=NULL,*root,*t=root;

void func (node *k,node *pr)
{
     if((pr->n)>(k->n))
     {
           if(k->right==NULL)
            k->right=pr;
           else
           func(k->right,p);
     }
     else
     {
         if(k->left==NULL)
         k->left=pr;
         else
         func(k->left,p);
     }
}

void preorder(node *t)
{
     if(t!=NULL)
     {cout<<t->n<<"\n";
     preorder(t->left);
     preorder(t->right);}
}
                    

void search(int k)
{//cout<<t->n;/*
     if(t->n > k)
     {  temp=t;
     //cout<<temp->n;
        t=t->left;          
        search(k);  
     }
     else if(t->n < k)
     {
          temp=t;
          //cout<<temp->n;
          t=t->right;
          search(k);     
     }
     else
         return;
}

int main()
{   
    int s=0,r,c,y;
    cout<<"Enter the no. of nodes: ";
    cin>>r;
    p=new node;
    cin>>c;p->n=c;
    p->left=p->right=NULL;
    root=p;
    temp=p;
    t=root;
    cout<<t->n;
    do
    {
       p=new node;
       p->left=p->right=NULL;
       cin>>p->n;
       func(root,p);
       s++;
    }while(s<r-1);
 //   preorder(root);
    cout<<"Enter the value u want to search for: ";
    cin>>y;
    //cout<<t->n;
    search(y);
 /* cout<<"\n";
    cout<<temp->n;
    cout<<"\n";
    cout<<t->n;*/
    system("pause");
    return 0;
}
