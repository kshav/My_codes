#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
    char info;
    node *next,*ptr[26];
}*root=NULL;
 int j=0,flag=1;
 void insert(node *temp,char a[])
 {
    for(int i=0;i<26;i++)
    {
         if(temp->ptr[i]!=NULL)
         {
               if(temp->ptr[i]->info==a[j])
               {
               j++;
               insert(temp->ptr[i],a);
               }
         }
    }
    
    if(j==strlen(a)&& flag==1)
    {
    cout<<"string exist ";
    flag=0;
    return ;
    }
    
    else if(flag==1)
    { 
         flag=0;
         for(;a[j]!='\0';j++)
         {
         node * newptr;
         newptr=new node;
         newptr->info=a[j];
         for(int k=0;k<26;k++)
         newptr->ptr[k]=NULL;
         temp->ptr[int(a[j])-97]=newptr;
         temp=temp->ptr[int(a[j])-97];
         }
         cout<<"successful added";
   }
 }
 
 void inorder(node *temp)
 {
      if(temp!=NULL)
      for(int i=0;i<26;i++)
      {
      if(temp->ptr[i]!=NULL)
      cout<<temp->ptr[i]->info ;
      inorder(temp->ptr[i]);
      }
 }
int main()
{
   char a[20],ch;
   root=new node;
   root->info='x';
   for(int i=0;i<26;i++)
   root->ptr[i]=NULL;
        do
        {
            j=0;
            flag=1;
            cout<<"enter the string ";
            cin>>a;
            insert(root,a);
            cout<<"\n";
            inorder(root);
            cout<<"\n do you want to continue  ";
            cin>>ch;
       }while(ch=='y'); 
   return 0;
}
