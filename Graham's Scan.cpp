#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159265
struct node{
       int x,y;
       float angle;
       node  *right;
       };
int Area(float x1,float y1,float x2,float y2,float x3,float y3 )
{
    cout<<x1<<" "<<x2<<" "<<x3<<" "<<endl;
    float p=(x1*(y2-y3)-y1*(x2-x3)+(x2*y3-x3*y2));
    cout<<p<<endl;
    if(p>=0)
    return 0;
    else if(p<0)
    return -1;
}
int main()
{
    int n,i,ymin=10000,xmin=10000;
    cout<<"Enter the number of points in plane"<<endl;
    cin>>n;
   node *newptr[n];
    for(i=0;i<n;i++)
    {
                       newptr[i]= new node;
                       newptr[i]->right=NULL;
                       newptr[i]->angle=0;
                       newptr[i]->x=0;
                       newptr[i]->y=0;
                      
    }
    
    for(i=0;i<n;i++)
    {cin>>newptr[i]->x>>newptr[i]->y;
    if(newptr[i]->y < ymin)
    {ymin=newptr[i]->y;xmin=newptr[i]->x;}
    }
    
    for(i=0;i<n;i++)//angle substended by the point p0 and the point pi on the positive x - axis 
    {
                    if(newptr[i]->x==xmin&&newptr[i]->y==ymin)
                    newptr[i]->angle=0;
                    else if(newptr[i]->x==xmin)              
                    newptr[i]->angle=90;
                    else 
                    {
                         float slope=((newptr[i]->y-ymin)*1.0)/(newptr[i]->x-xmin);
                          newptr[i]->angle = atan (slope) * 180 / PI;
                    }
    }
    
      for(int i=0;i<n;i++)//bubble sort 
      { 
              for(int j=i+1;j<n;j++)
              {
                      if(newptr[i]->angle> newptr[j]->angle)
                      swap(newptr[i],newptr[j]); 
              }
      }
      for(i=0;i<n-1;i++)//linking all the elements in an list
      {
                      newptr[i]->right=newptr[i+1];
      }
      node *p=newptr[0],*p1=newptr[0],*p2,*p3;
      int temp;
      do{
           
           p2=p1->right; 
           if(p2->right)
           p3=p2->right;
           else
           p3=p;
           temp=Area(p1->x,p1->y,p2->x,p2->y,p3->x,p3->y);
           cout<<temp;
           if(temp>=0)
           p1=p1->right;
           else
           {
            p1->right=p3;
            p2->right=NULL;
            delete p2;
           }
      }while(!(p3==p)&&(temp>=0));
      
      p=newptr[0];
      do
      {cout<<p->x<<" "<<p->y<<endl;
      p=p->right;
      }while(p->right!=NULL);
      cout<<p->x<<" "<<p->y;
system("pause");
return 0;      
}
      
      
