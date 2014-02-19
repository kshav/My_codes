#include<iostream>
#include<conio.h>
using namespace std;
struct node {
       node *left,*right;
       int value;
       }*temp;
       void addnode(node*,node*);
       void del(node*,int);
       void inorder(node*);
       int height(node *);
main()
{
      int i,j,n,h;
      char opt,ans;
      node *curr=NULL;
       do {
                  temp = new node;
                  cout<<"  Enter the value of the node : ";
                  cin>>temp->value;
                  temp->left=NULL;
                  temp->right=NULL;
                  if(curr==NULL)
                   {
                    curr=temp;
                    cout<<"  The root node is added";
                   }
                  else
                    addnode(curr,temp);
                    cout<<"want to enter more ? ";
                    cin>>opt;
      }while(opt=='y');
      h=height(curr);
      cout<<h;
      do {
      cout<<"enter the no. which is to be deleted ";
      cin>>n;
      del(curr,n);
      cout<<"want to delete more ? ";
      cin>>ans;
      }while(ans=='y');
      cout<<"iorder serch is : ";
      inorder(curr);
      getch();
      return 0;
      }
      void addnode(node *fcurr, node *fnew )
{
  if(fcurr->value==fnew->value)
   cout<<"repeataion is not allowed";
 else
   {
    if(fcurr->value > fnew->value)
     {
      if(fcurr->left != NULL)
                addnode(fcurr->left, fnew);
      else
                {
                fcurr->left = fnew;
                (fcurr->left)->left=NULL;
                (fcurr->left)->right=NULL;
                }
     }
    else
     {
      if(fcurr->right != NULL)
                addnode(fcurr->right, fnew);
      else
                {
                fcurr->right = fnew;
                (fcurr->right)->left=NULL;
                (fcurr->right)->right=NULL;
                }
     }
   }
}
void del(node *fcurr,int n)
{
     if(fcurr->value==n)
     {
                       if(fcurr->right!=NULL)
                       {
                                              temp=fcurr->right;
                                             if((fcurr->right)->left!=NULL)
                                             {
                                             while(temp!=NULL)
                                             temp=temp->left;      
                                             fcurr->value=temp->value;
                                             }
                                             else
                                             {
                                              fcurr->value=temp->value;
                                              fcurr->right=temp->right;                  
                                              }
                                                 delete temp;
                       }                         
                       else if(fcurr->left!=NULL)
                        {
                                                 temp=fcurr->left;
                                                 fcurr->value=temp->value;
                                                 fcurr->left=temp->left;
                                                 delete temp;
                        } 
                        else if(fcurr->left==NULL,fcurr->right==NULL)
                        delete fcurr;                        
     }
     else if(fcurr->value<n)
     del(fcurr->right,n);
     else
     del(fcurr->left,n);
     }
     void inorder(node *fcurr)
     {
          if(fcurr!=NULL)
          {
          inorder(fcurr->left);
          cout<<fcurr->value;
          inorder(fcurr->right);
     }
     }
     int height(node* fcurr)
{
	if(fcurr == NULL)
	{
		return -1;
	}
	{
		int l = height(fcurr->left);
		int r = height(fcurr->right);
		if( l > r)
		return (l + 1);
		else 
		return (r + 1);
	}
}

