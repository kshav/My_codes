#include<iostream>
#include<conio.h>
using namespace std;
struct node 
{
     int info;
     node *left;
     node *right;
};
void inorder(node *ptr)        //inorder traversal
{
      if(ptr!=NULL)
      {
      cout<<ptr->info<<" ";
      inorder(ptr->left);
      inorder(ptr->right);
      }
}


void insert(node *&ptr)        //function to insert into the tree
{
      node *newptr;
      newptr=new node;
      cout<<"Enter Info : ";
      cin>>newptr->info;
      newptr->left=NULL;
      newptr->right=NULL;
      if(ptr==NULL)                //checking if root is NULL    
      ptr=newptr;
      else
     {
           node *temp,*temp1;
           temp=ptr;
           while(temp!=NULL)       //loop to determine the positon where the node has to be inserted
           {
                  temp1=temp;
                  if(temp->info<newptr->info)
                  temp=temp->right;
                  else if(temp->info>newptr->info)
                  temp=temp->left;
                  else
                  break;
           }
           if(temp==temp1)                             //if number exist
           cout<<"Number Already Exist In The Tree ";
           else                                       //number not exist
           {
           if(temp1->info<newptr->info)              //insert child at right end
           temp1->right=newptr;
           else                                     //insert child at left end
           temp1->left=newptr;
           }
     }
}

void delt(node *&root)                            //function to delete the number
{
        int n;
        cout<<"Enter The Number You Want To Delete : ";
        cin>>n;
        if(root==NULL)                           //if root is NULL
        cout<<"NO NODE IN THE TREE \n";
        else                                    //when root is not NULL
        {
              node *temp=NULL,*temp1=NULL;
              temp=root;
              temp1=root;
              while(temp!=NULL)                //loop to find the deletion number
              {
                      if(temp->info==n)
                      break;
                      else
                      {
                               temp1=temp;
                               if(temp->info<n)
                               temp=temp->right;
                               else if(temp->info>n)
                               temp=temp->left;
                      }
              }
      if(temp!=temp1)                   //if number find is not the root node
      {
              if(temp==temp1->left)         //if left child to be deleted
              {
                      if(temp->left!=NULL&&temp->right==NULL)
                      temp1->left=temp->left;
                      else if(temp->right!=NULL&&temp->left==NULL)
                      temp1->left=temp->right;
                      else if(temp->left==NULL&&temp->right==NULL)
                      temp1->left=NULL; 
                      else                  //both child of the node to be deleted exist
                      {
                               node *x=temp->left;
                               while(x->right!=NULL)
                               {
                               x=x->right;
                               };
                               temp1->left=temp->left;
                               x->right=temp->right;
                      }
                      delete (temp);
             }
             else                        //if right child to be deleted
             {
                      if(temp->left!=NULL&&temp->right==NULL)
                      temp1->right=temp->left;
                      else if(temp->right!=NULL&&temp->left==NULL)
                      temp1->right=temp->right;
                      else if(temp->left==NULL&&temp->right==NULL)
                      temp1->right=NULL; 
                      else                //both child of the node to be deleted exist
                     {
                               node *x=temp->right;
                               while(x->right!=NULL)
                               {
                               x=x->right;
                               };
                               temp1->left=temp->left;
                               x->right=temp->right;
                     }
              }
              delete (temp);
    }  
      else                              //if number to be deleted is root node
      {
            if(temp->left!=NULL&&temp->right==NULL)
            root=temp->left;
            else if(temp->right!=NULL&&temp->left==NULL)
            root=temp->right;
            else if(temp->left==NULL&&temp->right==NULL)
            root=NULL; 
            else                      //both child of the node to be deleted exist
            {
                       node *x=temp->left;
                       while(x->right!=NULL)
                       {
                        x=x->right;
                       }
            root=temp->left;
            x->right=temp->right;
            }
            delete(temp);
       }
    }
}

/*
void height(int &level,int &x,int&y,node *ptr)   //function to find max and min height
{
        level++;
        if(ptr!=NULL)
        {
                if(x<level)                  //find the max height
                x=level;
                if(ptr->left==NULL&&ptr->right==NULL&&(y>level))
                { 
                y=level;                   //find the min height
                }
                height(level,x,y,ptr->left);
                height(level,x,y,ptr->right);
      }
      level--;
} */
 
 
 
int main()
{
    
    node *root=NULL,*newptr;
    char ch;
    do
    {
    int level=-1,x=-1,y=200,flag=1,p;
    cout<<"1.INSERT\n2.DELETE\n3.INORDER TRAVERSAL\n\nEnter Your Choice : ";        //menu bar
    cin>>p;
    switch(p)
    {
     case 1:{                                //insertion in the tree
            insert(root);
            height(level,x,y,root);
            cout<<"\nMax Height : "<<x<<"\nMin Height : "<<y;
            break;
            }
    case 2:{                                //deletion in the tree
           if(root==NULL)
           cout<<"TREE Is Empty ";
           else
           {
           delt(root);
           height(level,x,y,root);
           if(root!=NULL)
           cout<<"\nMax Height : "<<x<<"\nMin Height : "<<y;
           else
           cout<<"TREE Is Empty ";
           }
           break;
           }
    case 3:{                                 //inorder traversal
           if(root==NULL)               
           cout<<"TREE Is Empty ";
           else
           inorder(root);
           break;
           }       
    default:
          cout<<"Wrong Choice";
     }
     cout<<"\n\nDo You Wish To Continue ";
     cin>>ch;
     }while(ch=='y'||ch=='Y');
     return 0;
}    
