#include<iostream>
#include<conio.h>
using namespace std;
struct stud
{
       int a,b;
       stud *ptr;
};
int main()
{
    stud *start,*last;
    stud *nptr;
    nptr=new stud;
    cin>>nptr->b;
    cin>>nptr->a;
    nptr->ptr=NULL;
    start=nptr;
    last=nptr;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
         stud *pptr;
         pptr=new stud;
         cin>>pptr->b;
         cin>>pptr->a;
         last->ptr=pptr;
         last=pptr;
           last->ptr=NULL;   
    }
    int k;
    cin>>k;
    nptr=start;
    for(int i=0;i<=k;i++)
    nptr=nptr->ptr;
    cout<<nptr->a;
    cout<<nptr->b;
    getch();
    return(0);
}
    
    
         
    
    