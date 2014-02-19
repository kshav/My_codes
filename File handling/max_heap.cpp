#include<iostream>
#include<conio.h>
using namespace std;

struct tree
{
       float info;
       int num;
       tree *lc,*rc;
} *root=NULL,*start=NULL,*l=NULL,*r=NULL,*t=NULL,*tp=NULL,*tb=NULL;

int cont=-1,k=1;
float temp,t2;


void porder(tree *p)
{
    if(p!=NULL)
     {
     if(p->lc==t||p->rc==t)
     tp=p;
     porder(p->lc);
     porder(p->rc);
     }
}

void insert()
{
     if(tp->info<t->info)
     {
         temp=t->info;
         t->info=tp->info;
         tp->info=temp;
         t=tp;   
         porder(root);
         insert();      
     }                
}

int s;

void kk(tree *p)
{
       if(p!=NULL)
     {
     if(p->num==s)
     tb=p;
     kk(p->lc);
     kk(p->rc);
     }
}



void heapify(tree *l)
{  while(l!=NULL)
    { if(l->lc->info > l->rc->info && l->lc->info > l->info )
     {
        t2=l->info;
        l->info=l->lc->info;
        l->lc->info=t2;
        l=l->lc;
        heapify(l);         
     }
     else if(l->lc->info < l->rc->info && l->rc->info > l->info )
     {
        t2=l->info;
        l->info=l->rc->info;
        l->rc->info=t2;
        l=l->rc;
        heapify(l);        
     }
    }
}

 int q=0;

void del()
{  
     if(q==0)
     {s=tb->num;
      q++;}
        while(root!=NULL)
     {cout<<root->info<<" ";
     root->info=tb->info;
     
     free(tb);
     s--;
     kk(root);
     heapify(root);
     del();
     }
}



void pre(tree *p,int j)
{
       if(p!=NULL)
     {
     if(p->num==j)
     start=p;
     pre(p->lc,j);
     pre(p->rc,j);
     }
}


void Enter(tree *p,float e)
{
     
     if(p==NULL)
     {
                ++cont;
                p=new tree;
                p->info=e;
                p->num=cont;
                p->lc=p->rc=NULL;
                if(root==NULL)
                root=p;
                cout<<"\n\t\tRoot Created!!!\n";
     }
     else if(p->lc==NULL)
     {
          ++cont;
          p->lc=new tree;
          p=p->lc;
          t=p;
          tb=p;
          p->info=e;
          p->num=cont;
          p->lc=p->rc=NULL;
     }
     else if(p->rc==NULL)
     {
          ++cont;
          p->rc=new tree;
          p=p->rc;
          t=p;
          tb=p;
          p->info=e;
          p->num=cont;
          p->lc=p->rc=NULL;
     }
     else
     {
         pre(root,k);
         Enter(start,e);
         if(cont%2==0)
         k=k+1;
     }
}

void preorder(tree *p)
{
     if(p!=NULL)
     {
                cout<<p->info<<" ";
                preorder(p->lc);
                preorder(p->rc);
     }
}
          
int main()
{ int i=0;
    float x;
    char c;
    do
    {
         cout<<"\nEnter the new node of Tree: ";
         cin>>x;
         
          Enter (root,x);
         if(i!=0)
         { porder(root);
         insert();}
         i++;
         cout<<"\nDo you want to continue?(y/n): ";
         cin>>c;
    }while(c=='y'||c=='Y');
    cout<<"\nThe Binary Tree in preorder is as follow:\n ";
    preorder(root);
    cout<<"\n\n";
    del();
   // cout<<root->info;
    getch();
    return 0;
}
