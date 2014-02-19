#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
       int power;
       int coeff;
       node *next;
} *s1=NULL,*s2=NULL,*s3=NULL,*temp,*ptr,*save;

void create_poly(node *&start , int p, int c)
{
     ptr=new node;
     ptr->power=p;
     ptr->coeff=c;
     ptr->next=NULL;
     
     if(start==NULL)
     {
                    start=ptr;
     }
     else
     {
         temp=start;
         while(temp)
         {
                    save=temp;
                    temp=temp->next;
         }
         save->next=ptr;
         
     }
}

void display(node *&start)
{
     temp=start;
     while(temp!=NULL)
     {
                      cout<<temp->coeff<<" x^"<<temp->power<<"+";
                      temp=temp->next;
     }
}

void sum()
{
     node *p1,*p2;
     p1=s1;
     p2=s2;
     while(p1!=NULL&&p2!=NULL)
     {
                  if(p1->power > p2->power)
                  {
                                         create_poly(s3 , p1->power, p1->coeff);
                                         p1=p1->next;
                  }
                  else if(p2->power > p1->power)
                  {
                                        create_poly(s3 , p2->power, p2->coeff);  
                                        p2=p2->next;
                  }
                 else
                  {
                                        create_poly(s3 , p2->power, p2->coeff+p1->coeff);  
                                        p2=p2->next;
                                        p1=p1->next;
                  }
     }
     
     while(p1!=NULL)
     {
            create_poly(s3 , p1->power, p1->coeff);
            p1=p1->next;  
     }
      while(p2!=NULL)
     {
            create_poly(s3 , p2->power, p2->coeff);
            p2=p2->next;  
     }
           
}
                                 
                      
                     
     

int main()
{
    char ch='y';
    int p,c;
    cout<<"\n FOR THE FIRST POLYNOMIAL ENTER DETAILS :";
    while(ch=='y' 
    || ch=='Y')
    {
                  cout<<"\n ENTER POWER : ";
                  cin>>p;
                  cout<<"\n ENTER COEFFICIENT : ";
                  cin>>c;
                  create_poly(s1,p,c);
                  cout<<"\n DO YOU WANT TO ENTER MORE TERMS ? : ";
                  cin>>ch;
    }
    
    ch='y';
    cout<<"\n FOR THE SECOND POLYNOMIAL ENTER DETAILS :";
    while(ch=='y' || ch=='Y')
    {
                  cout<<"\n ENTER POWER : ";
                  cin>>p;
                  cout<<"\n ENTER COEFFICIENT : ";
                  cin>>c;
                  create_poly(s2,p,c);
                  cout<<"\n DO YOU WANT TO ENTER MORE TERMS ? : ";
                  cin>>ch;
    }
    
    cout<<"\n FIRST POLYNOMIAL : ";
    display(s1);
    cout<<"\n SECOND POLYNOMIAL : ";
    display(s2);
    sum();
    cout<<"\n SUM OF THE TWO POLYNOMIALS IS : ";
    display(s3);

    
    getch();
    return 0;
}
    
