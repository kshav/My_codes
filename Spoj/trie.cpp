#include<iostream>
#include<string.h>
using namespace std;

struct node
{
   char a;
   node *ptr[26],*parent;
   int val;
}*root=NULL,*start=NULL,*temp=NULL,*p=NULL,*maxi=NULL;
  
void func(char t[],int l,int value)
{
   for(int i=0;i<l;i++)
   {
      int s=t[i];
      s=s-97;
      if(temp->ptr[s]==NULL)     
      {p=new node;
       for(int j=0;j<26;j++)
       p->ptr[j]=NULL;
       p->a=t[i];
       temp->ptr[s]=p;
       p->parent=temp;
       p->val=0;
       if(i==l-1)
       p->val=value;
       temp=temp->ptr[s];}
       else
       {temp=temp->ptr[s];
        if(i==l-1)
        temp->val=value;
       }
   }
   cout<<"Successfully added\n";
} 

void search()
{
     int count=0,max=-100;
     string h;
     cin>>h;
     int d=h.size();
     char v[d];
     for(int i=0;i<d;i++)
     v[i]=h[i];
     for(int i=0;i<d;i++)
     {int y=v[i];
      y=y-97;
      if(temp->ptr[y]!=NULL)
      {
      temp=temp->ptr[y];
      //cout<<"Testing: "<<temp->a<<" ";
      count++;}
      else
      {//cout<<"Sorry no match\n";
      break;}}
       int flag=0,j,flag2=0,start=-1,stack[1000],end=0,begin=-1;
       char word[100];
       if(count==d && temp->val!=0)
       {//cout<<"Word is in the directory  ";
        //cout<<"Value is :  "<<temp->val<<"\n";
       }
       
       else if(count==d && temp->val==0)
       {
            int i=0;
            while(end>=-1)
            {
                for(;i<26;i++)
                {flag2=0;
                if(temp->ptr[i]!=NULL)
                {start++;
                stack[start]=i;
                //cout<<"Start = "<<start<<"\n";
                //cout<<" Before New Testing: "<<temp->a<<" ";
                //cout<<"VAlue in stack: "<<stack[start]<<"\n";
                flag2=1;
                //cout<<"Flag2= "<<flag2<<"\n";
                temp=temp->ptr[i];
                i=0;
                //cout<<"New Testing: "<<temp->a<<" ";
                break;}}
                //cout<<"Hello\n";
                //cout<<"Start1 = "<<start<<"\n";
                if(flag2==0 && temp->val!=0)
                {if(temp->val > max )
                {max=temp->val;
                //cout<<"MAx value: "<<max<<"\n";
                maxi=temp;}
                temp=temp->parent;
                i=stack[start]+1;
                start--;
                //cout<<"Start2 = "<<start<<"\n";
                }
                else if(flag2==0 && temp->val==0)
                {//cout<<"Flag2 new= "<<flag2<<"\n";
                 temp=temp->parent;
                 i=stack[start]+1;
                 start--;
                 //cout<<"Start3 = "<<start<<"\n";
                }  
                
                //cout<<"Start4 = "<<start<<"\n";                 
                end=start;
                //cout<<"End= "<<end;
                //cout<<"I= "<<i<<"\n";
            }
            //cout<<"Hiiiii";
            while(maxi->parent!=NULL)
            {begin++;
             word[begin]=maxi->a;
             maxi=maxi->parent;
            //cout<<"Byeeeeeee\n";
            }
            for(int il=begin;il>=0;il--)
            cout<<word[il];                                  
       } 
}
          
             
     
int main()
{  char f;
   int l,j;
   string k;
   int value;
   root=new node;
   for(int j=0;j<26;j++)
   root->ptr[j]=NULL;
   root->a='x';
   root->val=0;
   root->parent=NULL;
   do{
       cin>>k;
       cin>>value;
       l=k.size();
       char t[l];
       for(int i=0;i<l;i++)
       t[i]=k[i];
       temp=root;
       func(t,l,value);
       cout<<"Do u want to enter a new word <y/n>: \n";
       cin>>f;
     }
   while(f=='y');
   cout<<"Search for a word\n";
   do{
      temp=root;
      search();
      cout<<"Do u want to search for a word <y/n>: ";
      cin>>f;
      }
   while(f=='y');
   cout<<"\n";
   system("pause");
   return 0;
} 

  
