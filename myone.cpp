#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{          int index,cnt;  
        int keys[4]; //array of keys
        struct node *pow[5]=NULL; /* (n+1 pointers will be in use) 
                                   int arr[4];
                           int index;*/
        struct node *parent;                   
}*root=NULL,*p=NULL;

void insert(node *temp,int k)
{
     
  if(temp->cnt==4)
  {
    int arr[5];
    for(int i=0;i<4;i++)
    arr[i]=temp->keys[i];
    arr[4]=k;
    for(int i=0;i<4;i++)
    {for(int j=i;j<5;j++)
     if(arr[j]<arr[i])
      swap(arr[j],arr[i]);
    }
    temp->keys[0]=arr[2];
    temp->cnt=1;
    p=new node();
    p->cnt=0;                  
    temp->pow[0]=p;
    temp->pow[0]->keys[0]=arr[0]; 
    temp->pow[0]->keys[1]=arr[1];
    temp->pow[0]->cnt=2;
    temp->pow[0]->index=2;
    
    p=new node();                  
    p->cnt=0;
    temp->pow[1]=p;
    temp->pow[1]->keys[0]=arr[3]; 
    temp->pow[1]->keys[1]=arr[4];
    temp->pow[1]->cnt=2;
    temp->pow[0]->index=2;
   }
   else
   {
     int temp1=temp->cnt;
     int i=0;
     while(i<temp1)
     {
      if(k<temp->keys[i])
      {
        if(temp->pow[i]==NULL)
        {
          p=new node();
          p->cnt=0;
          temp->pow[i]=p;
          temp->pow[i]->keys[temp->pow[i]->cnt]=k;
          temp->pow[i]->cnt++;
        }
        else if(temp->pow[i]->cnt!=4)
        { temp->pow[i]->keys[temp->pow[i]->cnt]=k;                     
          temp->pow[i]->cnt++;
        }
        else
        {
              int arr[5];
    for(int i=0;i<4;i++)
    arr[i]=temp->pow[i]->keys[i];
    arr[4]=k;
    for(int i=0;i<4;i++)
    {for(int j=i;j<5;j++)
     if(arr[j]<arr[i])
      swap(arr[j],arr[i]);
    }
    root->keys[root->cnt]=arr[2];
    root->cnt++;
    
    p=new node();                  
   p->cnt=0;
    root->pow[i]=p;
    temp->pow[i]->keys[0]=arr[0]; 
    temp->pow[i]->keys[1]=arr[1];
    temp->pow[i]->cnt=2;
    temp->pow[i]->index=2;
    
    p=new node();                  
    p->cnt=0;
    temp->pow[i+1]=p;
    temp->pow[i+1]->keys[0]=arr[3]; 
    temp->pow[i+1]->keys[1]=arr[4];
    temp->pow[i+1]->cnt=2;
    temp->pow[i+1]->index=2; 
        }
      }
     }
     if(k>temp->keys[temp-1])
     {
         if(temp->pow[temp1]==NULL)
        {
          p=new node();
          p->cnt=0;
          temp->pow[temp1]=p;
          temp->pow[temp1]->keys[temp->pow[i]->cnt]=k;
          temp->pow[temp1]->cnt++;
        }
        else if(temp->pow[i]->cnt!=4)
        {
           temp->pow[temp1]->keys[temp->pow[i]->cnt]=k;                     
            temp->pow[temp1]->cnt++;
        }
        else
        {
                          int arr[5];
    for(int i=0;i<4;i++)
    arr[i]=temp->pow[i]->keys[i];
    arr[4]=k;
    for(int i=0;i<4;i++)
    {for(int j=i;j<5;j++)
     if(arr[j]<arr[i])
      swap(arr[j],arr[i]);
    }
    root->keys[root->cnt]=arr[2];
    root->cnt++;
    
    p=new node();                  
   p->cnt=0;
    root->pow[temp1]=p;
    temp->pow[temp1]->keys[0]=arr[0]; 
    temp->pow[temp1]->keys[1]=arr[1];
    temp->pow[temp1]->cnt=2;
    temp->pow[temp1]->index=2;
    
    p=new node();                  
    p->cnt=0;
    temp->pow[temp1+1]=p;
    temp->pow[temp1+1]->keys[0]=arr[3]; 
    temp->pow[temp1+1]->keys[1]=arr[4];
    temp->pow[temp1+1]->cnt=2;
    temp->pow[temp1+1]->index=2; 
            
        }
     }                                                          
   }  
int main()
{   int k,l=1;
    cout<<"How many no u want to input: ";
    cin>>n;
    p=new node();
    p->index=1;
    p->cnt=0;
    l++;
    root=p;
    start=p;
    if(n>4)
    {
     for(int i=0;i<4;i++)
     { cin>>k;
      start->keys[i]=k;}
      cnt=4;
     for(int i=0;i<n-4;i++)
     {cin>>k;
     start=root;
     insert(start,k);}
    }
    else
    {
     for(int i=0;i<n;i++)
      { cin>>k;
      start->keys[i]=k;}
    }
    if(root->pow[0]!=NULL)
    {for(int i=0;i<5;i++)
     cout<<root->pow[0]->keys[i]<<" ";
    }
    cout<<root[0];
    if(root->pow[1]!=NULL)
    {for(int i=0;i<5;i++)
     cout<<root->pow[1]->keys[i]<<" ";
    }
    cout<<root[1];    
      if(root->pow[1]!=NULL)
    {for(int i=0;i<5;i++)
     cout<<root->pow[1]->keys[i]<<" ";
    }
    cout<<root[2];
      if(root->pow[2]!=NULL)
    {for(int i=0;i<5;i++)
     cout<<root->pow[2]->keys[i]<<" ";
    }
    cout<<root[3];
      if(root->pow[3]!=NULL)
    {for(int i=0;i<5;i++)
     cout<<root->pow[3]->keys[i]<<" ";
    }
    cout<<root[4];
      if(root->pow[4]!=NULL)
    {for(int i=0;i<5;i++)
     cout<<root->pow[4]->keys[i]<<" ";
    }
}
   
     
