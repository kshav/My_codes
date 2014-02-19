#include<iostream>
using namespace std;

struct node
{
       int val;
       int cap;
       node *child[10];
}*temp,*start,*root,*p;

int main()
{
    int n,capacity;
    n=5;
    capacity = 10;
    int value[n],weight[n];
    for(int i=0;i<n;i++)
    cin>>value[i];
    for(int i=0;i<n;i++)
    cin>>weight[i];
    p=new node();
    p->val=0;
    p->cap=capacity;
    for(int i=0;i<10;i++)
    child[i]->NULL;
    root=p;
    start=p;
    for(int i=0;i<n-1;i++)
    {
            p=new node();
            start=root;
            start->child[i]=p;
            start->val=value[i]
