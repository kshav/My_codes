#include <iostream>
#include <conio.h>
using namespace std;

struct node{
       int data;
       node *link;
}*p,*tmp;

int main()
{
    node *arr[6];
    
    //1
    p=new node;
    p->data=2;
    p->link=NULL;
    arr[0]=p;
    
    //2
    p=new node;
    p->data=2;
    p->link=NULL;
    tmp=p;
    arr[1]=p;
    
    p=new node;
    p->data=4;
    p->link=NULL;
    tmp->link=p;
    tmp=p;
    
    p=new node;
    p->data=5;
    p->link=NULL;
    tmp->link=p;
    
    //3
    arr[2]=NULL;
    
    //4
    p=new node;
    p->data=1;
    p->link=NULL;
    tmp=p;
    arr[3]=p;
    
    p=new node;
    p->data=5;
    p->link=NULL;
    tmp->link=p;
    
    //5
    p=new node;
    p->data=4;
    p->link=NULL;
    arr[4]=p;
    
    //6
    p=new node;
    p->data=3;
    p->link=NULL;
    arr[5]=p;
    
    for (int i=0;i<6;i++){
        p=arr[i];
        while (p!=NULL){
              cout << p->data;
              p=p->link;
        }
        cout << "\n";
    }
    
    
    
    getch();
    return 0;
}
