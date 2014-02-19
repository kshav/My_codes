#include <iostream>
using namespace std;
struct node
 {
    struct node * right;
    struct node * left;
    int info;
 };
int a[] = {1, 4, 7, 6, 3, 13, 14, 10, 8};
void postorder( node * ptr)    //post order traversal
{
     if(ptr!=NULL)
     {
      postorder(ptr->left);
      postorder(ptr->right);
      cout<<ptr->info<<"\n";
     }
} 
int lower( int beg, int end)  // find 1st smallest element 
{
    int i = end-1;
    if(end < beg)
    return -1;
    while(i >=beg)
    {
    if(a[end]> a[i])
    return i;
    i--;
    }
    return -1;                  
}
int great(int beg, int end)   //find 1st greatest element from end
{
    int i = end-1;
    if(end < beg)
    return -1;
    while(i >= beg)
    {
    if(a[end]< a[i])
    return i;
    i--;
    }
    return -1;
}
void tree(node * root, int beg, int end)
{
   int r;
   int rs = beg,re = end,ls = beg,le = end;
   if(root == NULL)
   return;
   if((beg >= end))
   return;
   r=great( beg, end);  //find the first greater element 
   if(r>= 0)           //right child exist
    {
        root->right = new node;
        (root->right)->left = NULL;
        (root->right)->right = NULL;
        (root->right)->info = a[r];
         re = r;
    }
    r=lower( beg,end);  //find the first smallest element 
    if(r >= 0)         // left child exist
    {
        root->left =new node;
        (root->left)->left = NULL;
        (root->left)->right = NULL;
        (root->left)->info = a[r];
        le = r;   
        rs = le+1;
    }
   if(root->right != NULL)
   tree(root->right, rs, re);
   if(root->left != NULL)
   tree(root->left,ls, le);
   return;
}
 int main()
{
    node * root = new node;
    root->right = NULL;
    root->left = NULL;
    root->info = a[8];
    tree(root, 0, 8);
    postorder(root);  // tree generated from array
    system("pause");
}
