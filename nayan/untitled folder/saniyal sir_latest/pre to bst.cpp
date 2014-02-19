#include <iostream>
using namespace std;
 struct node{
    struct node * right;
    struct node * left;
    int info;
};
int a[] = {8, 3, 1, 6, 4, 7, 10, 14, 13};
void postorder( node * ptr)  //postorder traversal
{
     if(ptr!=NULL)
     {
      postorder(ptr->left);
      postorder(ptr->right);
      cout<<ptr->info<<"\n";
     }
} 
int lower( int beg, int end)  //find 1st smallest  element from starting
{
    int i = beg+1;
    if(end < beg)
    return -1;
    while(i <=end)
    {
    if(a[beg] > a[i])
    return i;
    i++;
    }
    return -1;
}
int great(int beg, int end)  //find 1st largest element from begin
{
    int i = beg+1;
    if(end < beg)
    return -1;
    while(i <=end )
    {
    if(a[beg]< a[i])
    return i;
    i++;
    }
    return -1;
}
 
void tree(node * root, int beg, int end) //binary search tree formation
{
   int r;
   int rs = beg,re = end,ls = beg,le = end;
   if(root == NULL)
   return;
   if((beg >= end))
   return;
    r=great( beg, end);  
    if(r<= 8&&r!=-1)    //to check whether right child exist or not
    {
        root->right = new node;
        (root->right)->left = NULL;
        (root->right)->right = NULL;
        (root->right)->info = a[r];
        rs = r;
    }
    r=lower( beg,end);  
    if(r <= 8&&r!=-1)   //to check whether left child exist or not
    {
        root->left =new node;
        (root->left)->left = NULL;
        (root->left)->right = NULL;
        (root->left)->info = a[r];
        ls = r;
        le=rs-1;
    }
   if(root->right != NULL)
   tree(root->right, rs, re);
   if(root->left !=NULL )
   tree(root->left,ls, le);
   return;
}
 int main()
{
    node * root = new node;
    root->right = NULL;
    root->left = NULL;
    root->info = a[0];
   tree(root, 0, 8);
   postorder(root);
   system("pause");
}
