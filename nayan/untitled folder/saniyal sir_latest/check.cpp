#include<iostream>
#include<conio.h>
using namespace std;
struct std
{
 string data;
 int info;
}m[26],small;
struct node 
{
 string info;
 int no;
 node *left,*right;
}*newptr[2],*root[10];
int s[20],x=-1;
void trie(int q,int &k)
{
    for(int i=0;i<2;i++)
    {
    newptr[i]=new node;
    newptr[i]->info=m[k].data;
    newptr[i]->no=m[k].info;
    newptr[i]->left=NULL;
    newptr[i]->right=NULL;
    k--;
   }
   root[q]=new node;
   root[q]->info=newptr[1]->info+newptr[0]->info;
   root[q]->no=newptr[0]->no+newptr[1]->no;
   root[q]->left=newptr[1];
   root[q]->right=newptr[0];
   //cout<<root[q]->info<<" "<<root[q]->no<<" "<<root[q]->left->no<<" "<<root[q]->left->info.size()<<" "<<root[q]->right->info.size()<<" "<<root[q]->right->no<<"\n";
}
void preorder(node *ptr)
{
  if(ptr!=NULL)
  {
   if(ptr->info.size()==1)
   {
   cout<<"\n";cout<<ptr->info;
   for(int i=0;i<=x;i++)
   cout<<s[i];
   cout<<"\n";
   }
   s[++x]=0;
   preorder(ptr->left);
   x--;
   s[++x]=1;
   preorder(ptr->right);
   x--;
  }
}
void pre(node *ptr)
{
     if(ptr!=NULL)
     {
                  cout<<ptr->info;
                  pre(ptr->left);
                  pre(ptr->right);
     }
}
     
void insert(int k)
{
 
 int n,l=k,q=0;
 for(n=0;n<l;n++)
 {
             int i,pos,j;
             for(i=0;i<=k;i++)
             {
                           small=m[i];
                           pos=i;
                           for(j=i+1;j<=k;j++)
                           {
                           if(m[j].info>small.info)
                           {
                                       small=m[j];
                                       pos=j;
                           }
                           }
                           swap(m[i].data,m[pos].data);
                           swap(m[i].info,m[pos].info);
             }

    //creation of trie
    trie(q,k);
  
  q++;
  k++;
  m[k].data=root[q-1]->info;
  m[k].info=root[q-1]->no;
  //cout<<m[k].data<<"  "<<m[k].info;
}

  
 for(int i=1;i<q;i++)
 {
     for(int j=0;j<i;j++)
     {
               if(root[j]!=NULL)
               {
               if(root[i]->left->info==root[j]->info)
               {
               root[i]->left=root[j];
               root[j]=NULL;
               }
               else if(root[i]->right->info==root[j]->info)
               {
               root[i]->right=root[j];
               root[j]=NULL;
               }
               }
     }
  }
   preorder(root[q-1]);
}
int main()
{
 string a;
 cin>>a;
 int i,j,k=-1,flag=0;
 for(i=0;a[i]!='\0';i++)
 {
         flag=0;
         for(j=0;j<=k;j++)
         {
             if(m[j].data[0]==(a[i]))
             {
             flag=1;
             break;
             }
         }
         if(flag==0)
         {
          m[++k].data=a[i];
          m[k].info++;
         }
         for(j=i+1;a[j]!='\0'&& flag==0;j++)
         {
         if(a[j]==a[i])
         m[k].info++;
         }
 }
 for(i=0;i<=k;i++)
 cout<<"\n"<<m[i].data<<" "<<m[i].info;
 cout<<"\n\n\n\n";

 insert(k);
 getch();
 return 0;
}
