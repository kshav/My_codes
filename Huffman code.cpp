#include<iostream>
using namespace std;

struct node
{
       float k;
       string a;
       node *left,*right;
}*temp,*root,*p;

int main()
{
    cout<<"Enter no of characers: ";
    int n;
    cin>>n;
    node *start[n];
    for(int i=0;i<n;i++)
    {  cout<<"\n";
       start[i]=new node();
       cout<<"Enter char: ";
       cin>>start[i]->a;
       cout<<"\n";
       cout<<"Enter freq: ";
       cin>>start[i]->k;
    }
    
    
    system("pause");
    return 0;
}
    
