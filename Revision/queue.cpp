#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
       int info; 
       node *link;
}*start,*end,*p,*temp;

void insert()
{  
   
    
     p=new node;
     end->link=p;
     end=p;
     cout<<"Enter a no. ";
     cin>>end->info;
    
          if(start==NULL)
           start=end;
}
     
void del()
{
     if(start!=NULL)
     {
     temp=start;
     start=start->link;
     free(temp);
     if(start==end)
     start=NULL;
     }
     else
     cout<<"No element is present";
} 
     
int main()
{
    int n;
    char a;
    p=new node;
    cout<<"Enter a no. ";
    cin>>p->info;
    start=p;
    start->link=NULL;
    end=start;
    do{
    cout<<"1.Insert/n 2.Delete";
    cin>>n;
    if(n==1)
    insert();
    else if(n==2)
    del();
    cout<<"Do you want to continue(y/n)";
    cin>>a;
      }
    while(a=='y');
    getch();
    return 0;
}   
    
 
