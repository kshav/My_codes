#include<iostream>
#include<fstream>
using namespace std;
ofstream fout;
ifstream fin;

struct node
{
    float n;
    node *left,*right;
}*temp,*start,*p,*root;   

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
     {fout<<t->n<<"\n";
     preorder(t->left);
     preorder(t->right);}
}
                    
void porder(node *t)
{
     if(t!=NULL)
     {cout<<"\n"<<t->n;
     porder(t->left);
     porder(t->right);}
}
     

int main()
{   srand(time(0));
    int s=0,r,c;
    cout<<"Enter the no. of nodes";
    cin>>r;
    p=new node;
    c=rand()%100;
    p->n=c;
    p->left=p->right=NULL;
    root=p;
    temp=p;
    do
    {
       p=new node;
       p->left=p->right=NULL;
       c=rand()%100;
       p->n=c;
       func(root,p);
        s++;
    }while(s<r-1);
    fout.open("myfile.txt",ios::app);
    preorder(root);
    fout.close();
   temp=start=root=NULL;
    
    fin.open("myfile.txt");
    for(int i=0;i<r;i++)
    {
            
            if(i==0)
            {  fin>>c;
               p=new node;
               p->left=p->right=NULL;     
               p->n=c;
               root=start=p;           
            }
            else
            {
            fin>>c;
            p=new node;
            p->left=p->right=NULL;
            p->n=c;
            func(root,p);
            }
    }    
    porder(root);
    cout<<"\n";
    system("pause");
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

           
    
    
