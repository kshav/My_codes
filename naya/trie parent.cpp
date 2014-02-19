#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
struct node
{ 
    char info;
    node *ptr[26];
    node *parent;
    int bol;
}*root=NULL;
 int j=0,flag=1;
 void insert(node *temp,char a[],int f)
 {
    for(int i=0;i<26;i++)
    {
         if(temp->ptr[i]!=NULL)
         {
               if(temp->ptr[i]->info==a[j])
               {
               j++;
               insert(temp->ptr[i],a,f);
               }
         }
    }
    if(j<=strlen(a)&& flag==1&&temp->bol==0&&f==1)
    {
    temp->bol=1;
    cout<<"string does not exist ";
    flag=0;
    return ;
    }
    
    else if(j<strlen(a)&& flag==1&&temp->bol==1&&f==1)
    {
    temp->bol=1;
    cout<<"string does not exist ";
    flag=0;
    return ;
    }
    else if(j==strlen(a)&& flag==1 &&temp->bol==1&&f==1)
    {
    cout<<"string exist ";
    flag=0;
    return ;
    }
    else if(j==strlen(a)&& flag==1 &&f==0)
    {
    temp->bol=1;
    flag=0;
    return ;
   }
    else if(flag==1&&f==0)
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
         newptr->parent=temp;
         temp=temp->ptr[int(a[j])-97];
         newptr->bol=0;
         }
         temp->bol=1;
         //cout<<"successful added";
   }
 }
  void inorder1(node *temp)
 {
      if(temp!=NULL)
      for(int i=0;i<26;i++)
      {
      if(temp->ptr[i]!=NULL)
      cout<<temp->ptr[i]->info ;
      inorder1(temp->ptr[i]);
      }
 }
 void inorder(node *temp)
 {
      if(temp!=NULL)
      {
         for(int i=0;i<26;i++)
         {
             if(temp->ptr[i]!=NULL)
             {
             inorder(temp->ptr[i]);
             }
         }
         if(temp->bol==1)
         {
          int l=0;
          char v[20];
          node *nayan;
          nayan=temp;
          while(nayan!=root)
          {
          v[l]=nayan->info;
          l++;
          nayan=nayan->parent;
          }
          ofstream fout;
          fout.open("nayan.txt",ios::app);
          for(int h=l-1;h>=0;h--){
          cout<<v[h];
          fout<<v[h];
          }
          fout<<"\n";
          fout.close();
          cout<<"\n";
          }
      }
 }
int main()
{
   char a[20],ch;
   int f=0;
   string b;
   ifstream fin;
   fin.open("in.txt",ios::out);
   root=new node;
   root->info='x';
   for(int i=0;i<26;i++)
   root->ptr[i]=NULL;
   root->parent=NULL;
        while(1)
        {
            fin>>b;
            if(fin.eof())
            break;
            j=0;
            flag=1;
            
            cout<<b<<"\n";
            int i=0;
            while(b[i]!='\0')
            {
            a[i]=b[i];
            i++;
            }
            a[i]='\0';
            insert(root,a,f);
        }
         inorder(root);
        f=1;
         while(1)
        {
            j=0;
            flag=1;
            cout<<"enter the string you want to check ";
            cin>>a;
            insert(root,a,f);
            cout<<"\n";
            cout<<"\n do you want to continue  ";
           cin>>ch;
       }while(ch=='y'); 
       inorder(root);
       getch();
   return 0;
}
